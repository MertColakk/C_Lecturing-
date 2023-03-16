#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    char surname[30];
    int number;
    float note;
}; //Struct veri tipi tanımlanır.

int main()
{
    /*
    Struct Kullanımının amacı: Var olan int,float,char gibi veri tiplerini birleştirerek kendi veri tiplerimi oluşturmamıza imkan sağlar.
    */

    struct Student student1={"Mert","Colak",45415,85.9}; //Struct ile değişken oluşturma
    printf("Student's name: %s\n",student1.name); // "." operatörü ile erişim sağlanır
    printf("Student's surname: %s\n",student1.surname);
    printf("Student's number: %d\n",student1.number);
    printf("Student's note: %.2f\n",student1.note);

    //-------------------------------------------------------------------------------------------

    //Eğer atamalar sonradan yapılacaksa
    printf("Please enter Student 2's name: ");
    struct Student student2;
    char student2Name[20];
    fgets(student2Name,20,stdin);
    strcpy(student2.name,student2Name); //İçeri strcpy fonksiyonu ile kopyalanır.

    printf("Please enter Student 2's surname: ");
    char student2Surname[20];
    fgets(student2Surname,20,stdin);
    strcpy(student2.surname,student2Surname);

    printf("Please enter Student 2's school number: ");
    int student2Number;
    scanf("%d",&student2Number);
    student2.number = student2Number;
    //Stringlerdeki gibi sonradan kopyalama durumu yok scanf kullanılır

    printf("Please enter Student 2's note: ");
    float student2Note;
    scanf("%f",&student2Note);
    student2.note = student2Note;

    printf("Student2's name: %s\n",student2.name);
    printf("Student2's surname: %s\n",student2.surname);
    printf("Student2's number: %d\n",student2.number);
    printf("Student2's note: %.2f\n",student2.note);
    return 0;
}
