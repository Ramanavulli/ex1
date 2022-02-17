#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}Node;
void Reverse(struct Node* lptr)
{
    if (lptr == NULL)
       return;
    Reverse(lptr->next);
    printf("%d ", lptr->data);
}
void createlist(struct Node** lptr_ref, char new_data)
{
    
    struct Node* nptr =
            (struct Node*) malloc(sizeof(struct Node));
    nptr->data  = new_data;
    nptr->next = (*lptr_ref);  
    (*lptr_ref)= nptr;
}
int main()
{
    // Let us create linked list 1->2->3->4->5
    int elements[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(elements)/sizeof(elements[0]);
    struct Node* lptr = NULL;
    int i;
    for (i = n - 1; i >=0; i--) 
	{
        createlist(&lptr, elements[i]);
    }
    printf("The reverse order is :");
    Reverse(lptr);
    return 0;
}

