#include "LinkedNode.h"
LinkedNode::LinkedNode() {
	head = tail = NULL;
	number = 0;
}

LinkedNode::~LinkedNode() {
	DeleteLink(head);
}

void LinkedNode::DeleteLink(Node* p) {
	Node* tmp = p;
	if (head == tail)
		head = tail = NULL;

	else if (tmp != NULL) {
		head = head->ReturnNext();
		delete tmp;
		DeleteLink(p->ReturnNext());
	}
}

void LinkedNode::AddToHead(int info) {
	head = new Node(info, head);
	if (tail == NULL)
		tail = head;
}

void LinkedNode::AddToTail(int info) {
	if (head != NULL) {
		tail->next = new Node(info);
		tail = tail->next;
	}
	else
		head = tail = new Node(info);
}

Node* LinkedNode::FindNode(int info) {
	Node* tmp = head;
	while (tmp->info != info && tmp != NULL)
		tmp = tmp->next;

		return tmp;
}

void LinkedNode::DeleteNode(int info) {
	Node* tmp = FindNode(info);
	if (tmp == head)
		DeleteFromHead();
	else if (tmp == tail)
		DeleteFromTail();
	else {
		Node* prev = head;
		while (prev->next != tmp)
			prev = prev->next;

		prev->next = tmp->next;
		delete tmp;
	}
}

void LinkedNode::DeleteFromHead() {
	if (head != NULL) {
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}
}

void LinkedNode::DeleteFromTail() {
	Node* tmp = head;
	while (tmp->next != tail)
		tmp = tmp->next;
	
	tail = tmp;
	tail->next = NULL;
}

void LinkedNode::SwitchNodes(int a, int b) {
	Node* p1 = FindNode(a);
	Node* p2 = FindNode(b);

	Node* prev1 = head;
	Node* prev2 = head;

	while (prev1->next != p1)
		prev1 = prev1->next;

	while (prev2->next != p2)
		prev2 = prev2->next;
	
	Node* n = p1->next;
	p1->next = p2->next;
	p2->next = n;

	n = prev1->next;
	prev1->next = prev2->next;
	prev2->next = n;

}

void LinkedNode::PrintNodes() {
	Node* tmp = head;
	cout << "Lancana lista: ";
	while (tmp != NULL) {
		tmp->Print();
		if(tmp->next != NULL)
		cout << "-> ";
		tmp = tmp->next;
	}
	cout << endl;
}