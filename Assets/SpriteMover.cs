using UnityEngine;

public class SpriteMover : MonoBehaviour
{
    public Transform startPosition; // Reference to the starting position GameObject
    public Transform endPosition;   // Reference to the ending position GameObject
    public float moveDuration = 2.0f; // Duration of the movement in seconds

    private float startTime;
    private bool isMoving = false;
    private bool movingForward = true; // True when moving from start to end, false when moving back

    private void Start()
    {
        // Start the movement when the script starts
        StartMoving();
    }

    private void Update()
    {
        if (isMoving)
        {
            // Calculate the current progress of the movement
            float journeyLength = Vector3.Distance(startPosition.position, endPosition.position);
            float distanceCovered = (Time.time - startTime) * (journeyLength / moveDuration);
            float journeyFraction = distanceCovered / journeyLength;

            // Update the sprite's position
            transform.position = Vector3.Lerp(startPosition.position, endPosition.position, journeyFraction);

            // Check if the movement is complete
            if (journeyFraction >= 1.0f)
            {
                // Reverse the direction
                movingForward = !movingForward;
                startTime = Time.time;

                // Swap start and end positions
                var temp = startPosition;
                startPosition = endPosition;
                endPosition = temp;
            }
        }
    }

    public void StartMoving()
    {
        // Initialize movement parameters
        startTime = Time.time;
        isMoving = true;
    }
}
