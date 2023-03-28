#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 if success
 */

int main(void)
{
    int i;
    char password[100];

    srand(time(NULL));
    for(i = 0; i < 12; i++)
    {
        switch(rand()%4)
        {
            case 0:
                password[i] = 'A' + rand()%26;
                break;
            case 1:
                password[i] = 'a' + rand()%26;
                break;
            case 2:
                password[i] = '0' + rand()%10;
                break;
            case 3:
                password[i] = '!' + rand()%15;
                break;
        }
    }
    printf("%s", password);
    return (0);
}
