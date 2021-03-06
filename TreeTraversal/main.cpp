#include <iostream>
#include "TestHelper.h"
#include "preOrderTraversal.h"
#include "inOrderTraversal.h"
#include "postOrderTraversal.h"
#include "levelOrderTraversal.h"

int main()
{
    string tree1;
    std::cin >> tree1;
    TreeNode* root1 = TestHelper::stringToTreeNode(tree1);

    preRecursiveTraversal(root1);
    inRecursiveTraversal(root1);
    postRecursiveTraversal(root1);
    levelTraversal(root1);

    std::cout << "Non-Recursive: " << endl;

    preTraversal(root1);
    inTraversal(root1);
    postTraversal(root1);
    
    return 0;
}