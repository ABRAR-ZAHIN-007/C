//
//  main.c
//  Format Specifiers
//
//  Created by Abrar Zahin on 9/20/25.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {

      // Create variables
      int myNum = 15;              // Integer (whole number)
      float myFloatNum = 5.99;     // Floating point number
      double mydoubleNum = 10.111111111; //Double point number
      char myLetter = 'D';         // Character
      char greetings[] = ("Hola\n"); //Used for strings (text)
      
      
      // Print variables
      printf("%d\n", myNum);
      printf("%f\n", myFloatNum);
      printf("%.5lf\n",mydoubleNum);
      printf("%c\n", myLetter);
      printf("%s", greetings);
    
    return EXIT_SUCCESS;
}
