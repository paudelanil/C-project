#include<stdio.h>
#include<conio.h>
#include<string.h>
struct hotels{
    char ch[50];
    float rating;
    float price;
}h[100];
int main(){
    strcpy(h[0].ch,"Royal Mustang Resort");
    h[0].rating = 4.4;
    h[0].price = 1000;
    strcpy(h[1].ch,"Moksha Mustang ");
    h[1].rating = 5;
    h[1].price = 1000;
    strcpy(h[2].ch,"Oms Home Jomsom");
    h[2].rating = 4.1;
    h[2].price = 1000;
    strcpy(h[3].ch,"Hotel Himalayan Paradise");
    h[3].rating = 4.3;
    h[3].price = 1000;
    strcpy(h[4].ch,"Jomsom Mountain Resort");
    h[4].rating = 4.5;
    h[4].price = 1000;
    strcpy(h[5].ch,"Kalopani Guest House");
    h[5].rating = 4.3;
    h[5].price = 1000;
    strcpy(h[6].ch,"Lotus Holiday Inn");
    h[6].rating = 4.2;
    h[6].price = 1000;
    strcpy(h[7].ch,"Hotel Bob Marley");
    h[7].rating = 4.0;
    h[7].price = 1000;
    strcpy(h[8].ch,"Damodar Kunda Hotel");
    h[8].rating = 4.7;
    h[8].price = 1000;
    strcpy(h[9].ch,"Red house ");
    h[9].rating = 4.4;
    h[9].price = 1000;
    strcpy(h[10].ch,"Kasara Resort - Chitwan National Park");
    h[10].rating= 4.5;
    h[10].price= 19334;
    strcpy(h[11].ch,"Into The Wild Eco Resort - Patihani 22");
    h[11].rating= 4.6;
    h[11].price= 7069;
    strcpy(h[12].ch,"Green Park Chitwan");
    h[12].rating= 4.5;
    h[12].price= 5000;
    strcpy(h[13].ch,"Chitwan Tiger Camp");
    h[13].rating= 4.0;
    h[13].price= 2018;
    strcpy(h[14].ch,"Hotel National Park Sauraha");
    h[14].rating= 4.3;
    h[14].price= 1187;
    strcpy(h[15].ch,"Meghauli Serai, A Taj Safari - Chitwan National Park");
    h[15].rating= 4.6;
    h[15].price= 45775;
    strcpy(h[16].ch,"Barahi Jungle Lodge");
    h[16].rating= 4.8;
    h[16].price= 24,234;
    strcpy(h[17].ch,"The Fern Residency - Hotel Chitwan");
    h[17].rating= 4.2;
    h[17].price= 5754;
    strcpy(h[18].ch,"Landmark Forest Park");
    h[18].rating= 4.2;
    h[18].price= 6557;
    strcpy(h[19].ch,"Kasara Resort - Chitwan National Park");
    h[19].rating= 4.5;
    h[19].price= 20789;

    printf("\n\t\t TOP HOTELS IN MUSTANG\t\t\n ");
    for(int i =0;i<10;i++)
    {
        printf("\n%d. %s",i+1, h[i].ch);
        printf("\n\t\trating: %.1f",h[i].rating);
        printf("\n\t\tprice: Rs.%.2f",h[i].price);
        printf("\n");
    }
    printf("\n\t\t TOP HOTELS IN CHITWAN\t\t\n ");
    for(int i =10;i<20;i++)
    {
        printf("\n%d. %s",i+1, h[i].ch);
        printf("\n\t\trating: %.1f",h[i].rating);
        printf("\n\t\tprice: Rs.%.2f",h[i].price);
        printf("\n");
    }
return 0;
}