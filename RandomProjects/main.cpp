#include <iostream>
#include <vector>
#include "practice_interview_questions.cpp"
#include "Duplicates.cpp""
#include "binaryTreeSumLeafs.cpp"

using namespace std;

int main()
{
	string greeting;

	//cout << "Please enter your name: ";
	//cin >> greeting;
	//cout << "Hello " << greeting << " You will need to learn to navigate vim.  \n Maybe take some classes" << endl;
	
	vector<int> inputNums;
	vector<int> dups;
	TreeNode* binaryMode = new TreeNode{NULL};
	//TreeNode *binaryMode(0);
	for (int i=0; i<10; i++) inputNums.push_back(i);
	cout << "max valur after reverse: " << maxValueAfterReverse(inputNums) << endl;
	dups.push_back(1);
	dups.push_back(1);
	dups.push_back(2);
	cout << "remove duplicates from vector: " << removeDuplicates(dups) << endl;

	cout << "binary tree sum: " << sumRootToLeaf(binaryMode) << endl;
}
