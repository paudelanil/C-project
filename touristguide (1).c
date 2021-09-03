#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void SetColor();

void coupon();

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
void gotoxy();

void sort_by_rating(int x, int y);
void sort_by_price(int x, int y);

void write();
void read();
int readhotel(int);
//freqency
void frequency();
void box(int,int,int,int);

int Display();







//Custom Data Types//also global variables
typedef struct
{
   char name[100];
   char rov[100];
   char city[100];
   char hotel[100];
   float cost;
   int code;//Hotel Code
   int cyday;//year day of program execution//
   int jyday;//joined day//
   int nv;//number of visitors
}detail;

detail one;


struct hotels
{
    char ch[50];
    float rating;
    float price;
    int hcode;
};

struct hotels h[100];


//For frequency
int f[100];
int uh[10];
int dtime;

int price;
int h1code;
//end of global variables

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


 void zero(int,int);
 void characterC(int,int);
 void characterW(int,int);
 void characterE(int,int);
 void characterL(int,int);
 void characterM(int,int);
 void zero(int,int);
 void welcome();
 void barline();


int main()
{
    welcome();
    printf("\n\n");
    int i;
    char d;
    int v,duration;
    // for discount vouchers
    int option , coup[2] , coupon_code,discount;
    char book;
    char ch1, password[10];

    //gets current year day//
    time_t c;
    time(&c);
    struct tm *t= localtime(&c);
    dtime=t->tm_yday;//For Calculating room vacancy//

    //Checking if hotel is unavailable//
    frequency();

    SetColor(10);

    printf("\n\t\t****************Enter Your name:****************\n\t");
    pass:
    box(15,20,4,80);
    gotoxy(16,21);
    SetColor(10);
    printf("Name: ");
     SetColor(15);
    gets(one.name);


    SetColor(10);


     if(strcmp(one.name,"admin")==0)
     {    gotoxy(16,23);
            printf("Enter your password:");
        SetColor(15);
        for(i=0; i<10; i++)
        {
                ch1=getch();
                password[i]=ch1;

                if(ch1!=13)      //13 is ASCII of Enter key
                    printf("*");
                if(ch1 == 13)
                    break;
        }
        password[i]='\0';

        if(strcmp(password,"admin")==0)
        {
            printf("\n\n\n\t\tDo you want to read the user history Y/N:");
            d=getchar();
            if(tolower(d)=='y')
            read();
            return 0;
        }

        else if(strcmp(password,"admin")!=0)
        {   SetColor(12);
            printf("\n\n\t\t Your password was wrong, you cannot access admin section:\n\n");
        }
        goto pass;
     }
     else if(strcmp(one.name,"hotel")==0)
     {
        gotoxy(16,23);
        printf("Enter your hotel code:");
        scanf("%i",&h1code);

        SetColor(15);
        if(h1code>99 || h<0)
        {
            printf("Invalid code");
            return 0;
        }
        else
        {
            readhotel(h1code);
            return 0;
        }
     }

    printf("\n\n");

    SetColor(15);

    int purpose;


    printf("\n\n\t\t Please choose your purpose of visit to NEPAL:");

    printf("\n\t\t 1.BUSINESS");
    printf("\n\t\t 2.TOURISM");
    printf("\n\t\t 3.FAMILY VISIT\n");
    printf("\n\t\tEnter the corresponding numbers to given options\n\t\t");

    scanf("%d",&purpose);
    system("CLS");

    switch(purpose)
    {
    case 1:
        strcpy(one.rov,"Business");
        business();

        break;
    case 2:
        strcpy(one.rov,"Tourism");
        tourism();

        break;
    case 3:
        strcpy(one.rov,"Family");
        family();

        break;
    default:
        printf("\n Please enter a valid option");
        strcpy(one.rov,"Error Occured");
        break;
    }
   //new Code//
    system("CLS");
   printf("\n\n\n");
   SetColor(13);
   printf("\t\t\tTHANK YOU FOR Choosing %s\n",one.hotel);
   barline();
   SetColor(15);
    printf("\n\tEnter your duration of stay in %s: ",one.hotel);
    SetColor(10);
    scanf("%d",&duration);
    SetColor(15);
    printf("\n\tEnter the no. of visitors: ");
    SetColor(10);
    scanf("%d",&v);
    one.nv=v;
    SetColor(15);
    one.cost=(price*duration*v);
    one.cyday=dtime+duration;
    one.jyday=dtime;
    SetColor(14);
    box(10,10,7,60);
    gotoxy(10,12);
    SetColor(15);
    printf("\tYour city is:%s\n",one.city);
    printf("\t\tYour hotel is:%5s\n",one.hotel);
    printf("\t\tYour cost of stay is: Rs%5.2f\n",one.cost);
    SetColor(9);
    gotoxy(0,19);
    barline();
    SetColor(15);

    printf("\nFollow the instruction to get a coupon and win a discount ");
    coupon(coup);
    printf("\nEnter Your Coupon Code\n( Press 1 If you have none)\t");
    scanf("%d",&coupon_code);
    if(coupon_code==coup[1]){

        printf("\n\n\nCongrats...This Code is eligible For %d percent discount",coup[0]);
        one.cost=(1-((float)coup[0]/100))*(price*duration*v);
        printf("\n\n\n");
        SetColor(14);
        box(10,33,7,60);
        gotoxy(10,12);
        SetColor(15);
        gotoxy(10,34);
        printf("\t\tYour city is:\t%s\n",one.city);
        printf("\t\tYour hotel is:\t%s\n",one.hotel);
        printf("\t\tYour discounted cost of stay is:\t Rs%.2f\n",one.cost);
    }
    else{
        printf("\nThis Code is Not eligible");
        SetColor(14);
        box(10,32,7,60);
        gotoxy(10,12);
        SetColor(15);
        gotoxy(10,34);
        printf("\t\tYour city is:\t%s\n",one.city);
        printf("\t\tYour hotel is:\t%s\n",one.hotel);
        printf("\t\tYour discounted cost of stay is:\t Rs%.2f\n",one.cost);
    }

    gotoxy(10,39);
    printf("\n\nHave a good time");
    SetColor(11);

    printf("\n Thank you for using our Service:");
    write();
    SetColor(0);
    return 0;

}

