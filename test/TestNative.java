public class TestNative {
    public native int add(int a, int b);
    public native void printSum(int n);

    static {
        System.loadLibrary("TestNative"); 
    }

    public static void main(String[] args) {
        TestNative test = new TestNative();
        long timeBegin = System.nanoTime();
        int result = test.add(5, 7);
        System.out.println(result);
        test.printSum(10000);
        double timeElapsed = (System.nanoTime() - timeBegin) / 1_000_000_000.0;
        System.out.printf("\nUse time: %.6f seconds%n", timeElapsed);
    }
}