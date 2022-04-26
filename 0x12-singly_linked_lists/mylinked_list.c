// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

int main() {
    print_data();
    
    return 0;
}
 
void print_data(struct node *head)
{
    int count = 0;
    head = malloc(sizeof(struct node));
    head-> data = 4;
    head -> link = NULL;
    
    struct node *current;
    current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;
    
    current = malloc(sizeof(struct node));
    current -> data = 3;
    current -> link = NULL;
    head -> link -> link = current;
    
    if (!head)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    
    while (ptr != NULL)
        {
            count++;
            printf("Data stored in node %d = %d\n", count, ptr -> data);
            ptr = ptr -> link;
        }
        printf("There are a total of %d nodes", count);
}