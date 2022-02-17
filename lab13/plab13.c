#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 40

typedef struct student STUDENT;
typedef struct student
{
  char *nm;
  int count;
  int length;
  STUDENT *next;
}STUDENT;

STUDENT * addName(STUDENT * list, char *name);
void printUniqueNames(STUDENT *list);
int findMostFrequent(STUDENT*list);
STUDENT *deleteSingle(STUDENT *list, char*name);
STUDENT * addSortOrder(STUDENT *list, char *name);

int main()
{
  int nos; STUDENT *list= NULL;
  scanf("%d\n", &nos);
  char name[40]= {0};
  for(int i =0; i<nos; i++)
  {
    scanf("%s\n", name);
    list = addSortOrder(list, name);
  }
  printUniqueNames(list);
  findMostFrequent(list);
  
  return 0;
}

STUDENT * addName(STUDENT * list, char *name)
{
  STUDENT *oper = list; 
  while(oper != NULL){
    if(!strcmp(oper->nm, name))
    {
      (oper->count)++;
      return list;
    } 
    oper = oper->next;
  }
  STUDENT *new = malloc(sizeof(STUDENT));
  new->length = strlen(name);
  new->nm = calloc((new->length)+1,sizeof(char));
  new->count = 1;
  new->next = NULL;
  if (list == NULL)
  {
    list = new; 
    return list;
  }
  oper = list;
  while(oper->next != NULL)
  {
    oper = oper->next;
  }
  oper->next = new;
  return list;
}

void printUniqueNames(STUDENT *list)
{
  while(list != NULL)
  {
    printf("%-14s %2d\n", list->nm, list->count);
    list = list->next;
  }
  return;
}

int findMostFrequent(STUDENT*list)
{
  int max = 1;
  STUDENT *max_n;
  while(list != NULL)
  {
    if((list->count)>max)
    {
      max = list->count;
      max_n = list;
    }
    list = list->next;
  }
  puts(max_n->nm);
  return max;
}

STUDENT *deleteSingle(STUDENT *list, char*name)
{
  STUDENT * temp = list->next;
  STUDENT * prev=list;
  if(list == NULL) return list;
  if(!strcmp(list->nm, name))
  {
    if(list->count == 1){
      list = temp;
      free(prev);
      return list;
    }
    else
    {
      (list->count)--;
      return list;
    }
  }
  while(temp!=NULL)
  {
    if(!strcmp((temp->nm), name))
    {
      if(temp->count==1)
      {
	prev->next = temp->next;
        free(temp);
        return list;
      }
      else 
      {
	(temp->count)--;
	return list;
      }
    }
  prev = prev->next;
  temp = prev->next;
  }
  return list;
}

STUDENT * addSortOrder(STUDENT *list, char *name)
{
  STUDENT *oper = list; 
  while(oper != NULL){
    if(!strcmp(oper->nm, name))
    {
      (oper->count)++;
      return list;
    } 
    oper = oper->next;
  }
  STUDENT *new = malloc(sizeof(STUDENT));
  new->length = strlen(name);
  new->nm = calloc(new->length,sizeof(char));
  strcpy(new->nm, name);
  new->count = 1;
  new->next = NULL;
  if (list == NULL)
  {
    list = new; 
    return list;
  }
  STUDENT *prev = list;
  if(strcmp(list->nm, name)>0)
  {
    new->next = prev;
    list = new;
    return list;
  }
  oper = list->next;
  while(oper!= NULL && strcmp(oper->nm, name)<0)
  {
   prev = prev->next;
   oper = prev->next;
  } 
  prev->next = new;
  new->next = oper;
  return list;
}
