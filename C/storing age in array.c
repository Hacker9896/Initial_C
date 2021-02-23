#include <stdio.h>
int main(void) {
    //! showArray(ages, cursors=[i])
    int ages[10];
    int i;
    scanf("%d" , &ages[0]);
    int ageMin = ages[0];
    for (i=1; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] < ageMin) {
            ageMin = ages[i];
        }
    }
    printf("The min age is %d.\n", ageMin);
    printf("Age differences with the youngest person:\n");
    for(i=0;i<10;i++){
        printf("%d:%d ", ages[i],ages[i] - ageMin);
    }
    return 0;
}
