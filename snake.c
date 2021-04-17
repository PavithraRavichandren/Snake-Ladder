#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	printf("Git Print Test 2");
    int boardvalue1=0,boardvalue2=0,dice1,dice2,i;
    int board[50];
    for(i=0;i<50;i++)
    {
            board[i]=0;
    }
    board[5]=15;
    board[20]=40;
    board[30]=45;
    board[10]=1;
    board[45]=32;
    board[49]=2;
    do
    {
     do
     {
        printf("\nPLAYER 1 THROW YOUR DICE\n");
       getch();
        dice1=(rand()%6+1);
        printf("\nDICE1 VALUE:%d",dice1);
        if(boardvalue1+dice1>50)
        break;
        if(boardvalue1<=50)
        {
        if(board[boardvalue1+dice1-1]==0)
        {
          boardvalue1=boardvalue1+dice1;
          printf("\nPLAYER1 IS IN %d POSITION",boardvalue1);
        }
         else 
         {
              if(board[boardvalue1+dice1-1]>boardvalue1)
              {
               printf("\nGOOD YOU GOT A LADDER!\n");
               boardvalue1=board[boardvalue1+dice1-1];
               printf("\nPLAYER1 IS IN %d POSITION",boardvalue1);
              }
           //boardvalue1=board[boardvalue1+dice1-1];
           //   if(board[boardvalue1+dice1-1]<boardvalue1)
           else
              {
               printf("\nSORRY YOU BIT BY A SNAKE!\n");
               boardvalue1=board[boardvalue1+dice1-1];
               printf("\nPLAYER1 IS IN %d POSITION",boardvalue2);
              }
         }
           if(boardvalue1==50)
           {
            printf("Player1 YOU WON!!!",boardvalue1);
            break;
           }
         }
    }while((dice1==1)||(dice1==6));
    do
     {
        printf("\nPLAYER 2 THROW YOUR DICE\n");
       getch();
        dice2=(rand()%6+1);
        printf("\nDICE2 VALUE:%d",dice2);
        if(boardvalue2+dice2>50)
        break;
        if(boardvalue2<=50)
        {
        if(board[boardvalue2+dice2-1]==0)
        {
          boardvalue2=boardvalue2+dice2;
          printf("\nPLAYER2 IS IN %d POSITION",boardvalue2);
        }
        else 
        {
              if(board[boardvalue2+dice2-1]>boardvalue2)
              {
               printf("GOOD YOU GOT A LADDER!\n");
               boardvalue2=board[boardvalue2+dice2-1];
               printf("\nPLAYER2 IS IN %d POSITION",boardvalue2);
              }
            //   boardvalue2=board[boardvalue2+dice2-1];
              if(board[boardvalue2+dice2-1]<boardvalue2)
              {
               printf("SORRY YOU BIT BY A SNAKE!\n");
               boardvalue2=board[boardvalue2+dice2-1];
               printf("\nPLAYER2 IS IN %d POSITION",boardvalue2);
              }
         }
          if(boardvalue1==50)
           {
            printf("Player2 YOU WON!!!",boardvalue1);
            break;
           }
        }
    }while((dice1==1)||(dice1==6));

    }while((boardvalue1<=50)&&(boardvalue2<=50));
  getch();
    return 0;
}
    
