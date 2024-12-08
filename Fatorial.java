public class Fatorial {
    public static int getFatorial(int n) {
        if (n <= 1) {
            return n;
        }
        else {
            return n * Fatorial.getFatorial(n - 1);
        }
    }

    public static void main(String[] args) {
        int n = 5;
        int fatorial = Fatorial.getFatorial(n);

        System.out.println("\n !" + n + " = " + fatorial + "\n");
    }
}
