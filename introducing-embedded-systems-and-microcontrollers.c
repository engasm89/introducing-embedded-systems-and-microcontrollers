/*
 * Course: Introducing Embedded Systems And Microcontrollers
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Introducing Embedded Systems And Microcontrollers" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/introducing-embedded-systems-and-microcontrollers/
 * Repository: https://github.com/engasm89/introducing-embedded-systems-and-microcontrollers
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

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

// Program entry point toggling LED with messages
// Main routine: orchestrates the introducing embedded systems and microcontrollers scenario
int main(void) { // Main function implementation function
  printf("Introducing Embedded Systems and Microcontrollers\n"); // Title
  for (int i = 0; i < 6; ++i) { // Loop over toggles
    led_on = !led_on; // Toggle LED state
    printf("LED %s\n", led_on ? "ON" : "OFF"); // Print LED state
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Exit successfully
} // End of main function

