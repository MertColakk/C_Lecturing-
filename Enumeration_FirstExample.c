#include <stdio.h>
#include <string.h>

typedef enum{
    monday=1,tuesday,wednesday,thursday,friday,saturday,sunday
    // Burada monday'e 1 değerini atadığımız için tuesday otomatik olarak 1 fazlası olan 2 oldu yoksa 0-1-2 olarak devam edecekti.
}dayoftheweek; //Haftanın günleri anlamında belirttik.
int main()
{
    /*
    Enumeration kavramı, örneğin haftanın günlerini göz önüne alalım. Beş yaşında bir çocuk bugün günlerden ne diye sorarsa, haftanın 1. günü mü demek daha anlaşılır yoksa pazartesi demek mi? Tabii ki anlaşıldığı üzere pazartesi demek. Enumeration ile biz pazartesi denildiği zaman haftanın ilk günü olduğunu anlatıyoruz. Bu kavram genel olarak okunabilirliği arttırmak için kullanılıyor.
    */
    dayoftheweek days; //Değişkeni oluşturduk.
    puts("Please enter a value from 1-7 to see the day:");
    scanf("%d",&days);
    switch(days)
    {
        case monday:
            printf("Monday");
            break;
        case tuesday:
            printf("Tuesday");
            break;
        case wednesday:
            printf("Wednesday");
            break;
        case thursday:
            printf("Thursday");
            break;
        case friday:
            printf("Friday");
            break;
        case saturday:
            printf("Saturday");
            break;
        case sunday:
            printf("Sunday");
            break;
        default:
            printf("Invalid operation...");
    }

    return 0;
}
