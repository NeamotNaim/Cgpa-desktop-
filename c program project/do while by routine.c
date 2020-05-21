
#include<stdio.h>
int main()
{
	int x;
	do
    {
    printf("Enter Day by Day number (1,2,3,4,5,6,7)\n\n\n");
    scanf("%d",& x);


if(x<=7)
{


       if(x==1)
    {
      printf("IT'S A CLOSED DAY. FLLOW YOUR HOME ROUTINE\n");
    }
    if(x==7)
    {
      printf("IT'S A CLOSED DAY. FLLOW YOUR HOME ROUTINE\n");
    }

	if(x==2)
    {
      printf("09.00 am    =   CSE  1111-BY DMA\n"

             "10.05 am    =   ENG  1111-by SH\n"
             "11.10 am    =   MATH 1111-by RR\n"
             "12.15 pm    =   PHY  1112-by DS\n"
             "02.00 pm    =   PHY  1112-by DS\n"
             "03.05 pm    =   PHY  1112-by DS\n");
    }
    	if(x==3)
    {
      printf("09.00 am    =   CSE  1121-BY MHK\n"

             "10.05 am    =   CSE  1111-by DMA\n"
             "11.10 am    =   PHY  1111-by DS\n"
             "12.15 pm    =   PHY  1112-by DS\n"
             "02.00 pm    =   CSE  1122-by MHK\n"
             "03.05 pm    =   PHY  1122-by MHK\n");
    }
    	if(x==4)
    {
      printf("09.00 am    =   MATH 1111-BY DMS\n"

             "10.05 am    =   CSE  1111-by DMA\n"
             "11.10 am    =   CSE  1121-by MHK\n"
             "12.15 pm    =   ENG  1112-by SH\n"
             "02.00 pm    =   ENG  1112-by SH\n"
             "03.05 pm    =   ENG  1112-by SH\n");
    }
    	if(x==5)
    {
      printf("09.00 am    =   ENG  1111-by SH\n"

             "10.05 am    =   CSE  1121-by MHK\n"
             "11.10 am    =   CSE  1111-by DMA\n"
             "12.15 pm    =   PHY  1111-by DS\n"
             "02.00 pm    =   CSE  1122-by MHK\n"
             "03.05 pm    =   CSE  1122-by MHK\n");
    }
    	if(x==6)
    {
      printf("09.00 am    =   CSE  1122-by MHK\n"

             "10.05 am    =   CSE  1122-by MHK\n"
             "11.10 am    =   CSE  1122-by MHK\n"
             "12.15 pm    =   CSE  1112-by SR\n"
             "02.00 pm    =   CSE  1112-by SR\n"
             "03.05 pm    =   CSE  1112-by SR\n");

   }

 }

  else
    {
    printf("YOU ENTER INVALID INSTRUCTION\n");
 }

 }

   while(x<=7);




   return 0;
}
