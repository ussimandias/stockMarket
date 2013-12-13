//
//  main.c
//  stockMarket
//
//  Created by Usman Tarfa on 10/15/13.
//  Copyright (c) 2013 Usman Tarfa. All rights reserved.
//

#include <stdio.h>


int main (void)

{
    
    
    
    struct security  {
        
        char symbol[9];
        
        char name [30];
        float ask_price;
        float bid_price;
        float last_price;
        float close_price;
        int share_number;
        
    };
    
    
    
    
    
    struct stock  {
        
        struct security sec;
        
        float eps;
        
    };
    
    
    
    
    
    struct option {
        
        struct security sec;
        
        float strike_price;
        
        char option_type [5];
        
    };
    
    
    
    
    
    struct stock  stocks [2];
    
    struct option options[2];
    
    float amount= 0;
    
    int i;
    
    
    
    
    
    for(i=0;i<2;++i)
        
    {
        
        printf("Please enter security symbol>");
        
        scanf("%s",stocks[i].sec.symbol);
        
        
        
        printf("Please enter name of security>");
        
        scanf("%s",stocks[i].sec.name);
        
        
        
        printf("Please enter ask price>");
        
        scanf("%f",&stocks[i].sec.ask_price);
        
        
        
        printf("Please enter bid price>");
        
        scanf("%f",&stocks[i].sec.bid_price);
        
        
        printf("Please enter last price >");
        
        scanf("%f",&stocks[i].sec.last_price);
        
        printf("Please enter close price>");
        
        scanf("%f",&stocks[i].sec.close_price);
        
        printf("Please enter number of shares>");
        
        scanf("%d",&stocks[i].sec.share_number);
        
        printf("Please enter Earnings per Share EPS>");
        
        scanf("%f",&stocks[i].eps);
        
        
        printf("\n");
        
    }
    
    
    
    
    for(i=0;i<2;++i)
        
    {
        
        printf("Please enter security symbol>");
        
        scanf("%s",options[i].sec.symbol);
        
        
        
        printf("Please enter name of security>");
        
        scanf("%s",options[i].sec.name);
        
        
        
        printf("Please enter ask price>");
        
        scanf("%f",&options[i].sec.ask_price);
        
        
        
        printf("Please enter bid price>");
        
        scanf("%f",&options[i].sec.bid_price);
        
        
        printf("Please enter last price >");
        
        scanf("%f",&options[i].sec.last_price);
        
        
        printf("Please enter close price>");
        
        scanf("%f",&options[i].sec.close_price);
        
        
        printf("Please enter number of shares>");
        
        scanf("%d",&options[i].sec.share_number);
        
        printf("Please enter strike price >");
        
        scanf("%f",&options[i].strike_price);
        
        printf("Please enter type of option >");
        
        scanf("%s",options[i].option_type);
        
        
        
        printf("\n");
        
    }
    
    
    
    
    
    for(i=0;i<2;++i)
        
    {
        
        amount+=stocks[i].sec.bid_price*stocks[i].sec.share_number;
        amount+=options[i].sec.bid_price*options[i].sec.share_number;
        
        printf("Stock: %s %s\n %f %f\n %f %f\n %d\n",stocks[i].sec.symbol,stocks[i].sec.name,stocks[i].sec.ask_price,stocks[i].sec.bid_price,stocks[i].sec.last_price,stocks[i].sec.close_price,stocks[i].sec.share_number,stocks[i].eps);
        printf("Option: %s %s\n %f %f\n %f %f\n %f\n %d\n",options[i].sec.symbol,options[i].sec.name,options[i].sec.ask_price,options[i].sec.bid_price,options[i].sec.last_price,options[i].sec.close_price,options[i].sec.share_number,options[i].strike_price,options[i].option_type);
        
        printf("\n");
        
    }
    
    printf("Current Value of the Portfolio: %f",amount);
    
    
    for(;;);
    fflush(stdin);
    return (0);
    
    
}

