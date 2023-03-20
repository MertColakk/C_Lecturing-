#include <stdio.h>
#include <string.h>

typedef union{
    int intNumber;
    float floatNumber;
    double doubleNumber;
}Number;

struct numberStruct{
    int sintNumber;
    float sfloatNumber;
    double sdoubleNumber;
};

int main()
{
    /*
    Ortaklık-Union: Enum kavramına benzer. Yukarıda gördüğümüz union typedef'inde Structs'da bir sayı oluştuğu zaman int 4byte yer ayırır. float 6byte ayırır ve double 8byte yer ayırır. Union'da kullanıma göre yer ayırır yerden tasarruf sağlar. Yani örnek için toplamda 8 byte yer ayırır 18byte değil.

    */
    Number number;
    struct numberStruct structNumber;

    printf("Union: %d\n",sizeof(number));
    printf("Struct: %d\n\n",sizeof(structNumber));
    //Görüldüğü üzere aynı olmalarına rağmen iki katı yer tutuyor. Fakat kullanılırken dikkat edilmesi gerekir.

    number.intNumber = 3;
    printf("INT: %d\n",number.intNumber);
    printf("FLOAT: %f\n",number.floatNumber);
    printf("DOUBLE: %f\n",number.doubleNumber);
    printf("\n");

    number.floatNumber = 3.31;
    printf("INT: %d\n",number.intNumber);
    printf("FLOAT: %f\n",number.floatNumber);
    printf("DOUBLE: %f\n",number.doubleNumber);

    /*
    Çıktıdan da görüldüğü üzere int'in değeri değişti sebebi 3 değişkenin de aynı alanı kaplaması bundan kaynaklı olarak kullanılırken dikkat edilmesi gerekmekte.
    */
    return 0;
}
