#include <stdio.h>
int main() {
    char name[50];
    float Mathematics, communication, computer;
    float total,average;
    char grade;
    printf("Enter student name");
    scanf("%49s",name);
    printf("Enter Mathematis marks:");
    scanf("%f",&mathematics);
    printf("enter computer marks:");
    scanf("%f",&computer);
    printf("Enter communication skills marks:");
    scanf("%f",&communication);
    total = mathematics + communication + computer;
    average = total / 3;
    if (average >= 70) {
        grade = 'A';
    } else if (average >= 60){
        grade = 'B';
    } else if (average >= 50){
        grade = 'C';
    } else if (average >= 40){
        grade = 'D';
    }else {
        grade = 'E';
    }
    printf("\n--- STUDENT RESULTS ---\n")
    printf("Name: %s\n", name)
    printf("Total marks: %.2f\n",total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade)
    return 0;
}
