#include <stdio.h>
#include <stdbool.h>

#define COUNTING_RANGE 300000

bool is_prime(int n)
{
	// 2 미만은 소수가 존재하지 않으므로 false 반환.
	if (n < 2)
		return false;

	// 2부터 n의 절반까지(절반 이후로는 약수가 n 자기자신 밖에 없으므로) 반복.
	// n의 제곱근까지만 반복을 돌리며 프로그램 자체의 성능은 더 좋게 나오겠으나,
	// 이 코드는 언어 간의 실행 속도를 대조하기 위해 해당 방식으로 작성함.
	for (int i = 2; i <= n / 2; i++)
		// 만약 n이 i로 나누어 떨어진다면(= n / i의 나머지가 0이라면) 소수가 아닌 합성수이므로 false 반환.
		if (n % i == 0)
			return false;

	// 위 조건들에 안 걸렸다면 소수가 맞으므로 true 반환.
	return true;
}

int main(void)
{
	int count = 0;

	for (int i = 1; i < COUNTING_RANGE; i++)
		if (is_prime(i))
			count++;

	// 소수의 갯수 출력(실행 시간 계산은 Unix 계열 및 Linux에서 쓸 수 있는 bash의 time을 이용).
	printf("prime count is %d in range 1-%d\n", count, COUNTING_RANGE);

	return 0;
}

