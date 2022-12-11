// C program to implement
// the above approach
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "STD_Types.h"
// Declaring all the functions
void checkbalance(u8*);
void transfermoney(void);
void display(u8*);
void person(u8*);
void open_existing(void);
void loginsu(void);
void account(void);

//void accountcreated(void);
void afterlogin(void);
void logout(void);
void Change_status(void);
//u8 *filename3;
 u8 filename3[20];
// Declaring gotoxy
// function for setting
// cursor position

// Creating a structure to store
// data of the user
struct pass {
	u8 username[50];
	u32 date, month, year;
	u8 pnumber[15];
	u8 first_name[20];
	u8 middle_name[20];
	u8 last_name[20];
	u8 address[50];
	u8 card_id[20];
	u8 Guardian_name[50];
	u8 typeaccount[20];
	long long national_id;
	long long Guardian_ID;
	long long balance;
	long long n;


	
};

// Structure to keep track
// of amount transfer
struct money {
	u8 usernameto[50];
	u8 userpersonfrom[50];
	long int money1;
};

struct userpass {
	u8 password[50];
};

// Driver Code
int main()
{ 
	int i, a, b, choice;
	int passwordlength;

	printf("1.... CREATE A BANK ACCOUNT\n\n");

	printf("2.... OPEN EXISTING ACCOUNT..\n\n");
	printf("3.... EXIT\n\n");

	printf("ENTER YOUR CHOICE..\n\n");

	scanf("%d", &choice);

	switch (choice) {
	case 1:
		system("cls");
		printf("\n\n USERNAME 50 u8ACTERS MAX!!");
		printf("\n\n PASSWORD 50 u8ACTERS MAX!!");
		account();
		break;

	case 2:
		open_existing();
		break;

	case 3:
		exit(0);
		break;

		getch();
	}
}

// Function to create accounts
// of users
void account(void)
{
	u8 password[20];
	int passwordlength, i, seek = 0;
	u8 ch;
	FILE *fp, *fu;
	struct pass u1;
	struct userpass p1;
    u8 *filename;
	struct userpass u2;
    //u8 filename[20];
	// Opening file to
	// write data of a user
	printf("Enter user Name \n");
	scanf("%s",filename);
	filename=strcat(filename,".txt");
	//filename=strcat(filename,".csv");
	
	//fp = fopen("username.txt", "ab");
	fp=fopen(filename,"w+");

	// Inputs
	system("cls");
	printf("\n\n!!!!!CREATE ACCOUNT!!!!!");

	printf("\n\nFIRST NAME..");
	scanf("%s", &u1.first_name);

	printf("\n\n\nMiDDLE NAME..");
	scanf("%s", &u1.middle_name);

	printf("\n\nLAST NAME..");
	scanf("%s", &u1.last_name);
	//check the aid is 14 digits
	int count=0;
    while(count<14){
	count=0;
    printf("\n\nNationalID..");
	scanf("%lld", &u1.national_id);
	  do {
    u1.national_id /= 10;
    ++count;
	} while (u1.national_id != 0);}

	//printf("Number of digits: %d", count);}
  

	
	printf("\n\nAccountID..");
	scanf("%s", &u1.card_id);
	printf("\n\nADDRESS..");
	scanf("%s", &u1.address);

	printf("\n\nACCOUNT TYPE");
	scanf("%s", &u1.typeaccount);

	printf("\n\nDATE OF BIRTH..");
	printf("\nDATE-");
	scanf("%d", &u1.date);
	printf("\nMONTH-");
	scanf("%d", &u1.month);
	printf("\nYEAR-");
	scanf("%d", &u1.year);
	if(2022-u1.year<21)
	{
		printf("Less than the 21 years need Guardian\n ");
		printf("Enter Guardian name\n ");
		scanf("%s",&u1.Guardian_name);
    printf("Enter Guardian ID\n ");
	scanf("%lld",&u1.Guardian_ID);}




	printf("\n\nPHONE NUMBER");
	scanf("%s", u1.pnumber);

	printf("\n\nUSERNAME.. ");
	scanf("%s", &u1.username);

	printf("\n\nPASSWORD..");

	// Taking password in the form of
	// stars
	for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}
		else
			break;
	}
	printf("\n\namount.. ");
	scanf("%lld", &u1.balance);

	// Writing to the file
	fwrite(&u1, sizeof(u1),
		1, fp);

	// Closing file
	fclose(fp);

	// Calling another function
	// after successful creation
	// of account
	//accountcreated();
}

// Successful account creation

