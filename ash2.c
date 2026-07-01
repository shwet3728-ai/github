#include <stdio.h>
typedef struct {
    char name[50];
    int age;
    int gpa;
}Student;
int main(){
    Student s={"Ashish",20,4};
    Student a={"Koushik",18,4};
    printf("%s\n",a.name);
    printf("%d",a.gpa);
}