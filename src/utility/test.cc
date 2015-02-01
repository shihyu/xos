#include "avl_tree.h"

void print()
{
	printf("hello world\n");
}

int main()
{
	avl_tree<int> tree;

	tree.insert(1);
	tree.insert(-20);
	tree.insert(6);
	tree.insert(3);
	tree.insert(2);
	tree.insert(10);
	tree.insert(-4);

//	auto i = tree.begin();
//	printf("%d\n", *i);
//	++i;
//	printf("%d\n", *i);
//	++i;
//	printf("%d\n", *i);
//	++i;
	for (const auto & i: tree)
		printf("%d\n", i);

	avl_tree<int> empty;

	print();
}