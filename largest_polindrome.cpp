#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
   char str[500];
   printf("enter string: ");
   gets(str);
   int i, k, l, j, m =0, in = -1, check = 0, c = 0;
   for(i=0; i<strlen(str); i++) {
      m = 0;
      k = i;
      j = i+1;
      while(str[j]!=' ' && str[j]!='\0'){
         j++;
      }
      l = j-1;
      if(str[k]!=' ' && str[k]!='\0') {
         while(k<=l) {
            if (str[k]==str[l]) {
               m++;
               if(c<=m) {
                  in = i;
                  c = m;
               }
            } else {
               m = 0;
               c = -1;
               break;
            }
            k++;
            l--;
         }
      }
      i = j;
   }
   printf("your largest polindrome is:  ");
   for (i = in; i!=-1 && str[i]!=' ' && str[i]!='\0'; i++) {
      printf("%c", str[i]);
   }
   return 0;
}
