#include <string.h>
#include <stdio.h>
/*  void function that copies one string to another.
viod функція, нічого не повертає*/
void cpyStr(char *a, char *b){  // можна написати void *a, якщо треба передати різні типи даних
   int i = 0;                   // через одну змінну, не для цього випадку, звісно
   while(a[i] != 0){
       b[i] = a[i];
       i++;
   }
}


int main(void)
{
    char a[20] = "This_is_test"; 
    char b[20] = "Nothing_here";
    printf("%s\n", a);
    printf("%s\n", b);
    printf("after copy\n");
    cpyStr(a, b);
    printf("first string  is:  \" %s \" \n", a);
    printf("Copied string is:  \" %s \" \n", b);
   return 0;
}