//Frequency
void frequency()
{
    FILE *ptr;
    ptr=(fopen("details.txt","rb"));
        if(ptr==NULL)
        {
            return;
        }

    int i =0,c,a=0;
        while(1)
        {
            fread(&one,sizeof(detail),1,ptr);

            if(feof(ptr))
            break;

            if((dtime) < one.cyday)
            {
            f[i]=one.code;
            }
            i++;
        }
       fclose(ptr);
        while(i>=0)
        {
            c=0;
            for(int j=i-1;j>=0;j--)
            {

                if(f[i]==f[j])
                {
                    c++;
                }

            }
                if(c>=2)
                {
                    uh[a]=f[i];
                    a++;
                }
            i--;
        }
}




void business()
{   char option;
    int b_city,hotel_option;

    SetColor(9);
    printf("\n\t\t\tWELCOME TO BUSINESS SECTION\n");
    SetColor(10);
    printf("\n Please choose city\n");
    SetColor(15);

    business_city();
    label3:
    printf("\n\nEnter the corresponding number:\t\t");
    scanf("%d",&b_city);
    switch(b_city)
    {
     case 1:
        strcpy(one.city,"Kathmandu");
        kathmandu();
        break;
     case 2:
        strcpy(one.city,"Pokhara");
        pokhara();

        break;
    case 3:
        strcpy(one.city,"Chitwan");

        Chitwan();
        break;
    case 4:
        Butwal();
        strcpy(one.city,"Butwal");
        break;
    case 5:
        strcpy(one.city,"Nepalgunj");
        Nepalgunj();

        break;
    case 6:
        strcpy(one.city,"Mahendranagar");
        Mahendranagar();
        break;
    case 7:
        strcpy(one.city,"Biratnagar");
        Biratnagar();
        break;
    case 8:
        strcpy(one.city,"Itahari");
        itahari();
        break;
    default:
        strcpy(one.city,"Error occured");
        printf("Please enter a valid option\n");
        goto label3;
        break;

    }
}
void tourism()
{   int option;

    SetColor(9);
    printf("\n\t\t\t\t WELCOME TO TOURISM SECTION");
    SetColor(10);
    printf("\n\n\t Please choose city\t");
    SetColor(15);
    tourism_city();
    label1:
    SetColor(10);
    printf("\n\nEnter the corresponding number:\t\t");
    SetColor(15);
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        strcpy(one.city,"Kathmandu");
        kathmandu();

        break;
     case 2:
        strcpy(one.city,"Pokhara");
        pokhara();

        break;
    case 3:
        strcpy(one.city,"Chitwan");
        Chitwan();
        break;
    case 4:
        strcpy(one.city,"Butwal");
        Butwal();
        break;
    case 5:
        strcpy(one.city,"Nepalgunj");
        Nepalgunj();

        break;
    case 6:
        strcpy(one.city,"Mahendranagar");
        Mahendranagar();
        break;
    case 7:
        strcpy(one.city,"Biratnagar");
        Biratnagar();
        break;
    case 8:
        strcpy(one.city,"Itahari");
        itahari();

        break;
    case 9:
        strcpy(one.city,"Janakpur");
        janakpur();
        break;
    case 10:
        strcpy(one.city,"Mustang");
        Mustang();
        break;
    default:
    printf("Please enter a valid option\n");
    goto label1;
        break;
    }
}
void family()
{
    int option;

    SetColor(9);
    printf("\n\t WELCOME TO Family");
    SetColor(10);
    printf("\n Please choose city\n");
    SetColor(15);
    family_city();
    label2:

    SetColor(10);
    printf("\n\nEnter the corresponding number:\t\t");
    SetColor(15);
    scanf("%d",&option);
    switch(option)
    {
case 1:
        strcpy(one.city,"Kathmandu");
        kathmandu();
        break;
     case 2:
        pokhara();
        strcpy(one.city,"Pokhara");
        break;
    case 3:
        strcpy(one.city,"Chitwan");
        Chitwan();
        break;
    case 4:
        strcpy(one.city,"Butwal");
        Butwal();
        break;
    case 5:
        strcpy(one.city,"Nepalgunj");
        Nepalgunj();
        break;
    case 6:
        strcpy(one.city,"Mahendranagar");
        Mahendranagar();
        break;
    case 7:
        strcpy(one.city,"Biratnagar");
        Biratnagar();

        break;
    case 8:
        strcpy(one.city,"Itahari");
        itahari();

        break;
    case 9:
        strcpy(one.city,"Janakpur");
        janakpur();
        break;
    case 10:
        strcpy(one.city,"Mustang");
        Mustang();

        break;
    default:
    printf("Please enter a valid option\n\n");
    goto label2;
        break;
    }
}


