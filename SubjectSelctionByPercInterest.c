#include<stdio.h>

int main(){
    int choice;
    float perc;

    scanf("%d%f",&choice,&perc);

    if(perc >= 0 && perc <= 100) {
        switch(choice){
            case 1:
                printf("You selected C. Your interest is %.2f%%", perc);
                break;
            case 2:
                printf("You selected Java. Your interest is %.2f%%", perc);
                break;
            case 3:
                printf("You selected Oracle. Your interest is %.2f%%", perc);
                break;
            case 4:
                printf("You selected HTML. Your interest is %.2f%%", perc);
                break;
            default:
                printf("Invalid choice! Please select between 1 and 4.");
        }
    }else printf("Error: Percentage should be between 0 and 100.");
    return 0;
}