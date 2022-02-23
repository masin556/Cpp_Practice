#include<stdio.h>

int main() {
	// 1, 2, 4, 8, 16, 32 .... 2의 배수 

	int n; 
	scanf("%d", &n);

	for (int i = 1; i <= n; i *= 2) {
		printf("%d\n", i);
	}
}

// 프로그래밍 할때 처음값과 마지막 값을 주의 깊게 봐야한다.
/*딱 걸리는 값에 대해서 조심스럽게 봐야하는데 그 해당값을 입력 하면 그 값이 제대로 나오는가
실행을 통해서 확인 해봐야한다. 즉 2를 출력하면 해당값이 나오는 가? 같은 */

/*
중괄호안에 있는 특성때문에 i 라는 변수를 for문에 선언하였을 경우 for문 안에서만 가능 
즉 안에서 사용한 변수는 중괄호 밖에서 사용할 수 없다
*/

/*
또한 만약 for문안에 사용한다 하였을때 똑같은 i를 선언하지 않고 통상 j로 다음을 출력한다.
어찌되었든 이것은 즉 다른 변수로 선언해야 한다는 말이 되는 것일지도? 
*/