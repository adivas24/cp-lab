		/*	ID. No.: 2017A7PS0175P
			Name: Aditya Vasudevan
			Set (A or B): A
		*/
			
#include <stdio.h>
#include <string.h>

typedef struct record {
	char name[70];
	char idno[16];
	float compre;
	int rank;
  } STUD;

void readData(STUD a[], int max)
{
  FILE *fp;
  fp = fopen("rank_data.txt", "r");
    STUD temp;                                       // creating a temporary structure to store the input
  for (int i= 0; i<max; i++)
  {
    fscanf(fp,"%[^,]", temp.idno);
    getc(fp);						// All getcs are to eat up the , and tailing \n 
    fscanf(fp, "%[^,]", temp.name);
    getc(fp);
    fscanf(fp, "%f", &temp.compre);
    getc(fp);
    temp.rank = 0;
    a[i] = temp;					// input stored in the array
  } 
  fclose(fp);
  return;
}


void storeRanks(STUD a[], int max)
{
  int i, j;
  STUD temp;
  for(i = 0; i<max-1; i++)      			//sorting the array on the basis of compre marks using selection sort
    for(j = i+1; j<max; j++)
      if(a[i].compre < a[j].compre)
      {
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
      }
  float prev_score = a[0].compre; 			//variable to store the score of the previous student
  int rank = 1;
  for(i = 0; i<max; i++)
  {
    if (a[i].compre != prev_score)
    {							// increase rank only if the score is different to the previous one
      rank++;
      prev_score = a[i].compre;
    } 
    a[i].rank = rank;
  }
  return;
}

void displayData(STUD a[], int max)
{
  int i;
  for (i = 0; i < max; ++i)
    printf("%18s %20s\t %.2f %d\n", a[i].idno, a[i].name, a[i].compre, a[i].rank);
  return;
}

int main()
{
  int maxelems;
  scanf("%d", &maxelems);
  STUD arr[maxelems];
  readData(arr,maxelems);	// populates the array of structures
  storeRanks(arr,maxelems);	// computes rank of each student and stores in the record
  displayData(arr,maxelems);
  
  FILE * fp;
  fp = fopen("rank_output.txt", "w"); 				// storing the array in the prescribed format in rank_output.txt
  int i;
  fprintf(fp, "\n      Id No.       Name                Compre Score(70)Rank\n\n");
  for (i = 0; i < maxelems; ++i)
    fprintf(fp, "%18s %-23s\t %.2f %d\n", arr[i].idno, arr[i].name, arr[i].compre, arr[i].rank); 
  fclose(fp);
  return 0;
}
