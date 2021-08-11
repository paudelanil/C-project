
#include<stdio.h>
#include<windows.h>
void SetColor();

void business();
void family();
void toursim();
void business_city();
void family_city();
void tourism_city();
void kathmandu();
//void birgunj();
struct hotels
{
    char ch[50];
    float rating;
    float price;
}h[100];

int main()
{   int purpose;
    printf("\t\t WELCOME \t\t");
    printf("\n\n");

    printf("\t\t PURPOSE OF VISIT:");
    printf("\n\t\t 1.BUSINESS");
    printf("\n\t\t 2.TOURISM");
    printf("\n\t\t 3.FAMILY VISIT");

    scanf("%d",&purpose);
    system("CLS");

    switch(purpose)
    {
    case 1:
        business();
        break;
    case 2:
        tourism();
        break;
    case 3:
        family();
        break;
    default:
        printf("\n Please enter a valid option");
        break;
    }
}
void business()
{
    int b_city;
    printf("\n\t\tWELCOME TO BUSINESS SECTION");
    printf("\n please choose city");
    business_city();
    scanf("%d",&b_city);
    switch(b_city)
    {
    case 1:
        kathmandu();
        break;
    //case 2:
        //birgunj();
        //break;
    default:
        break;
    }

}
void tourism()
{
    printf("\n\t WELCOME TO TOURISM");
    printf("\n Please choose city");
    tourism_city();
}
void family()
{
    printf("\n\t WELCOME TO Family");
    printf("\n Please choose city");
    family_city();
}
void business_city()
{
    printf("\n 1. Kathmandu");
    printf("\n 2. Birgunj");
    printf("\n 3. Chitwan");
    printf("\n 4. Nepalgunj");
    printf("\n 5. Mahendranagar");


}
void tourism_city()
{
    printf("\n TOURISM CITY");

}
void family_city()
{
    printf("\n FAMILY CITY");
}
void kathmandu()
{   int i;
    strcpy(h[0].ch,"Kathmandu hotel");
    h[0].rating = 4.5;
    h[0].price = 1000;
    strcpy(h[1].ch,"Malla hotel ");
    h[1].rating = 5;
    h[1].price = 1000;
    for(i =0;i<10;i++)
    {
        printf("\n%s\n%.1f",h[i].ch,h[i].rating);
        printf("\n");
    }

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
