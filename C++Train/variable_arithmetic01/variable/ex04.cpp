// ��ġ�� ��ġ 

#include <stdio.h>

int main() {
	int a = 10;
	int b;

	/*
	printf("=== ��ġ ���� ���� ===\n");
	
	//a�� ���� 1�� ���� ��Ű�� �״����� b���� a �� �����϶� 
	b = ++a; //b���� ++a�� �����Ѵ�.  
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	//��� : a : 11 b : 11
	*/

	printf("=== ��ġ ���� ���� ===\n");
	//��ġ������ b�� a�� ���� �����Ѵ�.  b = 10 a���� �����ϰ� ���� a�� 1�� ���ض� 
	//a++
	b = a++; //���� �ۼ� �ϴ� ��쵵 ���� 
	//a++ //���Ʒ��� ��ġ �ص� ����� �Ȱ��� 
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}