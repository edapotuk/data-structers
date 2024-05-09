//
//  main.cpp
//  trees
//
//  Created by Edanur Potuk on 5.01.2024.
//

#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    void addNode(int item, Node*& node) {
        if (node == nullptr) {
            node = new Node(item);
        } else {
            if (item < node->data) {
                addNode(item, node->left);
            } else if (item > node->data) {
                addNode(item, node->right);
            }
            // Ignore duplicate values for simplicity, you can handle as needed
        }
    }
    

    // Add any other functions you need for the BinaryTree class

    void printLe(Node* node) {
        if (node == nullptr) {
            return;
        }

        if (node->left == nullptr && node->right == nullptr) {
            std::cout << node->data << std::endl;
        }

        printLe(node->left);
        printLe(node->right);
    }

    void printBa(Node* root) {
        if (root == nullptr) {
            return;
        }

        printBa(root->left);
        std::cout << root->data << std::endl;
        printBa(root->right);
    }
    


    void deleteNode(int item, Node*& node) {
            if (node == nullptr) {
                return;
            }

            if (item < node->data) {
                deleteNode(item, node->left);
            } else if (item > node->data) {
                deleteNode(item, node->right);
            } else {
                // Node with the value to be deleted found

                if (node->left == nullptr) {
                    Node* temp = node->right;
                    delete node;
                    node = temp;
                } else if (node->right == nullptr) {
                    Node* temp = node->left;
                    delete node;
                    node = temp;
                } else {
                    // Node has two children
                    Node* successor = findMin(node->right);
                    node->data = successor->data;
                    deleteNode(successor->data, node->right);
                }
            }
        }

        Node* findMin(Node* node) {
            while (node->left != nullptr) {
                node = node->left;
            }
            return node;
        }
    
    
    bool isBSTUtil(Node* node, int minValue, int maxValue) {
            if (node == nullptr) {
                return true;
            }

            if (node->data <= minValue || node->data >= maxValue) {
                return false;
            }

            // Check the left subtree with updated max value
            // and the right subtree with updated min value
            return isBSTUtil(node->left, minValue, node->data) &&
                   isBSTUtil(node->right, node->data, maxValue);
        }
    
    
    bool isPerfectUtil(Node* node) {
            if (node == nullptr) {
                return true;
            }

            int leftDepth = depth(node->left);
            int rightDepth = depth(node->right);

            return (leftDepth == rightDepth) && isPerfectUtil(node->left) && isPerfectUtil(node->right);
        }
    int depth(Node* node) {
            if (node == nullptr) {
                return 0;
            }

            return 1 + std::max(depth(node->left), depth(node->right));
        }
    
    
    void search(Node* node, int targetItem) {
        if (node == nullptr) {
            std::cout << "Desired item is not found." << std::endl;
            return;
        }

        if (targetItem == node->data) {
            std::cout << "Desired item is found: " <<targetItem<< std::endl;
        } else if (targetItem < node->data) {
            search(node->left, targetItem);
        } else if (targetItem > node->data) {
            search(node->right, targetItem);
        }
    }
    
    void inorder(Node* node){
        if (node == nullptr) {
            return;
        }
        inorder(node->left);
        std::cout<<node->data<< std::endl;
        inorder(node->right);
    }
    
    int getHeight(Node* node) {
        if (node == nullptr) {
            return 0;
        } else {
            int leftHeight = getHeight(node->left);
            int rightHeight = getHeight(node->right);

            if (leftHeight> rightHeight) {
                return leftHeight+1;
            }else{
                return rightHeight+1;
            }
        }
    }

    void getHightCall(){
        std::cout<<"height of a tree is : "<<getHeight(root);
    }
    void inorderCall(){
        inorder(root);
    }
    void searchBinaryTree(int item){
        search(root, item);
    }
    
    void deleteNod(int item) {
           deleteNode(item, root);
       }
    void addTree(int item) {
        addNode(item, root);
    }
    void printLeafs() {
        printLe(root);
    }
    void printBag() {
        printBa(root);
    }
    bool isBST() {
            return isBSTUtil(root, INT_MIN, INT_MAX);
        }
    
    bool isPerfect() {
           return isPerfectUtil(root);
       }

};

int main() {
    BinaryTree tree;

    tree.addTree(5);
    tree.addTree(3);
    tree.addTree(7);
    tree.addTree(2);
    tree.addTree(4);
    tree.addTree(6);
    tree.addTree(8);

    std::cout << "Leaf nodes: ";
    tree.printLeafs();

    std::cout << "All nodes (in bag): ";
    tree.printBag();
    tree.deleteNod(5);

    std::cout << "All nodes (in bag): ";
    tree.printBag();

    /*
     tree.printBag();
     std::cout << "is bst ";

     std::cout<<tree.isBST();
     std::cout << "is perfect ";
     tree.addTree(2);
     std::cout << "All nodes (in bag): ";

     tree.printBag();
     std::cout<<tree.isPerfect();
     
     std::cout << "All nodes (in bag):cnm ";
     tree.printBag();

     tree.searchBinaryTree(7);
     std::cout << "---_>_--<-_>-_>-_ ";

     tree.inorderCall();
     std::cout << "---_>_--<-_>-_>-_ ";

     tree.getHightCall();
     tree.addTree(9);
     tree.addTree(10);
     tree.addTree(11);
     tree.getHightCall();
*/
         // The destructor will automatically free the memory allocated for the nodes

    return 0;
}