// Login function 
void open_existing(void)
{
	u8 password[20];
	int passwordlength, i, seek = 0;
	u8 ch;
	FILE *fp, *fu;
	struct pass u1;

   // u8 filename3[20];
system("cls");

	u8 username[50];
	u8 national_id[15];

    printf("Enter user Name \n");
	scanf("%s",filename3);
	//filename3=strcat(filename3,".txt");
	//filename=strcat(filename,".csv");
	
	//fp = fopen("username.txt", "ab");
	fp=fopen(filename3,"rb");
	// Opening file of
	// user data
	//fp = fopen("username.txt",
			//"rb");

	if (fp == NULL) {
		printf("ERROR IN OPENING FILE");
	}
	printf(" ACCOUNT LOGIN ");
	printf("***********************************************"
		"********************************\n\n");
	printf("==== LOG IN ====");

	// Take input
	//printf("USERNAME.. ");
	//scanf("%s", &username);

	// Input the password
	
     display(username);
	// Checking if username
	// exists in the file or not
	/*while (fread(&u1, sizeof(u1),
				1, fp)) {
		if (strcmp(username,
				u1.card_id)
			== 0) {
			loginsu();
			display(username);
		}
	}*/

	// Closing the file
	fclose(fp);
}

// Redirect after
// successful login
void loginsu(void)
{
	int i;
	FILE* fp;
	struct pass u1;
	system("cls");
	printf("Fetching account details.....\n");
	for (i = 0; i < 20000; i++) {
		i++;
		i--;
	}


	printf("LOGIN SUCCESSFUL....");
	
	printf("Press enter to continue");

	getch();
}

// Display function to show the
// data of the user on screen
void display(u8 username1[])
{
	system("cls");
	FILE* fp;
	int choice, i;
	u8 *file;
	//u8 *filename;
	struct userpass u2;
	struct pass u1;
	fp=fopen(filename3,"rb");
	if (fp == NULL) {
		printf("error in opening file");
	}

	while (fread(&u1, sizeof(u1),
				1, fp)) {
			printf("WELCOME, %s %s",
				u1.first_name, u1.last_name);
			
			printf("\n\n..........................");
			printf("\n\n==== YOUR ACCOUNT INFO ====");
			printf("\n\nNAME..%s %s", u1.first_name,
				u1.last_name);
			printf("\n\nFATHER's NAME..%s %s",
				u1.middle_name,
				u1.last_name);
			printf("\n\nNational ID.%ld",
				u1.national_id);
			printf("\n\nCARD NUMBER..%s",
				u1.card_id);
			printf("\n\n MOBILE NUMBER..%s",
				u1.pnumber);
		
			printf("\n\nDATE OF BIRTH.. %d-%d-%d",
				u1.date, u1.month, u1.year);
			
			printf("\n\n ADDRESS..%s", u1.address);

			printf("\n\n ACCOUNT TYPE..%s",
				u1.typeaccount);
			printf("\n\n money..%lld",
				u1.balance);
			fclose(fp);
		
	}

	fclose(fp);

	// Menu to perform different
	// actions by user
	printf(" \n\n         MENU");
	
	printf("\n\n*********************************************");
	
	printf(" \n\n/1....CHECK BALANCE");
	
	printf(" \n\n 2....TRANSFER MONEY");
	
	printf("\n\n  3....LOG OUT\n\n");
	printf(" \n\n 4....EXIT\n\n");

	printf("\n\n  ENTER YOUR CHOICES..");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		checkbalance(username1);
		break;

	case 2:
		transfermoney();
		break;

	case 3:
		Change_status();
		
		break;

	case 4:
		exit(0);
		break;
	}
}

