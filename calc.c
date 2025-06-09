#include <stdio.h>
#include <math.h> 
int main() {
    char letter, operation;              // char is used to store single characters
    float integer1, integer2, result; 

    printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Hadiyah Arif\nVersion: Assignment 2\nDate: March 17,2024\n"); 
    printf("Select one of the following items:\nB) - Binary Mathematical Operations, such as addition and subtraction.\nU) - Unary Mathematical Operations, such as square root, and log.\nA) - Advances Mathematical Operations, using variables, arrays.\nV) Define variables and assign them values.\nE) - Exit\n");
    scanf(" %c", &letter);

    while (letter != 'E') { // the single quotes tell the computer that inside these single quotes are specific characters we are or are not looking for 
    
        if (letter == 'B') {
            printf("Please enter the first number:");
            scanf("%f", &integer1); 
            printf("Please enter the operation ( + , - , * , / , %%, P, X, I):");
            scanf(" %c", &operation); //the space before the c just makes it work
            printf("Please enter the second number:");
            scanf("%f", &integer2);

            switch (operation) {
            case '+':
                result = integer1 + integer2;
                printf("%f\n", result);
                break;
            case '-':
                result = integer1 - integer2;
                printf("%f\n", result);
                break;
            case '*':
                result = integer1 * integer2;
                printf("%f\n", result);
                break;
            case '/':
                if (integer2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                }
                else{
                result = integer1 / integer2;
                printf("%f\n", result);}
                break;
            case '%':
                result = fmod(integer1, integer2); // we use fmod for floating-point remainder
                printf("%f\n", result);
                break;
            case 'P':// P for power
                result =  pow (integer1, integer2);
                printf("%f\n", result);
                break;
            case 'X': // X for maximum
                result = (integer1 > integer2) ? integer1 : integer2;
                printf("%f\n", result);
                break;
            case 'I': // I for minimun
                result = (integer1 < integer2) ? integer1 : integer2;
                printf("%f\n", result);
                break;
            } //parenthesis for the switch 
            } //parenthesis for the if B statement
        if (letter == 'U') {
            printf("Please enter the first number:");
            scanf("%f", &integer1); 
            printf("Please enter the operation ( S, L, E, C, F):"); 
            scanf(" %c", &operation); 

            switch (operation){
                case 'S':// square root
                    result =  sqrt (integer1);
                    printf("%f\n", result);
                    break;

                case 'L': //log
                    result =  log (integer1);
                    printf("%f\n", result);
                    break;

                case 'E': //exponent
                    result =  exp (integer1);
                    printf("%f\n", result);
                    break;

                case 'C': //ceiling
                    result =  ceil (integer1);
                    printf("%f\n", result);
                    break;

                case 'F': //floor
                    result =  floor (integer1);
                    printf("%f\n", result);
                    break;
            } //switch
            }// while
      
        else if (letter == 'A') 
        { printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n"); }
        
    }
    if (letter == 'E')
        printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n"); 
    else {
            printf("Invalid input\n");
            printf("Please select your option ( B , U , A , V , E )\n");
            scanf(" %c", &letter); }

    return 0; // if the code completed without any error  it wil return a 0 if not it will return a 1
}
