
#include <iostream>
#include "BST.h"
#include "node.h"

using namespace std;

int main()
{

    BST BST;
    nodemethod nodemethod;
    int choice = 0;
    char nodeChar;
    char search_item;
    char del_item;
    char node_sib;

    do {
        cout << "-------------------- MENU ----------------------" << endl;
        cout << "" << endl;
        cout << "1. Insert node(s)" << endl;
        cout << "2. Traverse Preorder" << endl;
        cout << "3. Search BST" << endl;
        cout << "4. Delete node" << endl;
        cout << "5. Leaf Count" << endl;
        cout << "6. Sibling of a node" << endl;
        cout << "7. Quit" << endl;
        cout << "" << endl;
        cout << "Enter your choice: <1-7>" << endl;
        cin >> choice;
        cout << "" << endl;

        switch (choice)
        {
            case 1:
                int numNodes;
                cout << "Enter number of nodes to insert: " << endl;
                cin >> numNodes;
                if (numNodes >= 1 && numNodes <= 10) {
                    for (int i = 0; i < numNodes; i++) {
                        cout << "Enter Node: " << endl;
                        cin >> nodeChar;
                        nodemethod.insertNode(nodeChar);                                                   //Call insert(for desired number of nodes
                    }
                }
                else {
                    cout << "Please enter a valid integer below 20." << endl;
                }
                break;

            case 2:
                BST.displayPreorder();
                break;

            case 3:
                cout << "Enter item you want to search for: " << endl;
                cin >> search_item;
                BST.searchBST(search_item);
                break;

            case 4:
                cout << "Enter item you want to delete: " << endl;
                cin >> del_item;
                nodemethod.deleteNode(del_item);
                break;

            case 5:
                int num_leaves;
                num_leaves = nodemethod.count();
                cout << "There are " << num_leaves << " number of leaves in BST." << endl;
                break;

            case 6:
                cout << "Enter item you want to find the sibling of: " << endl;
                cin >>node_sib;
                BST.nodeSibling(node_sib);
                break;

            case 7:
                cout << "Quitting Program.." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

        cout << "" << endl;

    } while (choice != 7);


    return 0;
}
