#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf("Player1: %i  Player2:  %i\n",score1,score2);

    // TODO: Print the winner
    if(score1>score2){
        printf("Player 1 wins!");
    }else if(score1<score2){
        printf("Player 2 wins!");
    }else{
        printf("Tie!");
    }
}

int compute_score(string word)
{
    int score = 0;
    int test = 0;
    int i = 0;
    int charnum = 0;
    int upperchk;

    //loop through letters converting into ascii then compare to array
while(word[i]!='\0'){

    upperchk = isupper(word[i]);

    printf("uppper test: %i\n",upperchk);
     test = word[i];

    if(upperchk==0){
        test = test - 32;
    }

    if(test >=65 && test<=90){

    printf("ascii value %i\n",test);

    charnum = test-65;

    printf("ascii -65  :%i\n",charnum);

    score = score + POINTS[charnum];


    }


    printf("score sum: %i\n",score);

    i++;
}


    // TODO: Compute and return score for string
    return score;
}
