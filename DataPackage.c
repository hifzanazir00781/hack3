/*
 * Author: Hifza Nazir
 * Email: hifzanazir456@gmail.com
 * Date : 2023/10/22
 * 
 * This program calculate the user data package. it inform the user. if there data is almost finished ,
   data is completely finished or near to finished. 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // declear variables
    double totalGB,totalUsed,AvgDailyUsed,maxUsed,remainingGB;
    int current_day,remaining_day;
    
    //prompt the number of GBs in 30 days,total GBs used and current days
    printf("Number of GB in 30 days period: \n");
    scanf("lf",&totalGB);
    printf("the total number of GB used: \n");
    scanf("lf",&totalUsed);
    printf("current day from 30 days, 1 for first and 30 for last day: \n");
    scanf("lf",current_day);

    // calculate the remaining days, remaining GBS ,average daily used, and maximum used.
    remaining_day=30-current_day;
    remainingGB=totalUsed-totalGB;
    AvgDailyUsed=totalUsed/current_day;
    maxUsed=totalGB/30;
}