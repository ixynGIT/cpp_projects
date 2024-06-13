/*#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Node
    {
        int data;
        Node* next;
    };

struct Node* head;

void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
        for(i=0; i<n; i++)
        {
           printf("\nEnter the number \n");
           scanf("%d",&x);
           Insert(x);
           Print();
        }
    return 0;
}
*/
