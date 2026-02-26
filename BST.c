#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int data){
    struct node* new  = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = new->right = NULL;
    return new;
}

struct node* insert(struct node* root, int data){
    if(root==NULL){
        return create(data);
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }
    else if(data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}

struct node* iterativeSearch(struct node* root, int key){
    struct node* current = root;
    while(current!=NULL){
        if(key==current->data){
            return current;
        }
        else if(key<current->data){
            current = current->left;
        }
        else{
            current = current->right;
        }
    }
    return NULL;
}

struct node* recursiveSearch(struct node* root, int key){
    struct node* current = root;
    if(root==NULL){
        return NULL;
    }
    else if(key==current->data){
        return root;
    }
    else if(key<current->data){
        return recursiveSearch(current->left, key);
    }
    else{
        return recursiveSearch(current->right, key);
    }
}
int main(){
    int n, i, key;
    struct node* root = NULL;
    
    clock_t start, end;
    double build_time, search_time, total_time;
	
    printf("Enter the number of elements: ");
    scanf("%d", &n);
	
	start = clock();
    for(i=0; i<n; i++){
        root = insert(root, rand());
    }

    key = rand();
    printf("Key: %d\n", key);
    end = clock();
    build_time = (double)(end - start) / CLOCKS_PER_SEC;
    
    start = clock();
    //for iterative search
    if(iterativeSearch(root, key)){
        printf("Key is found");
    }
    else{
        printf("Key is not found");
    }
    end = clock();
    search_time = (double)(end - start) / CLOCKS_PER_SEC;
    total_time = build_time + search_time;
    printf("\nTime taken: %lf\n", total_time);

    start = clock();
    //for recursive search
    if(recursiveSearch(root, key)){
        printf("Key is found");
    }
    else{
        printf("Key is not found");
    }
    end = clock();
    search_time = (double)(end - start) / CLOCKS_PER_SEC;
    total_time = build_time + search_time;
    printf("\nTime taken: %lf", total_time);
    return 0;
}