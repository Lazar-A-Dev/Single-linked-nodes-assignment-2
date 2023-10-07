#pragma once
#include<iostream>
using namespace std;
class Node {
public:
	Node* next;
	int info;

public:

	Node() {
		next = NULL;
		info = 0;
	}

	Node(int info) {
		next = NULL;
		this->info = info;
	}

	Node(int info, Node* next) {
		this->info = info;
		this->next = next;
	}

	~Node() {}

	void Print() {
		cout << "["<<ReturnInfo() << "] ";
	}

	bool Compare(Node* p) {
		return ReturnInfo() == p->info;
	}

	void ChangeInfo(int info) {
		this->info = info;
	}

	Node* ReturnNext() { return next; }
	int ReturnInfo() { return info; }
};
