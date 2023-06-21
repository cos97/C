#include <stdio.h>

int main()
{
         long nc = 0;
         int c;

         while ((c = getchar()) != '\n')
         {
            if (c != ' ')
                ++nc;
         }

         printf("%ld\n", nc);

         return 0;
}

