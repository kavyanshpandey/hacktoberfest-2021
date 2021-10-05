#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
};
 
Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = nullptr;
 
    return node;
}
 
void inorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
Node* insert(Node* root, int key)
{
   
    if (root == nullptr) {
        return newNode(key);
    }
 
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}
 
int main()
{
    int keys[] = { 15, 12, 20, 18, 14, 16, 23 };
 
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
 
    inorder(root);
 
    return 0;
}
