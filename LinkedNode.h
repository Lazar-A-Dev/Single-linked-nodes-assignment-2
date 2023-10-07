#pragma once
#include<iostream>
#include"Node.h"
using namespace std;
class LinkedNode : public Node
{
public:
	Node* head, *tail;
	int number;

public:

	LinkedNode();
	~LinkedNode();
	void DeleteLink(Node* p);
	void AddToHead(int info);
	void AddToTail(int info);
	Node* FindNode(int info);
	void DeleteNode(int info);
	void DeleteFromHead();
	void DeleteFromTail();
	void SwitchNodes(int a, int b);
	void PrintNodes();

	Node* ReturnHead() { return head; }
	Node* ReturnTail() { return tail; }
	int ReturnNumber() { return number; }
};

