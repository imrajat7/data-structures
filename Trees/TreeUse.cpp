#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
  int rootData;
  cout<<"Enter root data:"<<endl;
  cin>>rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);
  queue<TreeNode<int>*> pendingNodes;
  pendingNodes.push(root);
  while(pendingNodes.size()!=0){
    TreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
    int numChild;
    cout<<"Enter number of children of "<<front->data<<endl;
    cin>>numChild;
    for(int i=0;i<numChild;i++){
      int childData;
      cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
      cin>>childData;
      TreeNode<int>* child = new TreeNode<int>(childData);
      front->children.push_back(child);
      pendingNodes.push(child);
    }
  }
  return root;
}

void printTree(TreeNode<int>* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<":";
  for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<" ";
  }
  cout<<endl;
  for(int i=0;i<root->children.size();i++){
    printTree(root->children[i]);
  }
}

void printLevelWise(TreeNode<int>* root){
  if(root==NULL){
    return;
  }
  queue<TreeNode<int>*> pendingNodes;
  pendingNodes.push(root);
  while(pendingNodes.size()!=0){
    TreeNode<int>* front = pendingNodes.front();
    cout<<front->data<<":";
    pendingNodes.pop();
    for(int i=0;i<front->children.size();i++){
      cout<<front->children[i]->data;
      if(i!=front->children.size()-1)
      cout<<",";
      pendingNodes.push(front->children[i]);
    }
    cout<<endl;
  }
}

int numNodes(TreeNode<int>* root){
  if(root==NULL)
  return 0;
  int num=1;
  for(int i=0;i<root->children.size();i++){
    num += numNodes(root->children[i]);
  }
  return num;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root){
  TreeNode<int>* maxNode = root;
  TreeNode<int>* returnedNode;
  for(int i=0;i<root->children.size();i++){
    returnedNode = maxDataNode(root->children[i]);
    if(returnedNode->data>maxNode->data){
      maxNode = returnedNode;
    }
  }
  return maxNode;
}

int sumOfNodes(TreeNode<int>* root){
  int sum = root->data;
  for(int i=0;i<root->children.size();i++){
    sum += sumOfNodes(root->children[i]);
  }
  return sum;
}

int heightOfTree(TreeNode<int>* root){
  int maxHeight = 0;
  int returnedHeight;
  for(int i=0;i<root->children.size();i++){
    returnedHeight = heightOfTree(root->children[i]);
    if(returnedHeight>maxHeight)
    maxHeight = returnedHeight;
  }
  return maxHeight+1;
}

int numOfLeafNodes(TreeNode<int>* root){
  int num = 0;
  for(int i=0;i<root->children.size();i++){
    num += numOfLeafNodes(root->children[i]);
  }
  if(num!=0)
  return num;
  return num+1;
}

int main(){
  TreeNode<int>* root = takeInputLevelWise();
  cout<<endl;
  printTree(root);
  cout<<endl;
  printLevelWise(root);

  cout<<"Number of Nodes: "<<numNodes(root)<<endl;

  cout<<"Node with max data: "<<maxDataNode(root)->data<<endl;

  cout<<"Sum of the nodes is "<<sumOfNodes(root)<<endl;

  cout<<"Height of the tree is "<<heightOfTree(root)<<endl;

  cout<<"Number of Leaf Nodes is "<<numOfLeafNodes(root)<<endl;
}
