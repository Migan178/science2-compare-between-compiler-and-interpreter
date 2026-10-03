const countingRange = 300000;

function isPrime(n) {
	if (n < 2) return false;

	for (let i = 2; i <= n / 2; i++)
		if (n % i == 0) return false;

	return true;
}

let count = 0;

for (let i = 1; i <= countingRange; i++)
	if (isPrime(i)) count++;

console.log(`prime count is ${count} in range 1-${countingRange}`);

