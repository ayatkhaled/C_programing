#include<stdio.h>
#include<string.h>

// function for creating and writing in file
void create_account(){
FILE *fp;
int i, age, id, count;
char fullname[20];
int national_id;
char address[20];
char status[20];
int password;
unsigned long long l=0;


fp=fopen("ayat10.csv","ab");

fprintf(fp," ID,age,national id,fullname, address, status,password");

for(i = 0; i <1; i++){
 printf("Enter user id");
 scanf("%d", &id)
  printf("Enter age");
  scanf("%d", &age);
 printf("Enter nationa id");
 scanf("%lld", &national_id);
// printf("%lld", national_id);
 printf("Enter fullname");
 scanf("%s", &fullname);
 printf("Enter address");
 scanf("%s", &address);
 printf("account status ");
 scanf("%s", &status);
  printf("account password ");
 scanf("%d", &password);

 fprintf(fp,"\n%d,%d,%lld,%s,%s,%s,%d",id,age,national_id,fullname,address,status,password);
 }
fclose(fp);

}

//main method
int main(){
 char str[100];

while(1)
{
 
 printf("if you want to create account prees1\n");
  printf("if you want to open existing account prees2\n");
   printf("if you want to exit system press 3\n");
   
	unsigned int ch ;
   scanf("%d",&ch);
   printf("%d",ch);
		switch(ch)
		{
			case 1:

				 create_account();
				break;
			case 2:
				check existing();
				break;
			case 3:
			break;
				
			default:
				printf("You entered %d but still inside the switch\n",ch);
		}
		break;
		

	printf("Out of While loop\n");
	
}
}
