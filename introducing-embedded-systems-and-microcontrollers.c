/*
 * Course: Introducing Embedded Systems And Microcontrollers
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Introducing Embedded Systems And Microcontrollers
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for introductory output
#include <unistd.h> // Include POSIX sleep for timing

// Simulated LED state
static int led_on = 0; // LED state flag

// Entry toggling LED with messages
// Main routine: orchestrates the introducing embedded systems and microcontrollers scenario
int main(void) { // Begin main function
  printf("Introducing Embedded Systems and Microcontrollers\n"); // Title
  for (int i = 0; i < 6; ++i) { // Loop over toggles
    led_on = !led_on; // Toggle LED state
    printf("LED %s\n", led_on ? "ON" : "OFF"); // Print LED state
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Exit success
} // End main

