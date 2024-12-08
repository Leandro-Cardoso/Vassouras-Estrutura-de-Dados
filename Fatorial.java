public class Fatorial {
    public static int getFatorial(int n) {
        return n < 2 ? n : n * Fatorial.getFatorial(n - 1);
    }

    public static void main(String[] args) {
        int n = 5;
        int fatorial = Fatorial.getFatorial(n);

        System.out.println("\n !" + n + " = " + fatorial + "\n");
    }
}
