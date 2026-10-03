public class Main {
	private static final int COUNTING_RANGE = 300000;

	private static boolean isPrime(int n) {
		if (n < 2)
			return false;

		for (int i = 2; i <= n / 2; i ++)
			if (n % i == 0)
				return false;

		return true;
	}

	public static void main(String[] args) {
		int count = 0;

		for (int i = 1; i <= Main.COUNTING_RANGE; i++)
			if (Main.isPrime(i)) count++;

		System.out.printf("prime count is %d in range 1-%d\n", count, Main.COUNTING_RANGE);
	}
}

