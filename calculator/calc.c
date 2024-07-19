#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter the score out of 100: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        grade = (score >= 90) ? 'A' :
                (score >= 80) ? 'B' :
                (score >= 70) ? 'C' :
                (score >= 60) ? 'D' : 'F';

        printf("The grade for the score %d is: %c\n", score, grade);

        switch (grade) {
            case 'A':
                printf("Excellent work!\n");
                break;
            case 'B':
                printf("Well done\n");
                break;
            case 'C':
                printf("Good job\n");
                break;
            case 'D':
                printf("You passed, but you could do better\n");
                break;
            case 'F':
                printf("Sorry, you failed\n");
                break;
            default:
                printf("Invalid grade\n");
                break;
        }

        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
            printf("Congratulations! You are eligible for the next level.\n");
        } else if (grade == 'F') {
            printf("Please try again next time.\n");
        }
    } else {
        printf("Please enter a valid score between 0 and 100.\n");
    }

    return 0;
}



