#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{

    time_t timer;
    timer = time(NULL)+7200; //timer is reference I set it for two hours so seconds will be 7200

    while(3)
    {
      printf("Your remaining time is: %.2d: %.2d :%.2d", (timer-time(NULL))/3600,((timer-time(NULL))/60)%60,(timer-time(NULL))%60);
      Sleep(1000);
      system("cls");
      }


    return 0;
}
