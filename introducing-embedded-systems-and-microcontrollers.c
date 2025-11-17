#include <stdio.h> // Include I/O for introductory output
#include <unistd.h> // Include POSIX sleep for timing

// Simulated LED state
static int led_on = 0; // LED state flag

// Entry toggling LED with messages
int main(void) { // Begin main function
  printf("Introducing Embedded Systems and Microcontrollers\n"); // Title
  for (int i = 0; i < 6; ++i) { // Loop over toggles
    led_on = !led_on; // Toggle LED state
    printf("LED %s\n", led_on ? "ON" : "OFF"); // Print LED state
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Exit success
} // End main

