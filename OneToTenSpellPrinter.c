/*
Q-1:

Write a C program that takes a number between 1 and 10 and prints its corresponding word
(e.g., "1" becomes "One", "2" becomes "Two", etc.) using a switch statement.

Sample Input:
	Enter a number between 1 and 10: 3
Sample Output:
	Three

*/

#include<stdio.h>

int main(){
    int a;

    printf("Enter a number 1 and 10: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 10:
            printf("Ten");
            break;
        default:
        printf("Invalid");

    }

}




