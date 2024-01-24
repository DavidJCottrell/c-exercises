#include <stdio.h>

void callbackFunc(void)
{
    printf("Hello from callback function\n");
}

void actionFunc(void (*callbackFunc)(void))
{
    printf("Hello from action function\n");
    callbackFunc();
}

int main()
{
    actionFunc(callbackFunc);
}