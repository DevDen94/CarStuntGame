using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BridgeSetup_tutorial : BridgeSetup
{
    // Start is called before the first frame update
    public override void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    public override void Update()
    {
        // base.Update();
        if (eLevelStage.SetupStage == levelStage)
        {
            if (Input.GetMouseButtonDown(0) && !BridgeBuilderGUI.ClickedOnGUI() && !gui.gamePaused)
            {
        //    Debug.LogError("clicked");
                GameObject objClicked = GetSnapPointClicked();
                if (!DrawBeam)
                {
              //      Debug.LogError("drawBeam==false");
                    DestroyBeam(objClicked);
                }
                else if (null != objClicked)
                {
               //     Debug.LogError("createBeam");
                    if (bridgeCost + 100 <= bridgeBudget)
                    {
                        beamType = gui._beamType;
                        CreateBeam(objClicked);
                    }
                    isDrawing = true;
                }
                RaycastHit hit;
                if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 222))
                {
                    if (hit.collider.gameObject.TryGetComponent(out ResetPhysics _reset))
                    {
                        _reset.deleteBeam();
                    }
                    else if (hit.collider.gameObject.TryGetComponent(out ropeDestroyOnTouch _ropeDestroyOnTouch))
                    {
                        _ropeDestroyOnTouch.transform.parent.GetComponent<ResetPhysics>().deleteBeam();
                    }
                }

            }

            RecalculateCost();
        }
        else if (eLevelStage.PlayStage == levelStage)
        {
            if (trainController.trainHead.transform.position.x >= trainGoal)
            {
                finishedLevel = true;
            }
        }
    }

    public override GameObject GetSnapPointClicked()
    {
        Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit rh = new RaycastHit();

        if (Physics.Raycast(r, out rh, Mathf.Infinity, 1 << 8))
        {
            if (rh.collider.GetComponent<SnapPoint>().isBase)
            {
                return rh.collider.gameObject;
            }
        }

        return null;
    }

    public override BridgeBeam CreateBeam(GameObject snapPoint)
    {
        destroyUsingTrigger = true;
        AudioManager.instance.beamMake.Play();
        GameObject go = Instantiate(BridgeBeamPrefab, snapPoint.transform.position, new Quaternion()) as GameObject;
        BridgeBeam bb = go.GetComponent<BridgeBeam>();
        bb.isForceFull = true;
        bb.bridgeSetupParent = this;
        currentBeam = go;
        Vector3 newPos = new Vector3(snapPoint.transform.position.x, snapPoint.transform.position.y, gridOrigin.z);
        bb.StartLayout(newPos, snapPoint, this);
        bb.transform.parent = bridgeBeams.transform;
        if (allCreatedBeams.Contains(bb) is false)
        {
            allCreatedBeams.Add(bb);
        }
        return bb;
    }
}
