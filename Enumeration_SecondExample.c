#include <stdio.h>
#include <string.h>

typedef enum
{
    beginner=1,rookie,experienced,senior
}levelInTheGame;

int main()
{
    printf("Please enter your level: ");
    levelInTheGame level;
    scanf("%d",&level);
    if(level == beginner || level == rookie)
        printf("Your level is too low for this quest.You can't take it.");
    else if(level == experienced)
        printf("You can take this quest.");
    else if(level == senior)
        printf("Your level is too high for this quest.You can't take it.");
    else
        printf("Invalid level enterence.");

    return 0;
}
