#include<stdio.h>
#include<ctype.h>

int main(){
    char choice;

    scanf("%c",&choice);
    // toupper(choice);

    if((choice >= 65 && choice <= 91) || (choice >= 96 && choice <= 122)){
        switch(toupper(choice)){
            case 'A':
                printf("Vowel");
                break;
            case 'E':
                printf("Vowel");
                break;
            case 'I':
                printf("Vowel");
                break;
            case 'O':
                printf("Vowel");
                break;
            case 'U':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
        }
    }else printf("Invalid input");
}