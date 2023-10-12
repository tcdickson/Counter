// importing standaed C libraries
#include <stdio.h>
#include <stdbool.h>

int main(){
// Defining several variables, and initializing counter and mpgSum since we need these to start out at zero for the counter to actually count from 0. 
    double miles;
    double gallons;
    double milesPerGallon;
    int counter = 0;
    double mpgSum= 0.0;
// Printing instuctions to the console explaining what the program does.
    printf("\nThis calculator calculates the miles per gallon obtained for each tankful of gas\n");
// Entering a loop to ensure the code continues asking the same questions until prompted to exit.    
    while(true) {
    printf("enter '-1' to calculate average mpg and end program \nenter the gallons used (-1 to 40) : \n");
// Here we write conditional if statement to ensure the user cannot input gallons less than -1 and greater than 40. This value range makes sense for this program. The user types in -1 to exit the loop and print results.     
    if(scanf("%lf", &gallons) != 1 || gallons < -1 || gallons > 40) {
// Invalid range is printed if the user enters data that does not make sense for the program.        
        printf("Invalid Range \n");
// Here we clear the user input and continue if the input is not a new line.
        while (getchar() != '\n');
        continue;
// We use both continue statements to continue with the next if statement.
    continue;
    }
// The below if statement breaks out of the loop if "-1" is entered. These is a nested if statement to ensure that if a user enters "-1" on the first iteration, invalid data output is shown.     
    if(gallons == -1) {
        if(counter == 0) {
        printf("No valid entries were inputted");
// The else statement calculates the overall mpg by taking the sum and dividing by the counter.       
    } else {
        printf("The overall average miles/gallon was %lf\n", mpgSum/counter);
    }
// A break statement is needed to leave the loop.    
        break;
        } 
// Here we write conditional if statement to ensure the user cannot input miles less than 0 or greater than 1600. This value range makes sense for this program.  The user types in -1 to exit the loop and print results.  
    printf("enter the miles driven : \n");
    if (scanf("%lf", &miles) != 1 || miles < 0 || miles > 1600) {
// Invalid range is printed if the user enters data that does not make sense for the program.       
        printf("Invalid Range \n");
// Here we clear the user input and continue if the input is not a new line.
    while (getchar() != '\n');
        continue;
 // We use both continue statements to continue with the next if statement.
       
    continue;    

        }
// We use the following formula to calculate miles per callon. We then print out the statement to console. 
    milesPerGallon = (miles / gallons);
    printf("The miles / gallon for this tank was %lf\n", milesPerGallon);
// We use the following formula to calculate the sum of all miles per gallon for each iteration.
    mpgSum += milesPerGallon;
// Counter adds a running count for each loop iteration.     
    counter++;
    }
    return 0;
}