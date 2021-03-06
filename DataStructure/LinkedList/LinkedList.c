/*
Note:

Keep the usage of in-built function to the minimum
addOneEle/Optimize  features
Please follow best coding practices
addOneEle comments if necessary
And make the Code Bug free

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct _Node{
    int data;
    struct _Node* next;
} Node ;

Node* createNode( int num ) {
    Node* node = (Node*) malloc ( sizeof(Node) );
    node->data = num;
    node->next = NULL;
    return node;
}

Node* addOneEle(  Node* root, int num ){
    Node *newNode = createNode( num );
    newNode->next = root;
    printf("Added: %d\n", newNode->data );
    return newNode;
}

// addOneEle appropriate message when the list is empty
Node* delOneEle( Node* root ) {
    Node *nodeToBeDeleted = root;
    root = root->next;
    printf( "Deleted: %d\n", nodeToBeDeleted->data );
    free( nodeToBeDeleted );
    return root;
}

//Check condition when index is -ve, or if index goes out of Bound
Node* elementAt( Node* root, int index ) {
//     LinkedList: 10 <- 20 <- 30 <- 40
//     Index:      0     1     2     3

    while( index-- )        root = root->next;
    return root;

}

void print( Node* root ) {
    printf("LinkedList Values: ") ;
    while( root ) {
        printf("%d ", root->data );
        root = root->next;
    }
    printf("\n");
}


// Test and Complete the following methods

/*
void printReverse(){

}

void reverse() {
    // Reverse the content of the list

}

void sort(){
    // sort elements of list ( ascending )

}

void clear() {
    // delete all the elements from the list
}

*/


int main() {
    Node* LinkedList = NULL;
    LinkedList = addOneEle( LinkedList, 1 );
    print( LinkedList );

    LinkedList = addOneEle( LinkedList, 2 );
    print( LinkedList );

    LinkedList = delOneEle( LinkedList );
    print( LinkedList );

    LinkedList = addOneEle( LinkedList, 3 );
    print( LinkedList );

    int ind = 1 ;
    Node *node = elementAt( LinkedList, ind );
    printf( "Element at index %d: %d", ind, node->data ) ;

    return 0;
}
