import java.lang.Math;

public class Main {
    public static int integer_sqrt(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        int left = 0;
        int right = n;
        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid * mid == n) {
                return mid;
            } else if (mid * mid < n) {
                left = mid + 1;
                result = mid;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int n = 16;
        int sqrt = integer_sqrt(n);
        System.out.println(sqrt);
    }
}