/*
 Develop a program to input the marks of 10 (ten) different subjects of a student through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/
int main(){
    //By Sarfara 2K23-BSCS-21
    const int SUBJECTS = 10;
    const int MAXMARKS = 100;
    float marks[10];
    float sum = 0;
    for (int i = 1; i <= 10; i++){
        printf("Enter the marks of subject (%d) upto 100: ", i);
        scanf("%f", &marks[i]);
        if(marks[i] < 0 || marks[i] > 100){
            printf("\nInvalid Number please enter number in range (0-100)!");
            return 1;
        }
        sum += marks[i];
    }
    printf("\nTotal Aggregate marks is %.2f", sum);
    printf("\nTotal Percentage is %.2f", sum / (MAXMARKS * SUBJECTS) * 100);
}