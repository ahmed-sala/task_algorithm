#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int s1,s2;
    printf("Enter The Size Of The Two Arrays:\n");
    scanf("%d",&s1);
    scanf("%d",&s2);
    int a[s1],b[s2];
    printf("Please Enter The Elements Of Array 1:\n");
    for (int i=0;i<s1;i++)
        scanf("%d",&a[i]);
    printf("Enter The Elements Of Array 2:\n");
    for (int i=0;i<s2;i++)
        scanf("%d",&b[i]);
    int c[s1+s2];
    for (int i=0;i<s1+s2;i++)
            c[i]=a[i];
    for (int i=0;i<s1+s2;i++)
            c[i+s1]=b[i];
    insertionSort(c,s1+s2);
    printf("Enter The Index Of The Element:\n");
    int d,i;
    scanf("%d",&d);
    i = c[d-1];
    printf("%d",i);
    return 0;
}
