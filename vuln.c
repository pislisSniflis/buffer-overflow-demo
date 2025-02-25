/*
 * Buffer Overflow Demo
 * Author: Tajul Azhar
 * Purpose: Educational demonstration of a buffer overflow vulnerability
 */

 #include <stdio.h>
 #include <string.h>
 
 // Vulnerable function
 void vulnerable_function(char *input) {
     char buffer[10];  // Small buffer of 10 bytes
 
     printf("You entered: %s\n", input);
 
     // Vulnerable function: strcpy does not check bounds
     strcpy(buffer, input);
 
     printf("Buffer content: %s\n", buffer);
 }
 
 int main() {
     char user_input[100];  // Large input buffer
 
     printf("Enter some text: ");
     
     // Vulnerable function: gets() does not check buffer size
     gets(user_input);
 
     // Call the vulnerable function
     vulnerable_function(user_input);
 
     return 0;
 }