
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
unsigned char pass[4]={1,9,9,9};
unsigned char pass2[4];

 char trail=0;
 char flag;
 while(trail<3){
     printf("please enter pass\n");
	 for(int i=0;i<4;i++)
	 {   
		 scanf("%d",&pass2[i]);
		 fflush(stdin);
	 }
	 printf("please wait");
	 for (int i =0;i<5;i++)
	  {
		  printf(".");
		  Sleep(100);
		
	  }

	  
	  printf("\n");
	   for(int i=0;i<4;i++)
	   {
		if(pass2[i]!=pass[i])
		{
			flag=1;
			break;
		 	
		}
		
	   }
	   if(flag==1)
	   {
		   printf("please enter your pass again\n");
		   trail=trail+1;
		   flag=0;
		   
	   }
	   else{
		   printf("welcome\n");
		   break;
	   }


	
}
	return 0;
}