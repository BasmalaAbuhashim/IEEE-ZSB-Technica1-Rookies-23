#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
        }
};
class Solution{
    public:
    Node* insert(Node* root, int data) {
            Node* newNode = new Node(data);
            newNode->data = data;
            newNode->left = NULL;
            newNode->right = NULL;
            if(root == NULL) {
                root = newNode;
            }
            else if(root->data < data ){
            root->right = insert(root->right , data);
            } 
           else 
           root->left = insert(root->left , data);
           return root;
        }
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }
};
   /*Node * insert(Node * root, int data) {
    Node* newNode = new Node(data);
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root == NULL){
       root = newNode;
    }
    else if(root->data < data ){
        root->right = insert(root->right , data);
    } 
    else root->left = insert(root->left , data);
    return root;
    }*/
int main(){
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}