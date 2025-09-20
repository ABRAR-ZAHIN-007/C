//
//  main.c
//  Type_Conversion
//
//  Created by Abrar Zahin on 9/20/25.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Set the maximum possible score to 500
      int maxScore = 500;

      // The actual score of the user
      int userScore = 423;

      // Calculate the percantage of the user's score in relation to the maximum available score
      float percentage = (float) userScore / maxScore * 100.0; //Type conversion

      // Print the percentage
      printf("User's percentage is %.2f", percentage);

    return EXIT_SUCCESS;
}
