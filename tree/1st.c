#include<stdio.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node*root=NULL;

struct node* create(int val){
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->left=NULL;
    new->right=NULL;

    return new;
}
void pre(struct node*root){
    if(root==NULL)return;
    printf("%d -> ",root->data);
    pre(root->left);
    pre(root->right);
}

void post(struct node*root){
    if(root==NULL)return;
    
    post(root->left);
    post(root->right);
    printf("%d -> ",root->data);
}

void in(struct node*root){
    if(root==NULL)return;
    
    in(root->left);
    printf("%d -> ",root->data);
    in(root->right);
}

int main(){
    struct node* root=create(10);
    struct node* sec=create(20);
    struct node* thir=create(30);
    root->right=sec;
    root->left=thir;
    struct node* forth=create(40);
    sec->right=forth;
    struct node* fiv=create(50);
    struct node* six=create(60);
    thir->right=fiv;
    thir->left=six;

    pre(root);
    printf("\n");
    post(root);
    printf("\n");
    in(root);

    return 0;
}
