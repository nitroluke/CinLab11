/*
Luke Welna
Lab 11
Binary Trees
// this is a test for dynamic memory allocation
*/

#include <stdio.h>
#include <stdlib.h>

struct nodeNode{
int nodeData;
struct nodeNode* leftNode;
struct nodeNode* rightNode;
};

struct constructNode;
void printTree(struct nodeNode* nodeNode);
struct nodeNode* buildTree();
struct nodeNode* newNode(int nodeData);
struct nodeNode* insertNode(struct nodeNode* nodeNode, int nodeData);

struct nodeNode* newNode(int nodeData){
struct nodeNode* nodeNode = new(struct nodeNode); // malloc type to allocated memory for the nodes
nodeNode->nodeData = nodeData;
nodeNode->leftNode = NULL;
nodeNode->rightNode = NULL;
return nodeNode;
};

struct nodeNode* insertNode(struct nodeNode* nodeNode, int nodeData){
if(nodeNode == NULL){
return(newNode(nodeData));
}else{
	if(NodeData <= nodeNode->nodeData){
	nodenode->leftNode = insertNode(nodeNode->leftNode, nodeData);
	}else{
	nodeNode->rightNode = insertNode(nodeNode->leftNode, nodeData);
	}
	return(nodeNode);
}

};

void printTree(struct nodeNode* nodeNode) { // prints the inorder traversal
  if (nodeNode == NULL) return; 
  printTree(nodeNode->leftNode); 
  printTree(nodeNode->rightNode); 
  printf("%d ", nodeNode->NodeData);
} 

void searchTree(struct nodeNode* nodeNode, int data){


}

struct nodeNode* buildTree(){

struct nodeNode* rootNode = NULL;
rootNode = insertNode(rootNode, 6);
rootNode = insertNode(rootNode, 2);
rootNode = insertNode(rootNode, 5);

return(rootNode);
}

int main(){
buildTree();
/* insertNode(newNode(5), 5);
insertNode(newNode(0), 0);
insertNode(newNode(1), 1);
insertNode(newNode(3), 3);
insertNode(newNode(4), 4); */
return 0;
}