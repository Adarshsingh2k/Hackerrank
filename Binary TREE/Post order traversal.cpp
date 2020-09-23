/*
Complete the  function in your editor below, which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's postorder traversal as a single line of space-separated values.

Input Format

Our hidden tester code passes the root node of a binary tree to your  function.

Constraints

 Nodes in the tree  

Output Format

Print the tree's postorder traversal as a single line of space-separated values.

Sample Input

     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4
Sample Output

4 3 6 5 2 1 
Explanation

The required result of the post-order traversal of the given binary tree is as above.

*/

 void postOrder(Node *root) {
        if(root==NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }