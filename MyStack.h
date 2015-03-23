
#pragma once

#include "Node.h"


class MyStack
{
public:
	MyStack(void);
	~MyStack(void);
	bool isEmpty(void) const;
	void push(int data);
	int pop(void);
	void clear(void);

private:
	Node *pNode_;
};