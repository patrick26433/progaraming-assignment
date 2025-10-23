/*
Name:Patrick kanyora
Reg No:CT101/G/26433/25
Description:calculafare
*/

#include<stdio.h>
int calculatefare(float distance);
void main(){
    int distance,fare;
    //prompt user to enter distance
    printf("Enter the distance: ");
    scanf("%d",&distance);

    //function calling
    fare=calculatefare(distance);

    //print the fare
    printf("The total fare is: KES %d \n",fare);
}

int calculatefare(float distance){
    int fare;
    fare=50*distance;

    return fare;
}
