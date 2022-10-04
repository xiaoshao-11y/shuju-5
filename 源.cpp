//1.
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	long long top;
	long long elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1) 
		return 1;
	else 
		return 0;
}
int GetTop(SqStack* s, int * e) {
	if (StackEmpty(s)) 
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, int  e){
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, int* e)
{
	if (StackEmpty(s)) 
		return 0;
	else
	{
		*e = s->elem[s->top];
			s->top--;
		return 1;
	}
}
int main()
{
	SqStack s;
	int data,i;
	StackInit(&s);
	while (cin>>data) {

		while (1)
		{
			if (data / 2 == 0) {
				Push(&s, data % 2);
				break;
			}
			Push(&s, data % 2);
			data = data / 2;
		}
		for (i = s.top; i >= 0; i--)
		{
			Pop(&s, &data);
			printf("%d", data);
		}
		printf("\n");

	}
	
		return 0;
}









//2.
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	int elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, int* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, int  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, int* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack *s) {
	return (s->top) + 1;
}
int main() {
	int m, n, k;
	cin >> m>> n>> k;
	while (k--) {
		SqStack s;
		StackInit(&s);
		int val = 1;
		bool flag = true;
		for (int i = 0; i <n; i++) {
			int z,x;
			cin >> z;
			while (Size(&s)<m&&z >=val) {
				Push(&s, val);
				val++;
			}
			GetTop(&s, &x);
			if (x == z) {
				Pop(&s, &z);
			}
				
			else
				flag = false;
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	char elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, int* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, int  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, int* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack* s) {
	return (s->top) + 1;
}
int main()
{
	int m,x,y;
	cin >> m;
	while (m != 0)
	{
		SqStack s;
		StackInit(&s);
		vector<char>a(m);
		vector<char>b(m);
		for (int i = 0; i < m; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		int i = 0, j = 0;
		while (j < m) {
			if (Size(&s) == 0) {
				Push(&s,a[i++]);
			}
			else {
				GetTop(&s, &y);
				if (b[j] !=y)
				{
					if (i < m) {
						Push(&s, a[i++]);
					}
					else {
						break;
					}
				}
				else {
					Pop(&s, &x);
					j++;
				}
			}
		}
		if (Size(&s) == 0)
			cout << 1 << endl;
		else 
			cout << 0 << endl;
		cin >> m;
	}
	return 0;
}



 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
#define maxlen 1000
typedef  struct Stack {
	int top;
	char elem[maxlen];
}SqStack;
int StackInit(SqStack* s)
{
	s->top = -1;
	return 1;
}
int StackEmpty(SqStack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int GetTop(SqStack* s, int* e) {
	if (StackEmpty(s))
		return 0;
	*e = s->elem[s->top];
	return 1;
}
int Push(SqStack* s, int  e) {
	if (s->top == maxlen - 1)
		return 0;
	else
	{
		s->top++;
		s->elem[s->top] = e;
		return 1;
	}
}int Pop(SqStack* s, int* e)
{
	if (StackEmpty(s))
		return 0;
	else
	{
		*e = s->elem[s->top];
		s->top--;
		return 1;
	}
}
int Size(SqStack *s) {
	return (s->top) + 1;
}
int main() {
	char m;
	SqStack s;
	StackInit(&s);
	int n = 2;
	while (cin >> m) {
		if (m != ' ' || '\n')
			Push(&s, m);
		else
			break;
	}
	char a[15];
	for (int i = 0; i < 15; i++) {
		if (StackEmpty(&s))
			break;
		else {
			int x;
			Pop(&s, &x);
			a[i] = x;
		}
	}
	for (int i = strlen(a); i >= 0; i--) {
		if(a[i]=='1')
		printf("%c*%d^%d", a[i], n, i);
		if (a[i] == '0')
	    printf("+");
	}
	return 0;
}