void business_city()
{
    gotoxy(20,3);
    printf("\t\t 1. Kathmandu");
    printf("\t\t 2. Pokhara");
    gotoxy(20,5);
    printf("\t\t 3. Chitwan");
    printf("\t\t 4. Butwal");
    gotoxy(20,7);
    printf("\t\t 5. Nepalgunj");
    printf("\t\t 6. Mahendranagar");
    gotoxy(20,9);
    printf("\t\t 7. Biratnagar");
    printf("\t\t 8. Itahari");
    printf("\n");
}
void tourism_city()
{   gotoxy(20,5);
    printf("\t\t 1. Kathmandu");
    printf("\t\t  2. Pokhara");
    gotoxy(20,7);
    printf("\t\t  3. Chitwan");
    printf("\t\t  4. Butwal");
    gotoxy(20,9);
    printf("\t\t  5. Nepalgunj");
    printf("\t\t  6. Mahendranagar");
    gotoxy(20,11);
    printf("\t\t  7. Biratnagar");
    printf("\t\t  8. Itahari");
    gotoxy(20,13);
    printf("\t\t  9. Janakpur");
    printf("\t\t  10. Mustang");
}
void family_city()
{
    gotoxy(20,5);
    printf("\t\t1. Kathmandu");
    printf("\t\t2. Pokhara");
    gotoxy(20,7);
    printf("\t\t3. Chitwan");
    printf("\t\t4. Butwal");
    gotoxy(20,9);
    printf("\t\t5. Nepalgunj");
    printf("\t\t6. Mahendranagar");
    gotoxy(20,11);
    printf("\t\t7. Biratnagar");
    printf("\t\t8. Itahari");
    gotoxy(20,13);
    printf("\t\t9. Janakpur");
    printf("\t\t10. Mustang");
}


