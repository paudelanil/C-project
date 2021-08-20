
#include<stdio.h>
#include<windows.h>
#include<string.h>
void SetColor();

void business();
void family();
void tourism();

void business_city();
void family_city();
void tourism_city();

void Mustang();
void Chitwan();
void Nepalgunj();
void Mahendranagar();
void Biratnagar();
void Butwal();
void kathmandu();
void pokhara();
void itahari();
void janakpur();

void sort_by_rating(int x, int y);
void sort_by_price(int x, int y);
void Display();

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
     case 1:
        kathmandu();
        break;
     case 2:
        pokhara();
        break; 
    case 3:
        Chitwan();
        break;
    case 4:
        Butwal();
        break;
    case 5:
        Nepalgunj();
        break;
    case 6:
        Mahendranagar();
        break;
    case 7:
        Biratnagar();
        break;  
    case 8:
        itahari();
        break; 
    default:
        break;

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
    case 1:
        kathmandu();
        break;
    case 2:
        pokhara();
        break; 
    case 3:
        Chitwan();
        break;
    case 4:
        Butwal();
        break;
    case 5:
        Nepalgunj();
        break;
    case 6:
        Mahendranagar();
        break;
    case 7:
        Biratnagar();
        break;
    case 8:
        itahari();
        break;
    case 9:
        janakpur();
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
    int option;
    printf("\n\t WELCOME TO Family");
    printf("\n Please choose city");
    family_city();
    printf("\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        kathmandu();
        break;
    case 2:
        pokhara();
        break;     
    case 3:
        Chitwan();
        break;
    case 4:
        Butwal();
        break;
    case 5:
        Nepalgunj();
        break;
    case 6:
        Mahendranagar();
        break;
    case 7:
        Biratnagar();
        break;
    case 8:
        itahari();
        break;
    case 9:
        janakpur();
        break;
    case 10:
        Mustang();
        break;
    default:
        break;
    }
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
    printf("\n 8. Itahari");
    printf("\n 9. Janakpur");
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
    printf("\n 8. Itahari");
    printf("\n 9. Janakpur");
    printf("\n 10. Mustang");
}

void Nepalgunj()
{   int i,n=1,option;
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

    Display(60,70);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(60,70);
        break;
    case 2:
    sort_by_price(60,70);
        break;
    default:
        break;
    }
}
void Mustang()
{
   int n=1,i,option;
    strcpy(h[30].ch,"Royal Mustang Resort");
    h[30].rating = 4.4;
    h[30].price = 10000;
    strcpy(h[31].ch,"Moksha Mustang ");
    h[31].rating = 5;
    h[31].price = 9000;
    strcpy(h[32].ch,"Oms Home Jomsom");
    h[32].rating = 4.1;
    h[32].price = 8000;
    strcpy(h[33].ch,"Hotel Himalayan Paradise");
    h[33].rating = 4.3;
    h[33].price = 7000;
    strcpy(h[34].ch,"Jomsom Mountain Resort");
    h[34].rating = 4.5;
    h[34].price = 6000;
    strcpy(h[35].ch,"Kalopani Guest House");
    h[35].rating = 4.3;
    h[35].price = 5000;
    strcpy(h[36].ch,"Lotus Holiday Inn");
    h[36].rating = 4.2;
    h[36].price = 4000;
    strcpy(h[37].ch,"Hotel Bob Marley");
    h[37].rating = 4.0;
    h[37].price = 3000;
    strcpy(h[38].ch,"Damodar Kunda Hotel");
    h[38].rating = 4.7;
    h[38].price = 2000;
    strcpy(h[39].ch,"Red house ");
    h[39].rating = 4.4;
    h[39].price = 1000;

    Display(30,40);
 
    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(30,40);
        break;
    case 2:
    sort_by_price(30,40);
        break;
    default:
        break;
    }
}
void Chitwan()
{
    int i,n=1,option;
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

    Display(40,50);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(40,50);
        break;
    case 2:
    sort_by_price(40,50);
        break;
    default:
        break;
    }

}
void Mahendranagar()
{
    int i,n=1,option;
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

    Display(70,80);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(70,80);
        break;
    case 2:
    sort_by_price(70,80);
        break;
    default:
        break;
    }
}
void Biratnagar()
{
   int n=1,i,option;
    strcpy(h[50].ch,"Hotel Harrison Palace");
    h[50].rating = 4.7;
    h[50].price = 5000;

    strcpy(h[51].ch,"Hotel Verandah");
    h[51].rating = 3.50;
    h[51].price = 1469;

    strcpy(h[52].ch,"City Guest House");
    h[52].rating = 3.70;
    h[52].price = 1637;

    strcpy(h[53].ch,"Hotel Namaskar");
    h[53].rating = 3.60;
    h[53].price = 1500;

    strcpy(h[54].ch,"Hotel Gajur Palace");
    h[54].rating = 4.50;
    h[54].price = 4200;

    strcpy(h[55].ch,"Hotel Nava Yug");
    h[55].rating = 4.0;
    h[55].price = 2400;


    strcpy(h[5].ch,"Big Hotel");
    h[56].rating = 4.0;
    h[56].price = 3200;

    strcpy(h[5].ch,"Hotel Murchunga International");
    h[57].rating = 5.0;
    h[57].price = 3831;

    strcpy(h[58].ch,"Hotel Daftari Palace");
    h[58].rating = 4.10;
    h[58].price = 5597;

    strcpy(h[59].ch,"Kaushaki Hotel");
    h[59].rating = 4.30;
    h[59].price = 6200;

    Display(50,60);


    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(50,60);
        break;
    case 2:
    sort_by_price(50,60);
        break;
    default:
        break;
    }
}

