#include <cs50.h>
#include <stdio.h>

const int N = 3;
int main (void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int ("Scores: ");
    }
    printf ("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}
