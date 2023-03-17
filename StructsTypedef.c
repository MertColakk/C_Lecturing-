#include <stdio.h>
#include <string.h>

struct StudentInformations{
    char name[20];
    char surname[30];
    int number;
    float note;
}; //Struct veri tipi tanımlanır.

typedef struct StudentInformations student; //Artık bilgi gönderirken uzun bir şekilde struct die belirtmeme gerek kalmadı.

void showInfo(student *studentPtr);
void addInfo(student *studentPtr);
int main()
{
    student student1; //Oluşturma işleminde uzun tanımdan kurtulmuş olduk

    addInfo(&student1);
    showInfo(&student1);

    return 0;
}
void addInfo(student *studentPtr)
{
    puts("Please enter the student's name: ");
    fgets(studentPtr -> name,20,stdin);
    puts("Please enter the student's surname: ");
    fgets(studentPtr -> surname,20,stdin);
    puts("Please enter the student's number: ");
    scanf("%d",&studentPtr->number);
    puts("Please enter the student's number: ");
    scanf("%f",&studentPtr->note);
}

void showInfo(student *studentPtr)
{
    printf("Student's name: %s",(*studentPtr).name);
    printf("Student's surname: %s",(*studentPtr).surname);
    printf("Student's number: %d",(*studentPtr).number);
    printf("Student's note: %.2f",(*studentPtr).note);
}
