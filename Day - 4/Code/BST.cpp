#include "BNode.cpp"
// Manmeet Singh

class BST {
	/*
		Implementation of Binary Search Tree
		which follows the simple rule: LEFT < ROOT < RIGHT
		 - Left subtree will always be smaller then Root
		 - Right subtree will always be greater then Root

	*/

private:
    BNode* root;

 
    // post order: left, right, root
    void printPostOrder(BNode* root_node) {
        if (root_node) {
            printPostOrder(root_node->getLeft());
            printPostOrder(root_node->getRight());
            cout << root_node->getData() << " ";
        }
    }

    // pre order: root, left, right
    void printPreOrder(BNode* root_node) {
        if (root_node) {
            cout << root_node->getData() << " ";
            printPreOrder(root_node->getLeft());
            printPreOrder(root_node->getRight());
        }
    }


    // in order: left, root, right
    void printInOrder(BNode* root_node) {
        if (root_node) {

            printInOrder(root_node->getLeft());

            cout << root_node->getData() << " ";

            printInOrder(root_node->getRight());
      
        }
    }


    BNode* insertNode(BNode* root_node, int data) {
        if (root_node == NULL) {
            root_node = new BNode(data);
            return root_node;
        }
        else if (root_node->getData() == data) {
            // if value already exists in the tree then dont add just return 
            return root_node;
        }
        else if (root_node->getData() > data) {
            // insert left
            root_node->setLeft(insertNode(root_node->getLeft(), data));
            return root_node;
        }
        else {
            // insert right
            root_node->setRight(insertNode(root_node->getRight(), data));
            return root_node;
        }
    }

    BNode*  removeNode(BNode* node, int data) {
        
        // get node to we want to remove
        // Case 1: if Node is Leaf
        // Case 2: if Node has child
        // Case 3: if Node has Children

        // if node does not exists
        if (node == NULL) {
            return node;
        }

        // if node found
        else if (node->getData() == data) {

            // Case 1
            if (isLeaf(node)) {

                delete node;
                return nullptr;
                
            }
            else if (node->getLeft() && node->getRight()) {
                // Node has 2 children

                // grab smallest from right sub tree
                int data = InOrderSuccessor(node->getRight())->getData();
 

                // delete the node before we assign the value
                removeNode(node, data);

                // set data of the successor node
                node->setData(data);
                
                return node;
                
                
            }

            // if node has 1 of either child
            else {
                
                // if node has left child only
                if (node->getLeft()) {
                    cout << "Node has left Children" << endl;
                    node = node->getLeft();
                }

                // if node has right child
                else {
                    cout << "Node has right Children" << endl;
                    node = node->getRight();
                }

                return node;

            }

        }

        // look for node on left and right
        else if (node->getData() > data) {
            // find left
            node->setLeft(removeNode(node->getLeft(), data));
        }
        else {
            // find right
            node->setRight(removeNode(node->getRight(), data));
        }

        // return the node once we have found and removed 
        return node;
    }

    bool findNode(BNode* node, int data) {
        return getNode(node, data) != nullptr;
    }

    BNode* InOrderSuccessor(BNode* node) {
        if (node->getLeft()) return InOrderSuccessor(node->getLeft());
        return node;
    }

    BNode* getNode(BNode* node, int data) {
        if (node == NULL) {
            return nullptr;
        }
        else if (node->getData() == data) {
            // if found then return 
            return node;
        }
        else if (node->getData() > data) {
            // find left
            return getNode(node->getLeft(), data);
        }
        else {
            // find right
            return getNode(node->getRight(), data);
        }
    }

    int largest(BNode* root_node) {
        if (root_node != NULL) {

            int left = largest(root_node->getLeft());
            int right = largest(root_node->getRight());
            int largest = root_node->getData();

            if (left > largest) {
                largest = left;
            }

            if (right > largest) {
                largest = right;
            }

            return largest;

        }

        // if root is null return -1
        return -1;
    }

public:

    BST() {
        root = NULL;
    }

    BST(int data) {
        root = new BNode(data);
    }

    BNode* getRoot() { return this->root; }

    // method overloading, it is calling the method that takes parameter

    /*
        Due to encapsulation I have moved all the function that includes class attributes
        to the private and then overload the methods
    */
    void printPostOrder() {
        printPostOrder(root);
        cout << endl;
    }

    void printPreOrder() {
        printPreOrder(root);
        cout << endl;
    }


    void printInOrder() {
        printInOrder(root);
        cout << endl;
    }


    void insertNode(int data) {
        root = this->insertNode(root, data);
    }

    void remove(int data) {
        root = this->removeNode(root, data);
    }

    bool findNode(int data) {
        return this->findNode(root, data);
    }

    int largest() {
        return this->largest(root);
    }

    bool isLeaf(BNode* node) {
        if (node) {
            return node->getLeft() == nullptr && node->getRight() == nullptr;
        }
        return true;
    }


};

