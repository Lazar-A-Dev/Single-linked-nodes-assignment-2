#include<iostream>
#include"LinkedNode.h"
using namespace std;
void main() {
	LinkedNode l;
	l.AddToHead(11);
	l.AddToHead(4);
	l.AddToHead(6);
	l.AddToTail(3);
	l.AddToTail(7);

	l.PrintNodes();

	//l.DeleteNode(11);
	l.SwitchNodes(4, 3);
	l.PrintNodes();
	system("pause");
}