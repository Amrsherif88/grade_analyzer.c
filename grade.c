#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int scores[] = {73, 41, 96, 58, 82, 17, 65, 29, 91, 54, 38, 77, 12, 84, 47, 69, 33, 100, 61, 25};
    int passed = 0;
    int failed = 0;
    int total = 0;
    int gradeA = 0;
    int gradeB = 0;
    int gradeC = 0;
    int gradeD = 0;
    int gradeF = 0;
    int highest = scores[0];
    int lowest = scores[0];
    for (int i = 0; i < 20; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (scores[i] > 90 && scores[i] <= 100)
        {
            gradeA++;
        }
        else if (scores[i] > 80 && scores[i] <= 90)
        {
            gradeB++;
        }
        else if (scores[i] > 70 && scores[i] <= 80)
        {
            gradeC++;
        }
        else if (scores[i] >= 50 && scores[i] <= 70)
        {
            gradeD++;
        }
        else
        {
            gradeF++;
        }

        total += scores[i];
        if (scores[i] >= 50)
        {
             passed++;
        }
        else
        {
            failed++;
        }
    }

    printf("Total passed: %i\n", passed);
    printf("Total failed: %i\n", failed);
    printf("average degree: %.2f\n", (float)total / 20);
    printf("Grade A: %i\n", gradeA);
    printf("Grade B: %i\n", gradeB);
    printf("Grade C: %i\n", gradeC);
    printf("Grade D: %i\n", gradeD);
    printf("Grade F: %i\n", gradeF);
    printf("Highest score: %i\n", highest);
    printf("Lowest score: %i\n", lowest);
}
