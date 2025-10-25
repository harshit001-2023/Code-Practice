#include<stdio.h>

int main(){
    int s1, s2, s3;
    scanf("%d%d%d",&s1,&s2,&s3);

    // First check if it's a valid triangle
    if((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)){
        // Valid triangle - now classify the type
        if(s1 == s2 && s2 == s3){
            printf("The triangle is an equilateral triangle.");
        }
        else if(s1 == s2 || s2 == s3 || s3 == s1){
            printf("The triangle is an isosceles triangle.");
        }
        else{
            printf("The triangle is a scalene triangle.");
        }
    }
    else{
        printf("The lengths do not form a valid triangle.");
    }

    return 0;
}