void Butwal()
{
    int i,n=1,option;
    strcpy(h[90].ch,"Everest International deluxe Holet");
    h[90].rating = 4.5;
    h[90].price = 7000;

    strcpy(h[91].ch,"Club De Novo Hotel ");
    h[91].rating = 4.35;
    h[91].price = 5255;

    strcpy(h[92].ch,"Asian Hotel Pvt. Ltd.");
    h[92].rating = 4.05;
    h[92].price = 4105;

    strcpy(h[93].ch,"Hotel Span");
    h[93].rating = 3.50;
    h[93].price = 2382;

    strcpy(h[94].ch,"Lumbini Hotel");
    h[94].rating = 3.50;
    h[94].price = 2280;

    strcpy(h[95].ch,"Hotel Da Flamingo");
    h[95].rating = 4.25;
    h[95].price = 5450;


    strcpy(h[96].ch,"Everest Hotel");
    h[96].rating = 3.50;
    h[96].price = 3553;

    strcpy(h[97].ch,"Madhukunda Homestay");
    h[97].rating = 3.0;
    h[97].price = 750;

    strcpy(h[98].ch,"The SR Hotel");
    h[98].rating = 4.0;
    h[98].price = 2520;

    strcpy(h[99].ch,"Lotus Leaf Hotel");
    h[99].rating = 4.5;
    h[99].price = 3000;

    Display(90,100);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(90,100);
        break;
    case 2:
    sort_by_price(90,100);
        break;
    default:
        break;
    }
}
void kathmandu()
{
    int i, n = 1,option;

    strcpy(h[0].ch, "Hotel Himalaya");
    h[0].rating = 4.1;
    h[0].price = 8209;

    strcpy(h[1].ch, "The Everest Hotel");
    h[1].rating = 4.1;
    h[1].price = 6412;

    strcpy(h[2].ch, "Peace and Joy Guest House");
    h[2].rating = 4.8;
    h[2].price = 1781;

    strcpy(h[3].ch, "Hotel Manohara");
    h[3].rating = 3.7;
    h[3].price = 1776;

    strcpy(h[4].ch, "Hyatt Regency Kathmandu");
    h[4].rating = 4.5;
    h[4].price = 12546;


    strcpy(h[5].ch, "The Soaltee Kathmandu");
    h[5].rating = 4.5;
    h[5].price = 10628;

    strcpy(h[6].ch, "Radisson Hotel Kathmandu");
    h[6].rating = 4.3;
    h[6].price = 8454;

    strcpy(h[7].ch, "The Dwarika's Hotel");
    h[7].rating = 4.5;
    h[7].price = 25571;

    strcpy(h[8].ch, "Hotel Thamel");
    h[8].rating = 4.0;
    h[8].price = 3444;

    strcpy(h[9].ch, "Hotel Yak & Yeti");
    h[9].rating = 4.3;
    h[9].price = 6379;

    Display(0,10);
   
   printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

   switch (option)
    {
    case 1:
    sort_by_rating(0,10);
        break;
    case 2:
    sort_by_price(0,10);
        break;
    default:
        break;
    }
}


