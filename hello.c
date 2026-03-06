# include<stdio.h>

int main (){
    char name[50];
    int age;
    printf("whats you name: \n");
    scanf("%s", name);
    printf("whats your age: \n");
    scanf("%d", &age);
    printf("my name is %s and i am %d years old", name,age);
    return 0;

}
