void Biratnagar()
{   int i,n=1;
    strcpy(h[50].ch,"Hotel Harrison Palace");
    h[50].rating = 4.7;
    h[50].price = 5,000;

    strcpy(h[51].ch,"Hotel Verandah");
    h[51].rating = 3.50;
    h[51].price = 1,469;

    strcpy(h[52].ch,"City Guest House");
    h[52].rating = 3.70;
    h[52].price = 1,637;

    strcpy(h[53].ch,"Hotel Namaskar");
    h[53].rating = 3.60;
    h[53].price = 1,500;

    strcpy(h[54].ch,"Hotel Gajur Palace");
    h[54].rating = 4.50;
    h[54].price = 4,200;

    strcpy(h[55].ch,"Hotel Nava Yug");
    h[55].rating = 4.0;
    h[55].price = 2,400;


    strcpy(h[5].ch,"Big Hotel");
    h[56].rating = 4.0;
    h[56].price = 3,200;

    strcpy(h[5].ch,"Hotel Murchunga International");
    h[57].rating = 5.0;
    h[57].price = 3,831;

    strcpy(h[58].ch,"Hotel Daftari Palace");
    h[58].rating = 4.10;
    h[58].price = 5,597;

    strcpy(h[59].ch,"Kaushaki Hotel");
    h[59].rating = 4.30;
    h[59].price = 6,200;

   printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=50;i<60;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;

    }

    }

    void Butwal()
{   int i,n=1;
    strcpy(h[90].ch,"Everest International deluxe Holet");
    h[90].rating = 4.5;
    h[90].price = 7,000;

    strcpy(h[91].ch,"Club De Novo Hotel ");
    h[91].rating = 4.35;
    h[91].price = 5,255;

    strcpy(h[92].ch,"Asian Hotel Pvt. Ltd.");
    h[92].rating = 4.05;
    h[92].price = 4,105;

    strcpy(h[93].ch,"Hotel Span");
    h[93].rating = 3.50;
    h[93].price = 2,382;

    strcpy(h[94].ch,"Lumbini Hotel");
    h[94].rating = 3.50;
    h[94].price = 2280;

    strcpy(h[95].ch,"Hotel Da Flamingo");
    h[95].rating = 4.25;
    h[95].price = 5,450;


    strcpy(h[96].ch,"Everest Hotel");
    h[96].rating = 3.50;
    h[96].price = 3,553;

    strcpy(h[97].ch,"Madhukunda Homestay");
    h[97].rating = 3.0;
    h[97].price = 750;

    strcpy(h[98].ch,"The SR Hotel");
    h[98].rating = 4.0;
    h[98].price = 2,520;

    strcpy(h[99].ch,"Lotus Leaf Hotel");
    h[99].rating = 4.5;
    h[99].price = 3,000;

   printf("Loading");
    for(i=0;i<5;i++){
        printf(".\t");
        Sleep(100);
    }
    printf("\nSN.\tHOTELS\t\t\t\tRATING\t\t\tCOST");
        for(i=90;i<100;i++)
    {
        Sleep(500);
        printf("\n\%d\t%-30s%.1f\t\t\t%0.1f",n,h[i].ch,h[i].rating,h[i].price);
        printf("\n");
        n++;

    }


    }
