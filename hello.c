# include<stdio.h>

int main(){
char name [60];
int age;
double gpa;
char grade;
printf("what is your name: \n");
fgets(name,60,stdin);
printf("what is your age: \n");
scanf("%d",&age);
printf("what is your gpa: \n");
scanf("%lf", &gpa);
printf("what is your grade: \n");
scanf(" %c", &grade);
printf("your name is %s and your age is %d and your gpa is %lf and your grade is %c" ,name,age,gpa,grade);
return 0;
}
