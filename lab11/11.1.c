#include <stdio.h>
#include <string.h>
// Part a
struct student {
 char name[20];
 char id[14];
 int age;
 float cgpa;
} s1;

void changeData(struct student);
struct student getInput(void);

int main(){
//Part b
 struct student s2, s3;
// Part c
 printf("%lu\n",sizeof(s1));
// Part d
 s1 = getInput();
 s2 = getInput();
// Part e
 s3 = s1;
// Part f
 if (!(strcmp(s2.name,s3.name)) && !(strcmp(s2.id,s3.id)) && s2.age == s3.age && s2.cgpa == s3.cgpa)
  printf("s2 and s3 contain the same data\n");
 else
  printf("s2 and s3 are not the same\n"); 
// Part g
 printf("%s\n%s\n%d\n%f\n", s1.name, s1.id, s1.age, s1.cgpa);
 changeData(s1);
 printf("%s\n%s\n%d\n%f\n", s1.name, s1.id, s1.age, s1.cgpa);
// Part h
 printf("Address of s3 %p\n", &s3);
 printf("Address of s3.name %p\n", s3.name);
 printf("Address of s3.id %p\n", s3.id);
 printf("Address of s3.age %p\n", &s3.age);
 printf("Address of s3.cgpa %p\n", &s3.cgpa);
// Part i
 struct student *ps1;
 ps1 = &s1;

 return 0;
}

struct student getInput(void){
 struct student s;
 printf("Enter name ");
 scanf("%s", s.name);
 printf("Enter id: ");
 scanf("%s", s.id);
 printf("Enter age: ");
 scanf("%d", &s.age);
 printf("Enter CGPA: ");
 scanf("%f", &s.cgpa);

 return s;
}
// part g
void changeData(struct student s){
 strcpy(s.name, "Madhav");
 s.age = 20;
 s.cgpa = 7.33;
 return;
}
