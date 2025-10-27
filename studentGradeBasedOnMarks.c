#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    //Checking if marks are valid or not
    if(s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100 || s5 < 0 || s5 > 100){
        printf("Invalid");
        return 0;
    }

    if(s1 < 35 || s2 < 35 || s3 < 35 || s4 < 35 || s5 < 35){
        printf("Fail");
        return 0;
    }

    float total_marks = s1 + s2 + s3 + s4 + s5;
    float perc = (total_marks / 500) * 100;
    int grade;

    printf("Total Marks: %d\n",(int)total_marks);
    printf("Percentage: %.1f%%\n", perc);

    if(perc >= 90) grade = 1;
    else if(perc >= 75) grade = 2;
    else if(perc >= 50) grade = 3;
    else if(perc >= 35) grade = 4;
    else grade = 5;

    switch(grade){
        case 1:

            printf("Grade A");
            break;
        case 2:
            printf("Grade B");
            break;
        case 3:
            printf("Grade C");
            break;
        case 4:
            printf("Grade D");
            break;
        default:
            printf("Fail");
    }


}