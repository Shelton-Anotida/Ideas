#include <stdio.h>

int main() {
    int age;
   
    int siblings;
    printf("Welcome to the Brain-friendly Pop Quiz :)\n");
    printf("Rules:\n\n* No Cheating\n* Answer All questions\n* Reach the end :)\n\n");
   
    printf("Before we start answer these questions\n");
   
    printf("What is your age?\n");
    scanf("%d", &age);
   
    if(age >= 20 && age <= 50)
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

    int onehundred;
    printf("What is 38 * 5?\n\n");
    scanf("%d", &onehundred);
    
    if(onehundred >= 190 && onehundred <= 190)
    printf("Super\n\n");
   
    else
    printf("Incorrect\n\n");
    
    int threehundred;
    
    printf("What is 45 * 8?\n\n");
    scanf("%d", &threehundred);
    
    if(threehundred >= 360 && threehundred <= 360)
    printf("You are a star!\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int thousand;
    
    printf("What is 567 + 768?\n\n");
    scanf("%d", &thousand);
    
    if(thousand >=  1,335 && thousand <=  1,335)
    printf("Brillant!\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int sixthousand;
    
    printf("What is 46532 + 17865\n\n");
    scanf("%d", &sixthousand);
    
    if(sixthousand >= 64497 && sixthousand <= 64497)
    printf("You can do it\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int threethousand;
    
    printf("What is 453,278 - 65,908?\n\n");
    scanf("%d", &threethousand);
    
    if(threethousand >= 387,370 && threethousand <= 387,370)
    printf("Almost There\n\n");
    
    else
    printf("Incorrect\n\n");
    
    int threethou2;
    
    printf("What is 6,778 ÷ 2?\n\n");
    scanf("%d", &threethou2);
    
    if(threethou2 >= 3,389 && threethou2 <= 3,389)
    printf("Correct\n\n");
    
    else
    printf("Incorrect\n\n");
    
    printf("The End\nThanks for participating in the Quiz\nShelton Chawira");
    
    return 0;
}
