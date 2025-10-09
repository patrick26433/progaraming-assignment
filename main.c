/*
Name:
Reg No:
Description:
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int secret_number,guess,attempts=0;

  srand(time(0));

  secret_number=rand()%20+1;

  do{
    printf("Enter your guess(1-20):");
    scanf("%d",&guess);
    attempts++;

    if(guess>secret_number){
            printf("Too high! \n");
    }
    else if(guess<secret_number){
            printf("Too low! \n");
    }
    else{
            printf("Congratulations! you gussed the number in %d attempts. \n",attempts);
    }
  }
    while (guess !=secret_number);
    return 0;
}


