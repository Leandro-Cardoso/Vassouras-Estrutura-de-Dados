public class Palindromo {
    public static boolean isPalindromo(String characters) {
        for (int i = 0; i < characters.length() / 2; i++) {
            if (characters.charAt(i) != characters.charAt(characters.length() - i - 1)) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        String characters = "arara";

        if (Palindromo.isPalindromo(characters)) {
            System.out.println("\n \"" + characters + "\" e um palindromo...\n");
        }
        else {
            System.out.println("\n \"" + characters + "\" nao e um palindromo !!!\n");
        }
    }
}
