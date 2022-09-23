/* C Program to Create a Linked List & Display the Elements in the List

This C Program create a linked list & display the elements in the list. Linked list is an ordered set of data elements, each containing a link to its successor. This program is to create a linked list and display all the elements present in the created list. */

    #include <stdio.h>

    #include <malloc.h>

    #include <stdlib.h>

    void main()

    {

        struct node

        {

            int j;

            struct node *ptr;

        };

        typedef struct node NODE;

        NODE *head, *first, *temp = 0;

        int count = 0;

        int choice = 1;

        first = 0;

        while (choice)

        {

            head  = (NODE *)malloc(sizeof(NODE));

            printf("Enter the data item\n");

            scanf("%d", &head-> j);

            if (first != 0)

            {

                temp->ptr = head;

                temp = head;

            }

            else

            {

                first = temp = head;

            }

            fflush(stdin);

            printf("Do you want to continue(Type 0 or 1)?\n");

            scanf("%d", &choice);

        }

        temp->ptr = 0;

        /*  reset temp to the beginning */

        temp = first;

        printf("\n status of the linked list is\n");

        while (temp != 0)

        {

            printf("%d=>", temp->j);

            count++;

            temp = temp -> ptr;

        }

        printf("NULL\n");

        printf("No. of nodes in the list = %d\n", count);

    }