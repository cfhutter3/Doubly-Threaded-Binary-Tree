#include "BST.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	BST<int, string>* bstDictionary = new BST<int, string>;

	bstDictionary->insert(77, "seventy-seven");
	bstDictionary->insert(70, "seventy");
	bstDictionary->insert(75, "seventy-five");
	bstDictionary->insert(66, "sixty-six");
	bstDictionary->insert(79, "seventy-nine");
	bstDictionary->insert(68, "sixty-eight");
	bstDictionary->insert(67, "sixty-seven");
	bstDictionary->insert(69, "sixty-nine");
	bstDictionary->insert(90, "ninety");
	bstDictionary->insert(85, "eighty-five");
	bstDictionary->insert(83, "eighty-three");
	bstDictionary->insert(87, "eighty-seven");
	bstDictionary->insert(65, "sixty-five");
	cout << "Print:\n";
	bstDictionary->print();
	cout << "\n\nPrint in order:\n";
	bstDictionary->printInOrder();
	cout << "\n\nPrint Reverse:\n";
	bstDictionary->printReverse();
	cout << '\n';
	system("pause");
	return 0;
}