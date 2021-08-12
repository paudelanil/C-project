
#include<stdio.h>
#include<windows.h>
void SetColor();

void business();
void family();
void toursim();
void business_city();
void family_city();
void tourism_city();
void Mustang();
void Chitwan();
void biratnagar();

void Nepalgunj();
void Mahendranagar();
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
{   char option;
    int b_city,hotel_option;
    printf("\n\t\tWELCOME TO BUSINESS SECTION");
    printf("\n please choose city");
    business_city();
    scanf("%d",&b_city);
    switch(b_city)
    {
    case 5:
        Nepalgunj();
        break;
    case 6:
        Mahendranagar();
        break;
    case 7:
        biratnagar();
    default:
        break;

    }

    scanf("%d",&hotel_option);
    switch(hotel_option)
    {
    case 1:
        printf("Would you like to continue with \t%s",h[60].ch);
        printf("\n");
        scanf(" %c",&option);
        if(option == 'Y' || option =='y');
            printf("Yes");
        printf("\n\n");
        break;
    case 2:

    }



}
void tourism()
{   int option;
    printf("\n\t WELCOME TO TOURISM");
    printf("\n Please choose city");
    tourism_city();
    printf("\n");
    scanf("%d",&option);
    switch(option)
    {
    case 3:
        Chitwan();
        break;

    case 10:
        Mustang();
        break;
    default:
        break;
    }
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
    printf("\n 2. Pokhara");
    printf("\n 3. Chitwan");
    printf("\n 4. Butwal");
    printf("\n 5. Nepalgunj");
    printf("\n 6. Mahendranagar");
    printf("\n 7. Biratnagar");
    printf("\n 8. Itahari");


}
void tourism_city()
{
     printf("\n 1. Kathmandu");
    printf("\n 2. Pokhara");
    printf("\n 3. Chitwan");
    printf("\n 4. Butwal");
    printf("\n 5. Nepalgunj");
    printf("\n 6. Mahendranagar");
    printf("\n 7. Biratnagar");
    printf("\n 8. Janakpur");
    printf("\n 9. Itahari");
    printf("\n 10. Mustang");
}
void family_city()
{
    printf("\n 1. Kathmandu");
    printf("\n 2. Pokhara");
    printf("\n 3. Chitwan");
    printf("\n 4. Butwal");
    printf("\n 5. Nepalgunj");
    printf("\n 6. Mahendranagar");
    printf("\n 7. Biratnagar");
    printf("\n 8. Janakpur");
    printf("\n 9. Itahari");
    printf("\n 10. Mustang");
}

void Nepalgunj()
{   int i,n=1;
    strcpy(h[60].ch,"Siddhartha Hotel");
    h[60].rating = 4.0;
    h[60].price = 6648;

    strcpy(h[61].ch,"Traveller's Village");
    h[61].rating = 4.5;
    h[61].price = 3571;

    strcpy(h[62].ch,"Kalptaru Lords Inn");
    h[62].rating = 4.5;
    h[62].price = 4387;

    strcpy(h[63].ch,"Soaltee Westend Premier");
    h[63].rating = 4.5;
    h[63].price = 7165;

    strcpy(h[64].ch,"Hotel The Galaxy Durbar");
    h[64].rating = 4.0;
    h[64].price = 2394;

    strcpy(h[65].ch,"Hotel Central Plaza");
    h[65].rating = 5.0;
    h[65].price = 5952;


    strcpy(h[66].ch,"Tharu Mango Garden Resort");
    h[66].rating = 4.0;
    h[66].price = 1207;

    strcpy(h[67].ch,"Anjali's Dolphins Resort");
    h[67].rating = 5.0;
    h[67].price = 1200;

    strcpy(h[68].ch,"Hotel Velvet");
    h[68].rating = 4.0;
    h[68].price = 1278;

    strcpy(h[69].ch,"Nepal Wildlife Resort");
    h[69].rating = 4.5;
    h[69].price = 2633;

   printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=60;i<70;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;

    }


    }

