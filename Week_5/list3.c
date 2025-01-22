#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    node * list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc (sizeof(node));
        if (n == NULL)
        {
            //todo: free any memory already malloc'd
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = list;

        //If list is empty
        if (list == NULL)
        {
            list = n;
        }

        //If list has numbers already
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                //If at end of list
                if(ptr->next == NULL)
                {
                    ptr-.next = n;
                    break;
                }
            }
        }
    }

    //time passes

    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next
        free(ptr);
        ptr = next;
    }

    return 0;
}
