#include <stdio.h>
#include <stddef.h>
/*this is the begining of the code.
 * theo
 */
struct list_t
{
    char *str;
    struct list_t *next;
};
/*continuation
 the code is coding*/

typedef struct list_t list_t;

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL) {
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%d] %s\n", count, h->str);
        }
        h = h->next;
        count++;
    }

    return count;
}

int main(void) 
{
    list_t node1 = {"Hello", NULL};
    list_t node2 = {"World", NULL};
    list_t node3 = {NULL, NULL};

    node1.next = &node2;
    node2.next = &node3;

    size_t numNodes = print_list(&node1);
    printf("Total number of nodes: %lu\n", numNodes);

    return 0;
}