void pokhara()
{
    int i, n = 1,option;

    strcpy(h[10].ch, "Hotel Pokhara Grande");
    h[10].rating = 4.2;
    h[10].price = 8976;

    strcpy(h[11].ch, "The Fulbari Resort & Spa");
    h[11].rating = 4.3;
    h[11].price = 5555;

    strcpy(h[12].ch, "Waterfront Resort by KGH Group");
    h[12].rating = 4.2;
    h[12].price = 8398;

    strcpy(h[13].ch, "Sunshine Resort Pokhara");
    h[13].rating = 4.4;
    h[13].price = 10687;

    strcpy(h[14].ch, "Bodhi Suites Boutique");
    h[14].rating = 4.1;
    h[14].price = 5842;


    strcpy(h[15].ch, "Lake View Resort");
    h[15].rating = 4.2;
    h[15].price = 4342;

    strcpy(h[16].ch, "New Summit Guest House");
    h[16].rating = 4.9;
    h[16].price = 1425;

    strcpy(h[17].ch, "Hotel Lake Shore");
    h[17].rating = 4.5;
    h[17].price = 3264;

    strcpy(h[18].ch, "Dahlia Boutique Hotel");
    h[18].rating = 4.2;
    h[18].price = 4884;

    strcpy(h[19].ch, "Tuki Resort");
    h[19].rating = 4.1;
    h[19].price = 2672;

    Display(10,20);
    
    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(10,20);
        break;
    case 2:
    sort_by_price(10,20);
        break;
    default:
        break;
    }
}

void itahari()
{
    int i,j=0,option;
    char hotels[30][30] = {"Hotel Verandah","Hotel Maden Inn","Hotel valley View","Hotel Intourist palace","Hoetel Heaven","Hotel Brihaspati","Hotel Itahari","Hotel Valley Top","Hotel Sunsari","Itagari Blues"};
    float rating [10]={4.5,4,4.8,4.6,4.7,4.2,4.1,4.3,3.8,5};
    int price[10]={1000,2340,2780,1800,1790,2350,1525,800,1200,1500};
    for(i=80;i<90;i++){    
    strcpy(h[i].ch,hotels[j]);
    h[i].rating = rating[j];
    h[i].price = price[j];
    j++;
    }

    Display(80,90);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(80,90);
        break;
    case 2:
    sort_by_price(80,90);
        break;
    default:
        break;
    }
    
}
void janakpur()
{   printf("Welcome To janakpur");
    int i,j=0,option;
    char hotels[30][30] = {"Hotel Sita Sharan","Hotel Vrindavan","Hotel Royal palace","Hotel Welcome","Hotel Jankpur","Puakar Hotel","Baba Ko dahba","Gautam Hotel","Hotel Ram Sita","Manaki Hotel"};
    float rating [10]={4.7,4.2,3.8,4.6,5,4.2,4.1,4.3,4.8,5};
    int price[10]={1260,940,2780,2800,2790,1350,1500,1800,1200,1500};
    for(i=20;i<30;i++){    
    strcpy(h[i].ch,hotels[j]);
    h[i].rating = rating[j];
    h[i].price = price[j];
    j++;
    }

    Display(20,30);

    printf("\nSort the hotels according to: ");
    printf("\n1.Rating\n2.price");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    sort_by_rating(20,30);
        break;
    case 2:
    sort_by_price(20,30);
        break;
    default:
        break;
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


void sort_by_price(int x, int y)
{
    char exc[100];
    float a=0,b=0;
    for (int i = x; i < y; i++)
        {    
            for (int j = i + 1; j < y; j++)
            {
                if (h[i].price > h[j].price)
                {
                    strcpy(exc, h[i].ch);
                    strcpy(h[i].ch, h[j].ch);
                    strcpy(h[j].ch, exc);

                    b = h[i].rating;
                    h[i].rating = h[j].rating;
                    h[j].rating = b;
                    
                    a = h[i].price;
                    h[i].price = h[j].price;
                    h[j].price = a;
                }
            }
        }
        Display(x,y);
    }    

    void sort_by_rating(int x, int y)
{
    char exc[100];
    float a=0,b=0;
    for (int i = x; i < y; i++)
        {    
            for (int j = i + 1; j < y; j++)
            {
                if (h[i].rating > h[j].rating)
                {
                    strcpy(exc, h[i].ch);
                    strcpy(h[i].ch, h[j].ch);
                    strcpy(h[j].ch, exc);

                    b = h[i].rating;
                    h[i].rating = h[j].rating;
                    h[j].rating = b;
                    
                    a = h[i].price;
                    h[i].price = h[j].price;
                    h[j].price = a;
                }
            }
        }
        Display(x,y);
    }    


void Display(int x, int y){
    printf("\nSN.\t\t\t\t\t\t\t\tHotel Name \t\t      Rating\t\tPrice\n");
    for(int i=0;i<=160;i++){
        printf("-");
        Sleep(1.5);
    }
    int n=1;
    for (int i = x; i < y; i++)
    {
        Sleep(200);
        printf("\n%d \t\t%60s\t\t\t%0.1f\t\t%0.1f\n",n,h[i].ch,h[i].rating,h[i].price);
        n++;
    }
    n=1;
}