void Nepalgunj()
{
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

    for (int i=60;i<70 ;i++)
    {
    h[i].hcode=i;
    }

    Display(60,70);
}
void Mustang()
{
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

    for (int i=30;i<40 ;i++)
    {
    h[i].hcode=i;
    }

    Display(30,40);
}
void Chitwan()
{
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

    for (int i=40;i<50 ;i++)//Assigns the unique hotel code to each member
    {
    h[i].hcode=i;
    }

    Display(40,50);
}
void Mahendranagar()
{
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

    for (int i=70;i<80 ;i++)
    {
    h[i].hcode=i;
    }

    Display(70,80);
}
void Biratnagar()
{
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


    strcpy(h[56].ch,"Big Hotel");
    h[56].rating = 4.0;
    h[56].price = 3200;

    strcpy(h[57].ch,"Hotel Murchunga International");
    h[57].rating = 5.0;
    h[57].price = 3831;

    strcpy(h[58].ch,"Hotel Daftari Palace");
    h[58].rating = 4.10;
    h[58].price = 5597;

    strcpy(h[59].ch,"Kaushaki Hotel");
    h[59].rating = 4.30;
    h[59].price = 6200;

    for (int i=50;i<60 ;i++)
    {
    h[i].hcode=i;
    }

    Display(50,60);
}

void Butwal()
{
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

    for (int i=90;i<100 ;i++)
    {
    h[i].hcode=i;
    }

    Display(90,100);
}
void kathmandu()
{
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

    for (int i=0;i<10 ;i++)
    {
    h[i].hcode=i;
    }
    Display(0,10);
}


void pokhara()
{

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

    for (int i=10;i<20 ;i++)
    {
    h[i].hcode=i;
    }

    Display(10,20);

}

void itahari()
{
    int i,j=0;
    char hotels[30][30] = {"Hotel Verandah","Hotel Maden Inn","Hotel valley View","Hotel Intourist palace","Hoetel Heaven","Hotel Brihaspati","Hotel Itahari","Hotel Valley Top","Hotel Sunsari","Itagari Blues"};
    float rating [10]={4.5,4,4.8,4.6,4.7,4.2,4.1,4.3,3.8,5};
    int price[10]={1000,2340,2780,1800,1790,2350,1525,800,1200,1500};
    for(i=80;i<90;i++){
    strcpy(h[i].ch,hotels[j]);
    h[i].rating = rating[j];
    h[i].price = price[j];
    h[i].hcode=i;
    j++;
    }
    Display(80,90);

}
void janakpur()
{   printf("Welcome To janakpur");
    int i,j=0;
    char hotels[30][30] = {"Hotel Sita Sharan","Hotel Vrindavan","Hotel Royal palace","Hotel Welcome","Hotel Jankpur","Puakar Hotel","Baba Ko dahba","Gautam Hotel","Hotel Ram Sita","Manaki Hotel"};
    float rating [10]={4.7,4.2,3.8,4.6,5,4.2,4.1,4.3,4.8,5};
    int price[10]={1260,940,2780,2800,2790,1350,1500,1800,1200,1500};
    for(i=20;i<30;i++){
    strcpy(h[i].ch,hotels[j]);
    h[i].rating = rating[j];
    h[i].price = price[j];
    h[i].hcode=i;
    j++;
    }

    Display(20,30);

}



