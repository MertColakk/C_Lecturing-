#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    char surname[30];
    int number;
    float note;
};

int main()
{
   struct Student student={"Mert","Colak",123124,89.4}; //Veriable tanımlanması
   struct Student *studentPtr; //Pointerının tanımlanması
   studentPtr = &student; //StudentPtr student'ı tutuyor.

   //Değerlerin yazdırılması
   printf("Student's Name: %s\n",(*studentPtr).name);
   printf("Student's Surname: %s\n",(*studentPtr).surname);
   printf("Student's Number: %d\n",(*studentPtr).number);
   printf("Student's Note: %.2f\n",(*studentPtr).note);

   struct Student student2; //Degeri Bos
   struct Student *studentPtr2;
   studentPtr2 = &student2;

   //Pointerlar ile değer değiştirme işlemi
   strcpy((*studentPtr2).name,"Muharrem"); //Ad değişimi
   strcpy((*studentPtr2).surname,"Cakar"); //Soyad değişimi
   (*studentPtr2).number = 1465;
   (*studentPtr2).note = 99.1;

   //Değişikliğin yazdırılması
   printf("Student's New Name: %s\n",(*studentPtr2).name);
   printf("Student's New Surname: %s\n",(*studentPtr2).surname);
   printf("Student's New Number: %d\n",(*studentPtr2).number);
   printf("Student's New Note: %.2f\n",(*studentPtr2).note);

   //Görüldüğü üzere pointerlar ile içi boş olan struct dolduruldu.

   //Farklı bir kullanım
   struct Student student3; //Degeri Bos
   struct Student *studentPtr3;
   studentPtr3 = &student3;

   strcpy(studentPtr3 -> name,"Muzaffer"); //StudentPtr'ın Gösterdiği yer anlamına gelir.
   strcpy(studentPtr3 -> surname,"Gazi"); //Soyad değişimi
   studentPtr3 -> number = 1515;
   studentPtr3 -> note = 31.1;

   //Değişikliğin yazdırılması
   printf("Student's New Name: %s\n",studentPtr3 -> name);
   printf("Student's New Surname: %s\n",studentPtr3 -> surname);
   printf("Student's New Number: %d\n",studentPtr3 -> number);
   printf("Student's New Note: %.2f\n",studentPtr3 -> note);

    return 0;
}
