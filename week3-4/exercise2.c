/*
Print the following series using for loop:
a.	Print numbers from 1 to 100 with increment of 1
b.	Print numbers from 100 to 1 with decrement of 1
c.	Print numbers from 20 to 2 in steps of -2
d.	Print sequence of numbers: 2, 5, 8, 11, 14, 17, 20
e.	Print sequence of numbers: 99, 88, 77, 66, 55, 44, 33, 22, 11, 0
*/

/* _____ PART A _____*/
#include <stdio.h>
int main(){
    for (int i = 1; i <= 100; i++){
        printf("%d ", i);
    }
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}

/* _____ PART B _____*/
#include <stdio.h>
int main(){
    //Print number from 100 to 1
    for (int i = 100; i >= 1; i--){
        printf("%d ", i);
    }
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}

/* _____ PART C _____*/
#include <stdio.h>
int main(){
    //Print number from 20 to 2 in steps of 2
    for (int i = 20; i >= 2; i -= 2){
        printf("%d ", i);
    }
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}

/* _____ PART D _____*/
#include <stdio.h>
int main(){
    //Print number in sequence 2,5,8,11,14,17,20
    for (int i = 2; i <= 20; i+= 3){
        printf("%d ", i);
    }
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}

/* _____ PART E _____*/
#include <stdio.h>
int main(){
    //Print number in sequence 99,88 ... 0
    for (int i = 99; i >= 0; i -= 11){
        printf("%d ", i);
    }
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}
