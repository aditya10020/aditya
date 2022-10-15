#include <cstdio>
#include "assignment1.h"

int main(void)
{

  double principle;
  int duration,option;

  printf("Enter The Principal Amount and Duration ");
  scanf("%lf %d",&principle,&duration);

   Investment b;

   b.GetInv(principle,duration);

  printf("Enter Your Choice :\n1.Simple Interest \n2.Compound Interest\n");
  scanf("%d",&option);
 
  b.GetInterest(option);


}
