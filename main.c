/*
Name:Patrick kanyora
Reg No:CT101/G/26433/25
Description:arrays
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int revenue[7];
int totalrevenue=0;
float averagerevenue;

printf("Enter the revenue for each day: \n");
for (int i=0;i<7;i++){
    printf("Day %d",i+1);
    scanf("%d",&revenue[i]);
}
for(int i=0;i<7;i++){
    totalrevenue+=revenue[i];
}
averagerevenue=(float)totalrevenue/7;ss

printf("The total weekly revenue is: %d \n",totalrevenue);
printf("The average daily revenue is: %f \n",averagerevenue);

//2D ARRAY
int occupancy[5][10];
int occupied,vacant;
int j,i;

srand(time(NULL));

for(int i=0;i<5;i++){
    for(int j=0;j<10;j++){
        occupancy[i][j]=rand()%2;
    }
}
for(i=0;i<5;i++){
    occupied=0;
    vacant=0;
    for (j=0;j<10;j++){
        if(occupancy[i][j]==1){
            occupied++;
        }
        else{
            vacant++;
        }
    }
printf("floor %d: occupied:%d,vacant %d \n",i+1,occupied,vacant);
}

// 3D ARRAY

int chain[3][5][10];
int totaloccupiedrooms=0;

for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        for(int k=0;k<10;k++){
            chain[i][j][k]=rand()%2;
            if(chain[i][j][k]==1)
                totaloccupiedrooms++;
        }
    }
}
printf("Total occupied room across all branches: %d \n",totaloccupiedrooms);

return 0;
}