void Mustang()
{
   int n=1,i;
       strcpy(h[30].ch,"Royal Mustang Resort");
    h[30].rating = 4.4;
    h[30].price = 1000;
    strcpy(h[31].ch,"Moksha Mustang ");
    h[31].rating = 5;
    h[31].price = 1000;
    strcpy(h[32].ch,"Oms Home Jomsom");
    h[32].rating = 4.1;
    h[32].price = 1000;
    strcpy(h[33].ch,"Hotel Himalayan Paradise");
    h[33].rating = 4.3;
    h[33].price = 1000;
    strcpy(h[34].ch,"Jomsom Mountain Resort");
    h[34].rating = 4.5;
    h[34].price = 1000;
    strcpy(h[35].ch,"Kalopani Guest House");
    h[35].rating = 4.3;
    h[35].price = 1000;
    strcpy(h[36].ch,"Lotus Holiday Inn");
    h[36].rating = 4.2;
    h[36].price = 1000;
    strcpy(h[37].ch,"Hotel Bob Marley");
    h[37].rating = 4.0;
    h[37].price = 1000;
    strcpy(h[38].ch,"Damodar Kunda Hotel");
    h[38].rating = 4.7;
    h[38].price = 1000;
    strcpy(h[39].ch,"Red house ");
    h[39].rating = 4.4;
    h[39].price = 1000;
    printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=30;i<40;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;

    }

}
void biratnagar()
{
    int i,j=0,n=1;
    char hotels[10][20] = {"Marriot","Parriotohng","Harrifasdot","Garridsfot","Jarrfadsfafiot"};
    float rating [5]={4.5,6.4,5.6,7.8,5.9};
    int price[5]={1000,900,2000,800,789};
    for(i=80;i<85;i++){
    strcpy(h[i].ch,hotels[j]);
    h[i].rating = rating[j];
    h[i].price = price[j];
    j++;

    }
    printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\t\t\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=80;i<85;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;


    }
}

void Chitwan()
{
    int i,n=1;

    strcpy(h[40].ch,"Kasara Resort - Chitwan National Park");
    h[40].rating= 4.5;
    h[40].price= 19334;
    strcpy(h[41].ch,"Into The Wild Eco Resort - Patihani 22");
    h[41].rating= 4.6;
    h[41].price= 7069;
    strcpy(h[42].ch,"Green Park Chitwan");
    h[42].rating= 4.5;
    h[42].price= 5000;
    strcpy(h[43].ch,"Chitwan Tiger Camp");
    h[43].rating= 4.0;
    h[43].price= 2018;
    strcpy(h[44].ch,"Hotel National Park Sauraha");
    h[44].rating= 4.3;
    h[44].price= 1187;
    strcpy(h[45].ch,"Meghauli Serai, A Taj Safari - Chitwan National Park");
    h[45].rating= 4.6;
    h[45].price= 45775;
    strcpy(h[46].ch,"Barahi Jungle Lodge");
    h[46].rating= 4.8;
    h[46].price= 24,234;
    strcpy(h[47].ch,"The Fern Residency - Hotel Chitwan");
    h[47].rating= 4.2;
    h[47].price= 5754;
    strcpy(h[48].ch,"Landmark Forest Park");
    h[48].rating= 4.2;
    h[48].price= 6557;
    strcpy(h[49].ch,"Kasara Resort - Chitwan National Park");
    h[49].rating= 4.5;
    h[49].price= 20789;

    printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\t\t\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=40;i<50;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;


    }

}
void Mahendranagar()
{
    int i,n=1;
    strcpy(h[70].ch,"Hotel Reyans");
    h[70].rating = 5.0;
    h[70].price = 2447.0;

    strcpy(h[71].ch,"Hotel Rajshree");
    h[71].rating = 3.0;
    h[71].price = 2020;

    strcpy(h[72].ch,"Hotel Perchwood");
    h[72].rating = 4.0;
    h[72].price = 3848.0;

    strcpy(h[73].ch,"Hotel N Green City");
    h[73].rating = 5.0;
    h[73].price = 4009;

    strcpy(h[74].ch,"Hotel Jalsa");
    h[74].rating = 4.5;
    h[74].price = 35501.0;

    strcpy(h[75].ch,"Hotel Satthi");
    h[75].rating = 3.5;
    h[75].price = 4789.0;

    strcpy(h[76].ch,"Hotel Opera");
    h[76].rating = 4.0;
    h[76].price = 2520;

    strcpy(h[77].ch,"Hotel Laxmi");
    h[77].rating = 4.0;
    h[77].price = 2381.0;

    strcpy(h[78].ch,"Hotel Reyans");
    h[78].rating = 5.0;
    h[78].price = 2447.0;

    strcpy(h[79].ch,"Siddhartha Hotel New Anand");
    h[79].rating = 4.0;
    h[79].price = 10714.0;

   printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\t\t\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=70;i<80;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;


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
