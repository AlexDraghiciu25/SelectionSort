#include <stdio.h>
#include <stdlib.h>

void schimb(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void Selection_Sort(int v[], int n)
{
    for (int poz = 0; poz < n; poz++)
    {
        for (int i = 0; i < 5; i++)
            printf("%d ", v[i]);
        printf("\n");

        int minim = v[poz], poz_min = poz;    //la fel de bine rula si pentru poz_min = 0;
        for (int i = poz + 1; i < n; i++)
            if (v[i] < minim)
            {
                minim = v[i];
                poz_min = i;
            }

        schimb(&v[poz], &v[poz_min]);
    }
}

int main()
{
    int v[] = {47, 23, 12, 17, 30};
    Selection_Sort(v, 5);

    return 0;

}
