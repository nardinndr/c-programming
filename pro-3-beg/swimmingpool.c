#include <stdio.h>

#define GROUP_SIZE 6
#define INITIAL_COUNTER 0xFFFA//65530
 
int main(void)
{
   unsigned int shift1,shift2,shift3;
   unsigned totalVisitors;
   double average;
   unsigned int groupsNeeded;
   unsigned short counter;
   
   printf("enter visitors for three shifts :");
   scanf("%u %u %u", &shift1,&shift2,&shift3);
   totalVisitors =  shift1 + shift2 + shift3;
   average = (double)totalVisitors /3.0;
   groupsNeeded = (totalVisitors + GROUP_SIZE - 1) / GROUP_SIZE;//ceiling
   counter = INITIAL_COUNTER;
   counter += totalVisitors;
   printf("Total visitors: %u\n", totalVisitors);
   printf("Average visitors: %.2f\n", average);
   printf("Groups needed: %u\n", groupsNeeded);
   printf("Final counter: %hu\n", counter);

    return 0;
}
