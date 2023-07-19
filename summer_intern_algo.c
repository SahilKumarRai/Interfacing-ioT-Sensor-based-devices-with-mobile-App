#include <stdio.h>
#include <math.h>
// Function to calculate the difference between two values
float calculateDifference(float threshold, float currentValue) {
    return threshold - currentValue;
}


int main() {
    // Step 1: Initialize variables
    int t = 1;
    float threshold1=1, threshold2=1, threshold3=1;
    float currentValue1, currentValue2, currentValue3;
    float delta = 0.5; // Set the safe difference threshold
    float difference1, difference2, difference3;


    // Step 4: Monitor current values periodically
    // Assuming there is a loop to monitor the values and repeat the process


    while (1) {
        // Update current values
        currentValue1 = 1 /* Measure the current value of temperature sensor */;
        currentValue2 = 1/* Measure the current value of gas sensor */;
        currentValue3 = 1/* Measure the current value of humidity sensor */;


        // Calculate the difference and check for safe difference
        difference1 = fabsf(calculateDifference(threshold1, currentValue1));
        difference2 = fabsf(calculateDifference(threshold2, currentValue2));
        difference3 = fabsf(calculateDifference(threshold3, currentValue3));


        if (difference1 < delta && difference2 < delta && difference3 < delta) {
            printf("No alert generated.\n");
            break;
        } else {
            // Alert notification
            printf("Alert: Fire detected!\n");
            break;
        }


        // Sleep for a specific interval before monitoring again
        // This interval can be adjusted according to your requirements
        // usleep(1000000); // Example: sleep for 1 second (uncomment this line if usleep is available)
    }


    return 0;
}


    // Step 2: Calculate the difference and check for safe difference
    //float difference1 = calculateDifference(threshold1, currentValue1);
    //float difference2 = calculateDifference(threshold2, currentValue2);
    //float difference3 = calculateDifference(threshold3, currentValue3);


    //if (difference1 < delta && difference2 < delta && difference3 < delta) {
        //printf("No alert generated.\n");
    //} else {
        // Step 3: Alert notification
        //printf("Alert: Fire detected!\n");
    //}


