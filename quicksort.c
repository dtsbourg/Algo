#include <stdio.h>

void quick_sort (int *tab, int n) {
    if(n<2) return;

    int pivot = tab[n/2];
    int *lesser = tab;
    int *greater = tab + n - 1 ;

    while (lesser <= greater)
    {
        if (*lesser < pivot)
        {
            lesser++; continue;
        }
        if (*greater > pivot)
        {
            greater--; continue;
        }

        //Precedence : suffix ++ > *
        int tmp = *lesser;
        *(lesser++) = *greater;
        *(greater--) = tmp;
    }

     quick_sort(tab,greater - tab +1);
     quick_sort(lesser, tab + n - lesser);
}

int main(void) {
    int a[]={4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int n = sizeof a / sizeof a[0];
    quick_sort(a,n);
    int i=0;
    for (i=0;i<n;i++)
    printf("%d, ", a[i]);
    return 0;

}
