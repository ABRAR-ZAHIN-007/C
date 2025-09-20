//
//  main.c
//  Arithmetic Operators
//
//  Created by Abrar Zahin on 9/20/25.
//

#include <stdlib.h>
#include <stdio.h>


/*Multiple Program runner*/
void flush_stdin(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } //(End Of File) is a symbolic constant
}


void prob1(void) {
    
    int x = 10;
    int y = 3;
    
    printf("%d\n", x + y); // 13
    printf("%d\n", x - y); // 7
    printf("%d\n", x * y); // 30
    printf("%d\n", x / y); // 3
    printf("%d\n", x % y); // 1
    
    int z = 5;
    ++z;
    printf("%d\n", z); // 6
    --z;
    printf("%d\n", z); // 5
    
}

void prob2(void){
    int peopleInRoom = 0;

      // 3 people enter
      peopleInRoom++;
      peopleInRoom++;
      peopleInRoom++;

      printf("%d\n", peopleInRoom); // 3

      // 1 person leaves
      peopleInRoom--;

      printf("%d\n", peopleInRoom); // 2

    
    
}
    
    

    /* Menu driver */
int main(void) {
        printf("Read PDF '03 Conditions.pdf' and implementing Problems 1..15. Enter problem number (1-15) to run.\n");
        printf("Input format: follow the sample inputs in the PDF for each problem.\n");
        int choice;
        if (scanf("%d", &choice) != 1) {
            printf("No valid problem number provided. Exiting.\n");
            return 0;
        }
        switch (choice) {
            case 1: prob1(); break;
            case 2: prob2(); break;
            
            default: printf("Invalid problem number\n");
        }
        return;
}