void sort_by_price(int x, int y)
{
    char exc[100];
    int t;
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

                    t=h[i].hcode;
                    h[i].hcode= h[j].hcode;
                    h[j].hcode= t;
                }
            }
        }
        Display(x,y);
    }


void sort_by_rating(int x, int y)
{
    char exc[100];
    int t;
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

                    t=h[i].hcode;
                    h[i].hcode= h[j].hcode;
                    h[j].hcode= t;
                }
            }
        }
        Display(x,y);
    }

void write()
{
    FILE *ptr;
    ptr=fopen("details.txt","ab");
        if(!ptr)
        {
            printf("error opening the file");
            return;
        }
    fwrite(&one,sizeof(detail),1,ptr);
    fclose(ptr);
}

void read()
{
    FILE *ptr;
    ptr=(fopen("details.txt","rb"));
        if(ptr==NULL)
        {
            printf("error opening the file");
            return;
        }

    int i =0;
        while(1)
        {
            fread(&one,sizeof(detail),1,ptr);
            if(feof(ptr))
            break;
            printf("\n");
            printf("%i. %s\n",i+1,one.name);
            printf("Reason of visit:%s\n",one.rov);
            printf("City name:%s\n",one.city);
            printf("Hotel Name:%s\n",one.hotel);
            printf("Cost:%.2f\n",one.cost);
            printf("Hotel code:%i\n",one.code);
            printf("\n");
            i++;
        }
 fclose(ptr);
}

int readhotel(int a)
{
    float sum=0;
    float cut=0;
    int tday=0;
    int people=0;
    FILE *ptr;
    ptr=(fopen("details.txt","rb"));
        if(ptr==NULL)
        {
            printf("error opening the file");
            return 1;
        }

    int i =0;

        while(1)
        {
            fread(&one,sizeof(detail),1,ptr);
            if(feof(ptr))
            break;

            if (a==one.code)
            {
                if(i==0)
                {
                SetColor(9);
                printf("\nHotel Name: %s\n",one.hotel);
                }
                SetColor(9);
                if(one.nv==1)
                {
                printf("%i. Guest: %s\n",i+1,one.name);
                }
                else
                {
                printf("%i. Guest: %s + %s's %i companions\n",i+1,one.name,one.name,one.nv-1);
                people+=one.nv;
                }
                printf("Reason of Visit: %s\n",one.rov);
                if(one.cyday<dtime)
                printf("stayed for: %i Day/s\n",(one.cyday-one.jyday));
                else if(one.cyday>dtime)
                printf("In stay for: %i More Day/s\n",(one.cyday-dtime));
                else if(one.cyday==dtime)
                {
                printf("Will leave your service today, stayed for past %i Day/s",(one.cyday-one.jyday-1));
                }
                tday+=(one.cyday-one.jyday);
                printf("Spent: %.2f\n",one.cost);
                sum +=one.cost;
                printf("\n");
                i++;
            }

        }   SetColor(15);
         if(i==0)
            {
                printf("\n\nNo body seems to have used your service\n");
            }
        else
        {
            if(people==1)
            printf("In total %i person has stayed at your place for %i days\n",people,tday);
            else
            printf("In total %i people have stayed at your place for %i days\n",people,tday);
            printf("Money collected= %.2f\n",sum);
            cut=sum-(0.1*sum);
            printf("Money after we take our cut= %.2f\n",cut);
        }
 fclose(ptr);
 getch();
}


