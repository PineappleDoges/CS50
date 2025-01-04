#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Print the grade level
    int grade_level = round(index);

    if (grade_level < 1)
    {
        printf("Grade: Before Grade 1\n");
    }
    else if (grade_level > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade_level);
    }
}

int count_letters(string text)
{
    // Return the number of letters in text
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int wordCount = 0;
    int inWord = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ')
        {
            if (!inWord)
            {
                wordCount++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }
    return wordCount;
}

int count_sentences(string text)
{
    // Return the number of sentences in text
    int sentenceCount = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentenceCount++;
        }
    }
    return sentenceCount;
}
