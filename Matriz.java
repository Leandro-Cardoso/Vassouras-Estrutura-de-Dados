public class Matriz {
    /**
     * Soma e multiplicacao de matrizes.
     */

    public static boolean isSomavel(int[][] matrizA, int[][] matrizB) {
        return matrizA.length == matrizB.length && matrizA[0].length == matrizB[0].length ? true : false;
    }

    public static boolean isMultiplicavel(int[][] matrizA, int[][] matrizB) {
        return matrizA[0].length == matrizB.length ? true : false;
    }

    public static int[][] somar(int[][] matrizA, int[][] matrizB) {
        if (Matriz.isSomavel(matrizA, matrizB)) {
            int[][] resultante = new int[matrizA.length][matrizA[0].length];

            for (int l = 0; l < matrizA.length; l++) {
                for (int c = 0; c < matrizA[l].length; c++) {
                    resultante[l][c] = matrizA[l][c] +  matrizB[l][c];
                }
            }

            return resultante;
        }
        else {
            throw new IllegalArgumentException("Nao e possivel somar matrizes de tamanhos diferentes !!!");
        }
    }

    public static int[][] multiplicar(int[][] matrizA, int[][] matrizB) {
        if (Matriz.isMultiplicavel(matrizA, matrizB)) {
            int[][] resultante = new int[matrizA.length][matrizB[0].length];

            for (int i = 0; i < matrizA.length; i++) {
                for (int j = 0; j < matrizB[0].length; j++) {
                    for (int k = 0; k < matrizA[0].length; k++) {
                        resultante[i][j] += matrizA[i][k] * matrizB[k][j];
                    }
                }
            }

            return resultante;
        }
        else {
            throw new IllegalArgumentException("Nao e possivel multiplicar as matrizes A e B !!!");
        }
    }

    public static String toString(int[][] matriz) {
        String str = "";

        for (int[] line : matriz) {
            str += " |";

            for (int element : line) {
                str += " " + element;
            }

            str += " |\n";
        }

        return str;
    }

    public static void main(String[] args) {
        // DEFININDO MATRIZES:
        int[][] matrizA = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int[][] matrizB = {
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
        };

        int[][] matrizC = {
            {1, 2, 3},
            {4, 5, 6}
        };
        int[][] matrizD = {
            {1, 2},
            {3, 4},
            {5, 6}
        };

        // CALCULANDO:
        int[][] somaAB = Matriz.somar(matrizA, matrizB);

        int[][] multiplicacaoCD = Matriz.multiplicar(matrizC, matrizD);

        // PRINTS:
        System.out.println("\n Matriz A:\n" + Matriz.toString(matrizA));
        System.out.println("\n Matriz B:\n" + Matriz.toString(matrizB));
        System.out.println("\n A + B:\n" + Matriz.toString(somaAB));

        System.out.println("\n Matriz C:\n" + Matriz.toString(matrizC));
        System.out.println("\n Matriz D:\n" + Matriz.toString(matrizD));
        System.out.println("\n C x D:\n" + Matriz.toString(multiplicacaoCD) + "\n");
    }
}