int Display(int x, int y)
{
   int option,hotel_choice;

    top:
    SetColor(14);
    printf("\nSN.\t\t\t\t\t\t\t\tHotel Name \t\t      Rating\t\tPrice\n");
    SetColor(12);
    for(int i=0;i<=120;i++)
    {
        printf("-");
        Sleep(1);
    }
    SetColor(15);

    int n=1;
    for (int i = x; i < y; i++)
    {
        for (int j=0;j<10;j++)
        {
            if(h[i].hcode==uh[j])
            {
                printf("\n%d\t\t%60s is currently full.\n",n,h[i].ch);
                goto skipdisplay;
            }
        }
        Sleep(150);
        printf("\n%d\t\t%60s\t\t\t%0.1f\t\t%0.1f\n",n,h[i].ch,h[i].rating,h[i].price);
        skipdisplay:
        n++;
    }
        char cs;

        redo:
        printf("\n\n\n\t\tWould you like choose a hotel or sort\t");
        SetColor(11);
        printf("\n\t\tPress c to choose and s to sort\t");
        SetColor(15);
        scanf(" %c",&cs);
        cs=tolower(cs);

        switch (cs)
        {

        case 'c':
            SetColor(10);

            rechoice:
            do
            {
            printf("\n\t\tChoose from the options available above:");
            scanf("%i",&hotel_choice);
            }while(hotel_choice >10);//Flag

        for (int j=0;j<10;j++)
        {
            if(h[hotel_choice+x-1].hcode==uh[j])
            {
                printf("\n\t%30s is currently full.\n",h[hotel_choice+x-1].ch);
                goto rechoice;
            }
        }



            SetColor(15);
            int i;
            for(i=x; i<y;i++)
            {
                if(hotel_choice-1==(i%10))
                {
                    break;
                }
            }
            strcpy(one.hotel,h[i].ch);
            one.code=h[i].hcode;
            price=h[i].price;
        break;

        case 's':
            SetColor(10);
            printf("\n\t\tSort the hotels according to: ");
            printf("\n\n\t\t1.Rating\n\n\t\t2.price\n");
            SetColor(15);
            scanf("%d", &option);

                switch (option)
                {
                case 1:
                sort_by_rating(x,y);
                    break;
                case 2:
                sort_by_price(x,y);
                    break;
                default:
                printf("Enter a valid option:");

                    break;
                }
        break;

        default:

        goto redo;
        break;
        }

    }


void coupon(int coup[2])
{

    int b[10],a[10],i,user;
    printf("\nEnter a Digit between 0 and 9 ");
    initial:
    scanf("%d",&user);
    if(user<10){
    srand(time(0));
    for(int i = 0; i<10; i++){
        b[i]=rand();
        a[i]=(rand())%10;
    }
    int dis=(a[user]+a[user-1]) , code=(b[user]);


    if(a[user]<7){
        printf("\nCongrats! You Got %d percent discount",dis);
        printf("\nYour Coupon Code is %d",code);
        coup[0]=dis;
        coup[1]=code;

    }
    else{
        printf("\nSorry! Better luck next time");
    }
    }
    else{
        printf("\nPlease enter digit between 0 and 9");
        goto initial;
    }
}
void welcome(){
    SetColor(11);
    int i = 8,j = 15;
    box(10,6,10,104);
    characterW(10+j,i);
    characterE(20+j,i);
    characterL(30+j,i);
    characterC(40+j,i);
    zero(50+j ,i);
    characterM(60+j,i);
    characterE(70+j,i);
    SetColor(15);}
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
void gotoxy(int x,int y)
{
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void barline()
{
    int i=0;
    do
    {
        printf("-");
        i++;
    }while(i<100);
}
void box(int x, int y,int row,int col)
{

 int i,j;
 for (i = 0; i <= row; i++)
  {
    for (j = 0; j <=col; j++)
  {
        gotoxy(x,y);
        if (i == 0 || i == row || j == 0 || j == col )
        printf("-");

   else
     printf(" ");
     x++;
  }y++;
  x = x -col-1;
  printf("\n");
  }
  printf("\n");
  }
