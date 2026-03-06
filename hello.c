# include<stdio.h>

int main(){
    char name;
    int age;
    printf("whats your name \n");
    scanf("%s" name);
    printf(" whats your age \n");
    scanf("%d" &age);
    printf("hello %s you are %d years old ",name, age);
    return 0;
}
