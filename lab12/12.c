#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
char idno[16];
char name[50];
char gender;		
int age;
char res_status;
float cgpa;
char emailaddress[40];
} STUD;

void populateRecords(STUD [], int);
void generateEmailAddress(char [], char []); /* definition given below main()*/
void storeEmailAddresses(STUD [], int);
void printRecords(STUD [], int);
float calculateAvgCG(STUD [], int);
void printCount(STUD [], int, int, int);

int main()
{
  int nos, i;
  // more declarations here...
  int x, y;
  
  scanf("%d",&nos);    /* number of student records in the file */
  getchar();   /* to eat away the \n character at the end of line */
  STUD rec[nos];    /* a VLA of structures being declared */
  
  populateRecords(rec,nos);     /* get data into the array */
  storeEmailAddresses(rec,nos);    /* generate and store email addresses */
  
  printRecords(rec,nos);    /* print records in the required format */
  
  printf("The mean CGPA of students is: %.3f\n", calculateAvgCG(rec,nos));
  
  printCount(rec,1,0,nos); /* count and print student numbers gender-wise */ 
  printCount(rec,0,1, nos); /* print student numbers acc. to resi. status */
  
  // code for printing CGPAs sorted according to ID numbers goes here...
  STUD *parr[nos];   /*declaring a VLA of pointers of structs*/
  for (i = 0; i<nos; i++)
    parr[i] = &rec[i];  /*initialising the poiters to the records*/
  for (x = 0; x<nos-1; x++)
    for (y = x+1; y<nos; y++)
      if(strcmp(parr[x]->idno, parr[y]->idno)>0){ /*sorting by id*/
        STUD *temp = parr[x];
        parr[x] = parr[y];
        parr[y] = temp;
      }
  for (int z = 0; z<nos; z++) 
    if (parr[z]->cgpa) /*checking for non-zero cgpa*/
      printf("%s %.2f\n",parr[z]->idno, parr[z]->cgpa); /*printing cgpa*/      

  return 0;
}

void populateRecords(STUD arr[], int n)
{
  // write your code here...
  int i;
  for(i =0;i<n; i++){
    scanf("%[^,]", arr[i].idno);  /*storing the idno*/
    getchar();  /*eating the comma*/
    scanf("%[^,]", arr[i].name); /*storing the name*/
    getchar(); /*eating the comma*/
    arr[i].gender = getchar(); /*storing the gender*/
    getchar(); /*eating the comma*/
    scanf("%d", &arr[i].age); /*storing the age*/
    getchar(); /*eating the comma*/
    arr[i].res_status = getchar(); /*storing the residential status*/
    getchar(); /*eating the comma*/
    scanf("%f", &arr[i].cgpa); /*storing the cgpa*/
    getchar(); /*eating the \n*/
  }
  return;
}

void generateEmailAddress(char idno[], char email[])
{
  char year[5];
  int i, yr, start, len, end;
  for (i = 0; i < 4; ++i)
    year[i] = idno[i];
  year[i]='\0';	  /* year now contains the year of admission as a string */
  yr = atoi(year); /* contents of year being converted into an int */
  
  strcpy(email,"f");
  strcat(email,year);  /* email array now has fxxxx, where xxxx is the year of admission */
  
  if (yr < 2017)  /* prior to 2017 admissions */ 
    start = 9;  /* start extracting the last three digits in the ID number */
  else
    start = 8; /* start extracting the last four digits in the ID number */
  
  len = strlen(email);
  end = 11; /* extract till the last digit of the ID number */
  for (i = start; i <= end; ++i)
    email[len++] = idno[i];
  email[len] = '\0';
  strcat(email,"@pilani.bits-pilani.ac.in"); /* last part of email address */
  return;
}

void storeEmailAddresses(STUD arr[], int n)
{
  // write your code here...
  int i;
  for (i = 0; i < n; i++)
    generateEmailAddress(arr[i].idno, arr[i].emailaddress);
  return;
}

void printRecords(STUD arr[], int n)
{
  // write your code here...
  int i;
  for (i = 0; i<n; i++){
    printf("\n%s %s\n", arr[i].idno, arr[i].name);
    printf("Gender: %c\n",arr[i].gender);
    printf("Age: %d\n", arr[i].age);
    printf("Residence status: ");
    if (arr[i].res_status == 'H')
      printf("Hostel\n");
    else if (arr[i].res_status == 'D')
      printf("Day Scholar\n");
    printf("CGPA: ");
    if(arr[i].cgpa)  /*checking for non-zero cgpa*/
      printf("%.2f\n",arr[i].cgpa);
    else
      printf("Not available\n");
    printf("Email: %s\n", arr[i].emailaddress);
    printf("--------------------------------\n");
  }
  return;
}

float calculateAvgCG(STUD arr[], int n)
{
  float avg, sum = 0;
  int count=0, i;
  //write your code here...
  for (i = 0; i<n; i++)
  if(arr[i].cgpa) {
    sum += arr[i].cgpa; /*calculating sum of non-zero cgpa*/
    count++; /*calculating number of non-zero cgpa*/
  }
  avg = sum/count;
  return avg;  
}

void printCount(STUD arr[], int gndr, int resi, int n)
{
  // write your code here...
  int count=0,i;
  if (gndr){
    for (i = 0;i<n ; i++)
      if(arr[i].gender == 'M') /*counting number of male students*/
        count++;
    printf("There are %d male and %d female students.\n", count, n-count);
  }
  if (resi){
    for(i = 0,count = 0; i<n; i++)
      if(arr[i].res_status == 'H') /*counting number of hostel residents*/
        count++;
    printf("There are %d students in hostels and %d Day scholars\n", count, n-count);
  }
  return;
}
