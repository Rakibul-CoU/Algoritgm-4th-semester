#include<iostream>

using namespace std;

class Binary_Search_Tree
{
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    node* root;

    node* makeEmpty(node* t)
    {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

    void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

    node* find(node* t, int x)
    {
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }

public:
    Binary_Search_Tree()
    {
        root = NULL;
    }

    ~Binary_Search_Tree()
    {
        root = makeEmpty(root);
    }

    void insert(int x)
    {
        root = insert(x, root);
        //cout<<root<<endl;
    }

    void display()
    {
        inorder(root);
        cout << endl;
    }

    void search(int x)
    {
        root = find(root, x);
    }
};

int main()
{
    Binary_Search_Tree t;
    int n, m;
    t.insert(5);
    t.insert(20);
    t.insert(10);
    t.insert(8);
    t.insert(12);
    cout<<"Enter any number you want to insert: "<<endl;
    cin>>n;
    t.insert(n);
    t.display();
}
