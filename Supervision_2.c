
#include<stdio.h>
//Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics,and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.

struct Student 
{
    int rollNo;
    char name[100];
    float chemMarks;
    float mathsMarks;
    float phyMarks;
};

main()
{
    int numStudents = 5;
    struct Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) 
	{
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chemMarks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].mathsMarks);
        printf("Physics Marks (out of 100): ");
        scanf("%f", &students[i].phyMarks);
    }

    printf("\nStudent Mark Sheets:\n");
    for (int i = 0; i < numStudents; ++i) 
	{
        float totalMarks = students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks;
        float percentage = (totalMarks / 300) * 100;

        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %.2f\n", students[i].chemMarks);
        printf("Mathematics Marks: %.2f\n", students[i].mathsMarks);
        printf("Physics Marks: %.2f\n", students[i].phyMarks);
        printf("Percentage: %.2f%%\n", percentage);
    }

}
