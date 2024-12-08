import java.util.ArrayList;
import java.util.List;

public class Fibonacci {
    public static List<Integer> getFib(int n) {
        List<Integer> fib = new ArrayList<>();

        return Fibonacci.getFib(n, fib);
    }

    public static List<Integer> getFib(int n, List<Integer> fib) {
        if (fib.size() == n) {
            return fib;
        }
        else if (fib.size() < 2) {
            fib.add(1);

            return Fibonacci.getFib(n, fib);
        }
        else {
            int element1 = fib.get(fib.size() - 1);
            int element2 = fib.get(fib.size() - 2);

            fib.add(element1 + element2);

            return Fibonacci.getFib(n, fib);
        }
    }

    public static String toString(List<Integer> list) {
        String str = " Fib:";

        for (int element : list) {
            str += " " + element;
        }

        return str;
    }

    public static void main(String[] args) {
        int n = 10;
        List<Integer> fib = Fibonacci.getFib(n);

        System.out.println("\n" + Fibonacci.toString(fib) + "\n");
    }
}
