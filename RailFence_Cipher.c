#include<stdio.h>
#include<string.h>

int main(){
    char text[1000];
    int metrix[1000][1000], rail, count;
    printf("Enter the text to Encrypt:\n");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the Rail:\n");
    scanf("%d", &rail);
    
    for(int i = 0; i < strlen(text); i++){
        for(int j = 0; j < rail; j++){
            metrix[i][j] = 0;
        }
    }
    
    count = 0;
    int j = 0;
    
    while(j < strlen(text)){
        if(count % 2 == 0){
            for(int i = 0; i < rail && j < strlen(text); i++){
                metrix[i][j] = (int)text[j];
                j++;
            }
        } else{
            for(int i = rail - 2; i > 0 && j < strlen(text); i--){
                metrix[i][j] = (int)text[j];
                j++;
            }
        }
        count++;
    }
    
    for(int i = 0; i < rail; i++){
        for(int j = 0; j < strlen(text); j++){
            if(metrix[i][j] != 0){
                printf("%c", metrix[i][j]);
            }
        }
    }
    
    return 0;
}

/**
Enter the text to Encrypt:
Hello, How are ypu
Enter the Rail:
3
Hoorpel,Hwaeyul  */