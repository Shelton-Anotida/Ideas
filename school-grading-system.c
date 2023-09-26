#include <stdio.h>

/**
 * main - The main function is to solve the scores
 * Description - This is a grading system to give you
 * you scores on the exams or tests
 * Return: 0 we return zero as success without errors
 */

int main()
{
        /* Declear the Variable */
        int score;

        /* Asks What Score they have gotten */
        printf("What was your score\n");

        /* Accepts user's input */
        scanf("%d", &score);

        /**
         * A condition to check if value is greater or equal to 90
         * And a condition to check if it is less than 100
         */
        if(score >= 90 && score <= 100)
                printf("A*\n");
        /**
         * A condition to check if value is greater or equal to 80
         * And a condition to check if it is less than 89
         */

        else if(score >= 80 && score <= 89)
                printf("A\n");
        /**
         * A condition to check if value is greater or equal to 70
         * And a condition to check if it is less than 79
         */

        else if(score >= 70 && score <= 79)
                printf("B\n");
        /**
         * A condition to check if value is greater or equal to 65
         * And a condition to check if it is less than 69
         */

        else if(score >= 65 && score <= 69)
                printf("C\n");
        /**
         * A condition to check if value is greater or equal to 60
         * And a condition to check if it is less than 64
         */

        else if(score >= 60 && score <= 64)
                printf("D\n");
        /**
         * A condition to check if value is greater or equal to 50
         * And a condition to check if it is less than 59
         */

        else if(score >= 50 && score <= 59)
                printf("E\n");
        /**
         * A condition to check if value is greater or equal to 0
         * And a condition to check if it is less than 50
         */

        else if(score >= 0 && score <= 50)
                printf("F\n");
        /**
         * A condition to check if value is a negative it will print
         * You have entered an unsupported score
         */

        else
                printf("Your have entered an unsupported score\n");

        return (0);
}
