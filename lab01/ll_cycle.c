#include <stddef.h>
#include "ll_cycle.h"

/**
 * if has cycle return 1 else return 0.
 */
int ll_has_cycle(node *head) {
    /* your code here */
    if (head == NULL) 
    {
        return 0;
    }
    node *tortoise = head, *hare = head;
    while (hare != NULL && hare->next != NULL)
    {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if (hare == tortoise)
        {
            return 1; // has cycle
        }
        
    }
    
    return 0;
}