// Function to transfer
// money from one user to
// another
void transfermoney(void)
{
	int i, j;
	FILE *fm, *fp;
	struct pass u1;
	struct money m1;
	int amount;
	u8 filename4[20];
	system("cls");

	// Opening file in read mode to
	// read user's username
	printf("Enter user Name You WANT to TRASFER FROM \n");
	scanf("%s",filename4);
	//filename=strcat(filename4,".txt");
	fp = fopen(filename4, "rb");
	//fm=fopen(filename4, "w+");
	printf("DONE");

	if (fp == NULL) {
		printf("error in opening file");
	}

	while (fread(&u1, sizeof(u1),
				1, fp)) {

			
			printf("\n\n==== ACCOUNT INFO ====");
			printf("\n\n***************************");

			printf("\n\nACCOUNT BALANCE..%lld",
				u1.balance);
			printf("\n\n ENTER THE AMOUNT YOU WANT TO TRASFER");
			 scanf("%d",&amount);
			 u1.balance=u1.balance-amount;
			 printf("");
			  
		      //fwrite(&u1.balance, sizeof(u1),
		     // 1, fp);
			  fclose(fp);
				printf("DONE\n");}
		
            fm=fopen(filename4, "w+");			
            fwrite(&u1, sizeof(u1),
		1, fm);
		fclose(fm);

	// Creating a another file
	// to write amount along with
	// username to which amount
	// is going to be transferred
	//fm = fopen("mon.txt", "ab");

	/*gotoxy(33, 4);
	printf("---- TRANSFER MONEY ----");
	gotoxy(33, 5);
	printf("========================");

	gotoxy(33, 11);
	printf("FROM (your username).. ");
	scanf("%s", &usernamet);

	gotoxy(33, 13);
	printf(" TO (username of person)..");
	scanf("%s", &usernamep);

	// Checking for username if it
	// is present in file or not
	while (fread(&u1, sizeof(u1),
				1, fp))

	{
		if (strcmp(usernamep,
				u1.username)
			== 0) {
			strcpy(m1.usernameto,
				u1.username);
			strcpy(m1.userpersonfrom,
				usernamet);
		}
		printf("%d",u1.balance);
	}
	gotoxy(33, 16);

	// Taking amount input
	printf("ENTER THE AMOUNT TO BE TRANSFERRED..");
	scanf("%d", &m1.money1);

	// Writing to the file
	fwrite(&m1, sizeof(m1),
		1, fm);

	gotoxy(0, 26);
	printf(
		"--------------------------------------------------"
		"--------------------------------------------");

	gotoxy(0, 28);
	printf(
		"--------------------------------------------------"
		"--------------------------------------------");

	gotoxy(0, 29);
	printf("transferring amount, Please wait..");

	gotoxy(10, 27);
	for (i = 0; i < 70; i++) {
		for (j = 0; j < 1200000; j++) {
			j++;
			j--;
		}
		printf("*");
	}

	gotoxy(33, 40);
	printf("AMOUNT SUCCESSFULLY TRANSFERRED....");
	getch();

	// Close the files
	fclose(fp);
	fclose(fm);

	// Function to return
	// to the home screen
	display(usernamet);
}}
*/
}
// Function to check balance
// in users account
void checkbalance(u8 username2[])
{
	system("cls");
	FILE* fb ;
	FILE* fm ;
	struct money m1;
	u8 ch;
	int i = 1, summoney = 0;

	// Opening amount file record
	fb = fopen(filename3, "rb");


	
	printf("/n/n==== BALANCE DASHBOARD ====");
	
	printf("***************************");
	printf("S no.");
	printf("TRANSACTION ID");
	
	printf("AMOUNT");

	// Reading username to
	// fetch the correct record
	while (fread(&m1, sizeof(m1),
				1, fm)) {
		if (strcmp(username2,
				m1.usernameto)
			== 0) {
			
			printf("%d", i);
			i++;
		
			printf("%s", m1.userpersonfrom);

			printf("%d", m1.money1);
			// Adding and
			// finding total money
			summoney = summoney + m1.money1;
		}
	}

	
	printf("TOTAL AMOUNT");


	printf("%d", summoney);

	getch();

	// Closing file after
	// reading it
	fclose(fm);
	display(username2);
}

// Logout function to bring
// user to the login screen
void logout(void)
{
	int i, j;
	system("cls");
	printf("please wait, logging out");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 25000000; j++) {
			i++;
			i--;
		}
		printf(".");
	}


	printf("Sign out successfully..\n");


	printf("press any key to continue..");

	getch();
}
void Change_status(void)
{
	system("cls");
	FILE* fp;
	FILE* fm;
	struct pass u1;
	// Opening file to change status
	fp=fopen(filename3,"rb");
	
	int choice, i;

	if (fp == NULL) {
		printf("error in opening file");
	}

	while (fread(&u1, sizeof(u1),
				1, fp)) {

			
			printf("==== ACCOUNT INFO ====");
			printf("***************************");

			printf("ACCOUNT STATUS..%s",
				u1.typeaccount);
			fclose(fp);
            printf("DO YOU WANT TO CHANGE STATUS\n");
			printf("1 Yes\n");
			printf("2 NO\n");
			printf("Enter your choise\n");
			scanf("%d", &choice);

	switch (choice) {
	case 1:
	   fm=fopen(filename3, "w+");
		printf("ENTER THE NEW STATUS\n");
		  
	    scanf("%s", &u1.typeaccount);
		printf("%s",u1.typeaccount);
            
	// Closing file
	    
		printf("DONE\n");
       fwrite(&u1, sizeof(u1),
		1, fm);
		fclose(fm);
		break;

	case 2:
		exit(0);
		break;
	}
		
	}


}
