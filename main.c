/*
Name:Patrick kanyora
Reg No:CT101/G/26433/25
Description:enter password
*/

#include<stdio.h>

int main(){
    int password;

    do{
        printf("Enter your password: ");
        scanf("%d",&password);
    }
    while(password !=1234);
    printf("Access Granted \n");

    return 0;
}
