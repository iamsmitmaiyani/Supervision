
#include<stdio.h>

main() 
{
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    FILE *even_file = fopen("even_file.txt", "w");
    FILE *odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL) 
	{
        printf("Error opening files for writing.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(even_file, "%d", i);
            if (i != end) fprintf(even_file, ", ");
        } 
		else 
		{
            fprintf(odd_file, "%d", i);
            if (i != end - 1) fprintf(odd_file, ", ");
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers from even_file.txt: ");
    for (int i = start; i <= end; i += 2) {
        printf("%d", i);
        if (i != end) printf(", ");
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt: ");
    for (int i = start + 1; i <= end; i += 2) {
        printf("%d", i);
        if (i != end) printf(", ");
    }
    printf("\n");

}
