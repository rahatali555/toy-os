# include<stdio.h>

int main(){
char name [60];
int age;
double gpa;
printf("what is your name: \n");
scanf("%s",name);
printf("what is your age: \n");
scanf("%d",&age);
printf("what is your gpa: \n");
scanf("%lf", &gpa);
printf("your name is %s and your age is%d and your gpa is%lf",name,age,gpa);
return 0;
}
