#include <stdio.h>
#include <string.h>
int main()
{
    int L, N, i, j, c = 0, chain = 0;
    scanf("%d", &L);
    char str1[L + 1], str2[L + 1], tmp[L + 1], result[L + 1];
    strcpy(result, "");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("\n%s", tmp);
        if (i == 0)
        {
            strcpy(str1, tmp);
        }
        else
        {
            strcpy(str2, tmp);
            c = 0;
            for (j = 0; (j <= L) && (chain == 0); j++)
            {

                if (str1[j] != str2[j])
                {
                    c++;
                    if (c > 2)
                    {
                        chain++;
                        strcpy(result, str1);
                    }
                }
            }
            strcpy(str1, str2);
        }
    }
    if (chain == 0)
    {
        printf("%s",str2);
    }
    printf("%s", result);
}