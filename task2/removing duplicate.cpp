#include <iostream>
#include <iterator>
#include <list>
using namespace std;
/* Node structure of the linked list nodes */
class Node{
    public:
    int data;
    Node* next;
};
Node* start = NULL;

/* Using this function we will be removing the duplicates elements from the given sorted linked list */
void removeDuplicatesSortedList(Node* start){
    Node* current = start;
    Node* next_next;
    if (current == NULL)
    return;
    while (current->next != NULL){
        if (current->data == current->next->data){
            next_next = current->next->next;
            free(current->next); 
            current->next = next_next;
        }
        else{
            current = current->next;
        }
    }
}
/* Using this function we will be pushing a new node at the end of the linked list */
void insert_beg(int val){
    Node* new_node = new Node();
    new_node->data = val;
    new_node->next = NULL;    
    if(start == NULL){
        start = new_node;
        return;
    }
    Node* last = start;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
}
/* Using this function we will be printing the linked list */
void printingLinkedList(Node *node){
    while (node!=NULL){
        cout<<" "<<node->data;
        node = node->next;
    }
    cout<<endl;
}
int main()
{
    int num;
    cout<<"if you're done inserting your values input -1"<<endl;
    while(cin>>num){
        if(num == -1)
          break;
        insert_beg(num);
    }
    removeDuplicatesSortedList(start);
    printingLinkedList(start);            
    return 0;
}