<!--

insertion and deletion in binary search tree
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int key;
    node *left;
    node *right;

}node;
node* createNode(int key)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
node* insertNode(node *root,int key)
{

    if (root==NULL)
        root= createNode(key);
    else if(key<root->key)
        root->left=insertNode(root->left,key);
    else if(key>root->key)
        root->right=insertNode(root->right,key);
    return root;
}
void preOrder(node *root)
{
    if(root!=NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

}
node* minValueNode(node *root)
{
    node *cur= root;
    while(cur && cur->left)
        cur = cur->left;
    return cur;
}
node* deleteNode(node *root,int key)
{
    if(root==NULL)
        return root;
    if (key < root ->key)
        root->left = deleteNode(root->left, key);
    else if(key>root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        //node found
        node *child;
        if(root->left==NULL || root->right==NULL)
        {
            child = root->left ? root->left : root->right;
            if(child==NULL) // 0 child
                root = NULL;
            else // 1 child
                *root = *child;
            delete child;
        }
        else
        {
            //2 children
            //change root with inorder successor(minimum node in right child)

            //1)
            // node *successor = minValueNode(root->right);

            // root->key = successor->key;
            // root->right = deleteNode(root->right, successor->key);

            //2)

            node *succParent = root;
            node *successor = root->right;
            while(successor->left!=NULL)
            {
                succParent = successor;
                successor = successor->left;
            }
            if(succParent!=root)
                succParent->left = successor->right;
            else //root->right is a successor
                succParent->right = successor->right;
            root->key = successor->key;
            delete successor;
        }
    }
    return root;
}
int main()
{
    node *root = NULL;
    int n,key;
    cout << "Enter Number of Nodes" << endl;
    cin >> n;
    cout << "Enter keys" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> key;
        root=insertNode(root, key);
    }

    cout << "pre order traversal of tree"<<endl;

    preOrder(root);

    //deletion
    // mehtods
    //     1) recursive
    //     2) track parent of successor
    cout << "\nEnter key value to delete" << endl;
    cin >> key;

    //1
    //root = deleteNode(root, key);

    //2)
    root = deleteNode(root, key);


    cout << "\npre order traversal of tree after deleting "<<key<<endl;
    preOrder(root);
    return 0;
}


h=height of tree
n=number of nodes in a tree(in case of skewed binary tree)
TC:
    insertion:
        avg case:O(h)
        worst case: O(n)->in worst case

    deletion:
        1. recursive:
            avg: O(h)
            worst:O(n)
        2. track parent of successor

 -->
