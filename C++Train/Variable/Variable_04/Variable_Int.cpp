#include <stdio.h>


/*������ �׸��� �����ϸ� �ش� ���������� ��� �׸�? 
����̶�� �����ϸ� �ɵ� , 
8bit = 1byte
32bit = 4byte
int : ������ 32bit(4byte) (�׸��� ũ��) 
*/
int main()
{
	int a; // 1) a��� int�� �׸� (����) 
	a = 3; // 2) a ���� 3�� ����ִ´�(����)
	printf("%d\n", a); // 3) a ���� �ҷ��ͼ� %d�� �ִ´� 3�� ���Դ�

	a = 5; // 4) a �׸��� 3�� �������� 5�� �����Ѵ�.
	printf("%d\n", a); // 5) %d�� 5�� ��� 
}