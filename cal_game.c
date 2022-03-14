#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void cal(float a,float b);
void cal(float a,float b)
{
    float x,y;
    int n;
    printf("CALCULATOR\n");
    printf("\n0 is for END");
    printf("\n1 is for Addition"); 
    printf("\n2 is for Subtraction");
    printf("\n3 is for Division");
    printf("\n4 is for Multiplication");
    printf("\n5 is for Modulus");
    printf("\n6 is for Square");
    printf("\n7 is for cube");
   
    int k=1;
    while(k==1)
    {
    float arr[1000];
    int p;
    printf("\n\nEnter how many number do u want to print : ");
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Enter the number what u want to do : ");
    scanf("%d",&n);
    if (n==1)
    {
      float z=0;
      for(int i=0;i<p;i++)
      {
        z=z+arr[i];
      }
      printf("Addition : %f",z);
    }
    else if (n==2)
    {
      float z=0;
      for(int i=0;i<p;i++){
      z-=arr[i];}
      printf("Subtraction : %f",z);
    }
    else if (n==3)
    {
        float z=arr[0];
      for(int i=0;i<p;i++)
      {
        z=z/arr[i];
      }
        printf("division : %f",z);
    }
    else if (n==4)
    {
        float z=1;
      for(int i=0;i<p;i++)
      {
        z=z*arr[i];
      }
        printf("Multiplication : %f",z);
    }
    else if (n==5)
    {
      int z=arr[0];
      for(int i=0;i<p;i++)
      {
        z=z % (int) arr[i];
      }
        printf("Modulus : %d",z);
    }
    else if (n==6)
    {
       double z;
       for(int i=0;i<p;i++)
      {
        z=pow(arr[i],2);
        printf("\nSquare of %f : %lf",arr[i],z);
      }
    }
    else if (n==7)
    {
       double z;
       for(int i=0;i<p;i++)
      {
        z=pow(arr[i],3);
        printf("\ncube of %f : %lf",arr[i],z);
    }
    }
    else if (n==0)
    {
        printf("DONE!!");
    }
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n\nPress 1 if u want to continue!! : ");
    scanf("%d",&k);
    printf("EXIT!!");
    } 
}
void game(char player,char AI);
void game(char player,char AI )
{
    
      if (player==AI)
      {
         printf("\nMATCH DRAW!!");
      } 
      else if (player=='R' && AI =='P')
      {
         printf("\nYOU LOSE!!!");
      }  
      else if (player=='R' && AI =='S')
      {
         printf("\nYOU WIN!!");
      }  
      else if (player=='P' && AI =='R')
      {
         printf("\nYOU WIN!!");
      }      
      else if (player=='P' && AI =='S')
      {
         printf("\nYOU LOSE!!");
      }  
      else if (player=='S' && AI =='R')
      {
         printf("\nYOU LOSE!!");
      }  
      else if (player=='S' && AI=='P')
      {
         printf("\nYOU WIN!!");
      } 
}


int main()
{   int choice;
    printf("Enter 1 for Calculator");
    printf("\nEnter 2 for Game");
    printf("\nwhat you want to do : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            float a,b;
            cal(a,b);
        break;
        }
        case 2:
        printf("ROCK - PAPER - SCISSOR");
        printf("\n\nR-Rock");
        printf("\nP-Paper");
        printf("\nS-Scissor");
        printf("\n\nLETS START THE GAME");
        char value[]={'R','P','S'};
        char k = 'Y';
        label: 
        {
        int x = rand()%3;
        char AI1 = value[x];
    
        char player1;
        printf("\nEnter your Choice : ");
        scanf(" %c",&player1);
    
        printf("\nPlayer : %c",player1); 
        printf("\nAI : %c",AI1);
        game(player1,AI1);
    
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\n'Y' to play Again");
        printf("\n'Q' to EXIT");
        printf("\nWhat you want to do : ");
        scanf(" %char",&k);
        if (k=='Y')
        {
           goto label;
        }
        if (k=='Q')
        {
          printf("QUIT!!");
        }
        }
         break;
        default:
        printf("Invalid Statement");
    }
}
