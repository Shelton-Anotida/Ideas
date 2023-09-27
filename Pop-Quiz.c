#include <stdio.h>

int main() {
    int age;
   
    int siblings;
    printf("Welcome to the Brain-friendly Pop Quiz :)\n");
    printf("Rules:\n\n* No Cheating\n* Answer All questions\n* Reach the end :)\n\n");
   
    printf("Before we start answer these questions\n");
   
    printf("What is your age?\n");
    scanf("%d", &age);
   
    if(age >= 10 && age <= 16)
    printf("Go on:)\n");
   
    else
    printf("Not Accepted\n");
   
    printf("How many siblings do you have?\n");
    scanf("%d", &siblings);
   
    if(siblings >= 0 && siblings <= 20)
    printf("That's All:)\n");
   
    else
    printf("Invalid");
    
    printf("Lets Begin\n\n\nGood Luck\n\n");

    int thirty;
    printf("What is 5 * 7?\n\n");
    scanf("%d", &thirty);
    
    if(thirty >= 35 && thirty <= 35)
    printf("Super\n\n");
   
    else
    printf("Incorrect\n\n");
    
    int twentyone;
    
    printf("What is 7 * 3?\n\n");
    scanf("%d", &twentyone);
    
    if(twentyone >= 21 && twentyone <= 21)
    printf("You are a star!\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int hundred;
    
    printf("What is 70 + 30?\n\n");
    scanf("%d", &hundred);
    
    if(hundred >= 100 && hundred <= 100)
    printf("Brillant!\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int seventeen;
    
    printf("What is 12 + 5\n\n");
    scanf("%d", &seventeen);
    
    if(seventeen >= 17 && seventeen <= 17)
    printf("You can do it\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int threehundred;
    
    printf("What is 100 + 255?\n\n");
    scanf("%d", &threehundred);
    
    if(threehundred >= 355 && threehundred <= 355)
    printf("Almost There\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int eight;
    
    printf("What is 56 / 7?\n\n");
    scanf("%d", &eight);
    
    if(eight >= 8 && eight <= 8)
    printf("Correct\n\n");
    
    else
    printf("Incorrect\n\n");
    
    printf("The End\nThanks for participating in the Quiz\nShelton Chawira");
    
    return 0;
}
