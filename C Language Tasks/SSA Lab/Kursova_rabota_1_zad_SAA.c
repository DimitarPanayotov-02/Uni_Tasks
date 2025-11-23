#include <stdio.h>
#include <stdlib.h>

// 
typedef struct Node {
    int data;
    struct Node* left; //sochi kum adres (ako nqma * sochi kum cql obekt vutre v sebe si i stava bezkrajno i gurmi)
    struct Node* right; //vseki vuzel sochi kum drugi vuzli ot sushtiq tip
} Node;

// Suzdavane nov vuzel
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // zadelq nova pamet i vrushta adresa
    if (!newNode) {
        printf("Greshka pri zadelqne na pamet!\n");
        exit(1);
    }
    newNode->data = data; //zapisvame dadenata stojnost na zadeleniq adres adresa
    newNode->left = NULL; //zadavame che za sega natam nqma pamet
    newNode->right = NULL;//za da ne zapulva pametta
    return newNode;
}

// Polojitelni
void printPositive(Node* root) {
    if (root == NULL) // ako nqma stojnost vrushta programta
        return;

    if (root->data > 0)
        printf("%d ", root->data);

    printPositive(root->left); //prowerqva "naslednicite" ako ima produljava natatuk
    printPositive(root->right);
}

// Otricatelni
void printNegative(Node* root) {
    if (root == NULL)
        return;

    if (root->data < 0)
        printf("%d ", root->data); // sushtoto mama za otricatelnite

    printNegative(root->left);
    printNegative(root->right);
}

int main() {

    /* Primerno durvo:
             10
           /   \
          5    -6
        /  \     \
      -15  -7     16
    */

    Node* root = createNode(10); // suzdavame durvoto
    root->left = createNode(5);
    root->right = createNode(-6);
    root->left->left = createNode(-15);
    root->left->right = createNode(-7);
    root->right->right = createNode(16);

    printf("Polojitelni:\n");
    printPositive(root);

    printf("\nOtricatelni:\n");
    printNegative(root);

    return 0;
}
