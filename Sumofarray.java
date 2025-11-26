

public class ArrayAverage {
    public static void main(String[] args) {
        int[] nums = {10, 20, 30, 40, 50};

        int sum = 0;

        // 배열 요소를 하나씩 합함
        for (int i = 0; i < nums.length; i++) {
            sum = sum + nums[i];
        }

        double avg = sum / (double) nums.length;

        System.out.println("합계: " + sum);
        System.out.println("평균: " + avg);
    }
}
