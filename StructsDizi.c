#include <stdio.h>

struct Student{
    char name[20];
    char surname[30];
    int number;
    float note;
};

int main()
{
    //Hazır tanımlanmış hali
    struct Student students[]={{"Mert","Colak",12314,81.7},{"Muzaffer","Cakar",15581,87.4}};

    //Adlar
    printf("Student1's Name: %s\n",students[0].name);
    printf("Student2's Name: %s\n",students[1].name);

    //Soyadlar
    printf("Student1's Surname: %s\n",students[0].surname);
    printf("Student2's Surname: %s\n",students[1].surname);

    //Numaralar
    printf("Student1's Surname: %d\n",students[0].number);
    printf("Student2's Surname: %d\n",students[1].number);

    //Notlar
    printf("Student1's Note: %.2f\n",students[0].note);
    printf("Student2's Note: %.2f\n",students[1].note);


    //-----------------------------------------------------------------------------------------------

    //Kullanıcıdan veri alınacak hali
    struct Student students2[2];
    int i;

    //Kullanıcıdan veri alınması
    for(i=0;i<2;i++)
    {
        printf("Please Enter %d student's name: ",i+1);
        scanf("%s",&students2[i].name);
        printf("Please Enter %d student's surname: ",i+1);
        scanf("%s",&students2[i].surname);
        printf("Please Enter %d student's number: ",i+1);
        scanf("%d",&students2[i].number);
        printf("Please Enter %d student's note: ",i+1);
        scanf("%f",&students2[i].note);
    }

    //Verilerin yazdırılması
    for(i=0;i<2;i++)
    {
        printf("%dth Student's Name: %s\n",i+1,students2[i].name);
        printf("%dth Student's Surname: %s\n",i+1,students2[i].surname);
        printf("%dth Student's Number: %d\n",i+1,students2[i].number);
        printf("%dth Student's Note: %f\n",i+1,students2[i].note);
    }
    return 0;
}
