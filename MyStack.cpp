#include "MyStack.h"

/*! \file MyStack.cpp
*/
MyStack::MyStack(void)
{
	pNode_ = NULL;
}


MyStack::~MyStack(void)
{
	if (pNode_)
		clear();
}


bool MyStack::isEmpty(void) const
{
	return !(bool)pNode_;
}

/*!
\brief zapisat' v element
*/

void MyStack::push(int data)
{
	pNode_ = new Node(data, pNode_);
}

/*!
\brief vzat' iz elementa
*/

int MyStack::pop(void)
{
	Node *temp = pNode_;
	int data = pNode_->data_;
	pNode_ = pNode_->next_;
	delete temp;
	return data;
}

/*!
\brief ochistit' pamayat'
*/

void MyStack::clear(void)
{
	Node *temp = pNode_;
	if (pNode_)
	{
		while (temp->next_)
		{
			temp = temp->next_;
			delete pNode_;
			pNode_ = temp;
		}
		delete pNode_;
	}
	pNode_ = NULL;
}