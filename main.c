//#include <stdio.h>
//#include <stdlib.h>
////creating a single linked list;
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node
//{
//    int num;                        //Data of the node
//    struct node *nextptr;           //Address of the next node
//}*stnode;
//
//void createNodeList(int n); // function to create the list
//void displayList();         // function to display the list
//
//int main()
//{
//    int n;
//    printf("\n\n Linked List : To create and display Singly Linked List :\n");
//    printf("-------------------------------------------------------------\n");
//
//    printf(" Input the number of nodes : ");
//    scanf("%d", &n);
//    createNodeList(n);
//    printf("\n Data entered in the list : \n");
//    displayList();
//    return 0;
//}
//void createNodeList(int n)
//{
//    struct node *fnNode, *tmp;
//    int num, i;
//    stnode = (struct node *)malloc(sizeof(struct node));
//
//    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
//    {
//        printf(" Memory can not be allocated.");
//    }
//    else
//    {
//// reads data for the node through keyboard
//
//        printf(" Input data for node 1 : ");
//        scanf("%d", &num);
//        stnode->num = num;
//        stnode->nextptr = NULL; // links the address field to NULL
//        tmp = stnode;
//// Creating n nodes and adding to linked list
//        for(i=2; i<=n; i++)
//        {
//            fnNode = (struct node *)malloc(sizeof(struct node));
//            if(fnNode == NULL)
//            {
//                printf(" Memory can not be allocated.");
//                break;
//            }
//            else
//            {
//                printf(" Input data for node %d : ", i);
//                scanf(" %d", &num);
//
//                fnNode->num = num;      // links the num field of fnNode with num
//                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
//
//                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
//                tmp = tmp->nextptr;
//            }
//        }
//    }
//}
//void displayList()
//{
//    struct node *tmp;
//    if(stnode == NULL)
//    {
//        printf(" List is empty.");
//    }
//    else
//    {
//        tmp = stnode;
//        while(tmp != NULL)
//        {
//            printf(" Data = %d\n", tmp->num);       // prints the data of current node
//            tmp = tmp->nextptr;                     // advances the position of current node
//        }
//    }
//}

#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node * next;
};
struct node *first_node;

void create_list(int x);
void print_list();

void create_list(int x)
{
    int num;
    struct node* temp, *new_node;
    first_node = (struct node*) malloc(sizeof (struct node));
    if(first_node==NULL)
    {
        printf("memory allocation error");
    }
    else
    {
        printf("input data for node 1: \n");
        scanf("%d", &num);
        first_node -> data = num;
        first_node -> next = NULL;
        temp = first_node;

        for (int i = 2; i<=x; i++)
        {
            new_node = (struct node*) malloc(sizeof(struct node));
            if (new_node==NULL)
            {
                printf("memory allocation error");
            }
            else
            {
                printf("input data for node %d\n", i);
                scanf("%d", &num);
                new_node->data = num;
                new_node->next = NULL;
                temp->next=new_node;
                temp=new_node;



            }
        }
    }

}

void print_list()
{
    struct node* temp;
    temp = first_node;
    if (temp == NULL)
    {
        printf("linked list is empty:");
    }
    while(temp !=NULL)
    {
        printf("entered data is: %d\n", temp->data);
        temp = temp->next;
    }

}

int main()
{
    int x;
    printf("please insert how many nodes you want to create: \n");
    scanf("%d", &x);
    create_list(x);
    printf("data entered in the list: \n");
    print_list();
}
