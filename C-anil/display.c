
#include<windows.h>
#include<stdio.h>


void gotoxy(int x,int y)
{
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

 void SetColor(int ForgC)
 {

     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
 void welcome(){
    characterW(10,5);
    characterE(20,5);
    characterL(30,5);
    characterC(40,5);
    zero(50 ,5);
    characterM(60,5);
    characterE(70,5);}
 void zero(int x, int y){



    int row,col;
 for (row = 1; row <= 7; row++)
  {
    for (col = 1; col <=7; col++)
  {
        gotoxy(x,y);
        if (row == 1 || row == 7 || col == 1 || col == 7 )
        printf("0");

 else
     printf(" ");
  x ++;
 }y++;
 x =x -7 ;
 printf("\n");
 }
 printf("\n");

 }
 void characterW(int x, int y)
 {

     int row ,col;
     for (row = 1; row <= 7; row++) {
    for (col = 1; col <= 7; col++) {
            gotoxy (x,y);
            if(col ==1 && row<=7 || row == 7 || col == 4 || col == 7  )
            {
                printf("W");
            }

            else
                printf(" ");
                x ++;}
                y ++;
                 x = x -7 ;

                printf("\n");}
 }
 void characterE(int x ,int y)
 {
     int row, col;
     for(row=1;row<=7;row++)
     {
         for(col = 1;col<=7;col++)
         {  gotoxy( x, y);
             if(row == 1 || row == 4 || row == 7 ||col == 1)
                printf("E");
                else
                    printf(" ");
                x++;
         }
         y++;
         x=x-7;
         printf("\n");
     }
 }
 void characterC(int x,int y)
 {
 int row,col;
     for(row =1;row<=7;row++)
     {
         for(col = 1;col<=7;col++)
         {
             gotoxy(x,y);

             if(col == 1 ||row == 7|| row == 1)
                printf("C");
             else
                printf(" ");
         x++;
         }
         y++;
         x = x - 7 ;
         printf("\n");
     }
 }
 void characterL(int x,int y)
 {


     int row,col;
     for(row =1;row<=7;row++)
     {
         for(col = 1;col<=7;col++)
         {
             gotoxy(x,y);

             if(col == 1 ||row == 7 )
                printf("L");
             else
                printf(" ");
         x++;
         }
         y++;
         x = x - 7 ;
         printf("\n");
     }
 }
 void characterM(int x,int y)
 {


     int row,col;
     for(row =1;row<=7;row++)
     {
         for(col = 1;col<=7;col++)
         {
             gotoxy(x,y);

             if(row == 1  || col == 1 ||col == 4 || col == 7)
                printf("M");
             else
                printf(" ");
         x++;
         }
         y++;
         x = x - 7 ;
         printf("\n");
     }
 }
