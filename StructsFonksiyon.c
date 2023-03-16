#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    char surname[30];
    int number;
    float note;
}; //Struct'ın tanımlanması

void showInfos(struct Student *student1Ptr); //Fonksiyonun protatipi
void addInfos(struct Student *student1Ptr); //Fonksiyonun protatipi
void swapInfos(struct Student *student1Ptr,struct Student *student2Ptr); //Fonksiyonun protatipi
int main()
{
    struct Student student1; //Veriable tanımlanması

    //Fonksiyonun çağırılması
    addInfos(&student1);

    struct Student student2;
    addInfos(&student2);

    //Swap fonksiyonunun çağırılması
    swapInfos(&student1,&student2);

    //İki bilginin de görüntülenmesi
    showInfos(&student1);
    return 0;
}
void addInfos(struct Student *studentPtr) //Fonksiyon void olduğu için Ptr olarak gönderilip return atılması engellendi
{
    //Değerlerin alınması
    printf("Please enter student's name: ");
    fgets(studentPtr -> name,20,stdin);
    printf("Please enter student's surname: ");
    fgets(studentPtr -> surname,30,stdin);
    printf("Please enter student's number: ");
    scanf("%d",&studentPtr -> number);
    printf("Please enter student's note: ");
    scanf("%f",&studentPtr -> note);
}

void showInfos(struct Student *student1Ptr) //Fonksiyon void olduğu için Ptr olarak gönderilip return atılması engellendi
{
    //Değerlerin yazdırılması
    printf("Student's name: %s\n",(*student1Ptr).name);
    printf("Student's name: %s\n",(*student1Ptr).surname);
    printf("Student's name: %d\n",(*student1Ptr).number);
    printf("Student's name: %.2f\n",(*student1Ptr).note);
}
void swapInfos(struct Student *student1Ptr,struct Student *student2Ptr)
{
    struct Student tempPtr;

    //Geçici değişkenle değer tutuldu
    strcpy(tempPtr.name,student1Ptr -> name);
    strcpy(tempPtr.surname,student1Ptr -> surname);
    tempPtr.number = student1Ptr -> number;
    tempPtr.note = student1Ptr -> note;

    //İkincinin değeri birincinin içinde tutuldu
    strcpy(student1Ptr->name,student2Ptr->name);
    strcpy(student1Ptr->surname,student2Ptr->surname);
    student1Ptr->number = student2Ptr->number;
    student1Ptr->note = student2Ptr->note;

    //Bilgiler değiştirildi
    strcpy(student2Ptr->name,tempPtr.name);
    strcpy(student2Ptr->surname,tempPtr.surname);
    student2Ptr->number = tempPtr.number;
    student2Ptr->note = tempPtr.note;
}
