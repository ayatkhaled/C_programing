#include<stdio.h>
#include<string.h>

// function for creating and writing in file
void create_account(){
FILE *fp;
int i, age, id, count;
char fullname[50];
int national_id;
char address[20];
char status[20];
int password;
	
// to get the id by 14 digit:
	
unsigned long long l=0;

//open the file:
fp=fopen("bank_data.csv","ab");
	
//writing the header of the file
fprintf(fp," ID,age,national id,fullname, address, status,password");
 printf("Enter user id");
 scanf("%d", &id)
  printf("Enter age");
  scanf("%d", &age);
 printf("Enter nationa id");
 scanf("%lld", &national_id);
 printf("Enter fullname");
 scanf("%s", &fullname);
 printf("Enter address");
 scanf("%s", &address);
 printf("account status ");
 scanf("%s", &status);
  printf("account password ");
 scanf("%d", &password);

 fprintf(fp,"\n%d,%d,%lld,%s,%s,%s,%d",id,age,national_id,fullname,address,status,password);
fclose(fp);

}
// function to check the accout status:

void check_existing(){
	// file pointer will be used to open/read the file
  FILE *file;

  // used to store the filename and each line from the file
  char filename[FILENAME_SIZE];
  char buffer[MAX_LINE];

  // stores the line number of the line the user wants to read from the file
  int read_line = 0;

  // prompt the user for the filename, store it into filename
  // printf("File: ");
  // scanf("%s", filename);

  // prompt the user for the line to read, store it into read_line
  printf("ID: ");
  scanf("%d", &read_line);
  read_line=read_line+1;
  // open the the file in read mode
  file = fopen("bank_data.csv", "r");

  // if the file failed to open, exit with an error message and status
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  // we'll keep reading the file so long as keep_reading is true, and we'll 
  // keep track of the current line of the file using current_line
  bool keep_reading = true;
  int current_line = 1;
  do 
  {
    // read the next line from the file, store it into buffer
    fgets(buffer, MAX_LINE, file);

    // if we've reached the end of the file, we didn't find the line
    if (feof(file))
    {
      // stop reading from the file, and tell the user the number of lines in 
      // the file as well as the line number they were trying to read as the 
      // file is not large enough
      keep_reading = false;
      printf("File %d lines.\n", current_line-1);
      printf("Couldn't find line %d.\n", read_line);
    }
    // if we've found the line the user is looking for, print it out
    else if (current_line == read_line)
    {
      keep_reading = false;
      printf("Line:\n%s", buffer);
    }

    // continue to keep track of the current line we are reading
    current_line++;

  } while (keep_reading);

  // close our access to the file
  fclose(file);
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
				
			      //exit
		}
		break;
		

	
}
}
