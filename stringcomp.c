#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[] = "apple";
   char str2[] = "banana";
   char str3[] = "banana";
   char str4[] = "bananadawg";

   printf("Str1 = %s\nStr2 = %s\nStr3 = %s\nStr4 = %s\n", str1, str2, str3, str4);

   int ret = strcmp(str1, str2);
   printf("strcmp(str1, str2) returned:%d\n", ret);

   ret = strcmp(str2, str1);
   printf("strcmp(str2, str1) returned:%d\n", ret);

   ret = strcmp(str2, str3);
   printf("strcmp(str2, str3) returned:%d\n", ret);

   ret = strcmp(str2, str3);
   printf("strcmp(str2, str3) returned:%d\n", ret);

   ret = strncmp(str3, str4, 6);
   printf("strncmp(str3, str4, 6) returned:%d\n", ret);

   ret = strncmp(str3, str4, 7);
   printf("strncmp(str3, str4, 7) returned:%d\n", ret);

   return(0);
}
