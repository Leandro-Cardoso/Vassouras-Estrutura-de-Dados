public class BuscaBinaria {
    /**
     * Algoritmo de busca binária.
     */
    public static int n = 0;

    public static int buscar(int chave, int[] arr) {
        int inicio = 0;
        int fim = arr.length - 1;

        return BuscaBinaria.buscar(chave, arr, inicio, fim);
    }

    public static int buscar(int chave, int[] arr, int inicio, int fim) {
        n++;

        if (inicio > fim) {
            return -1;
        }
    
        int meio = (inicio + fim) / 2;
    
        if (arr[meio] == chave) {
            return meio;
        } else if (arr[meio] < chave) {
            return buscar(chave, arr, meio + 1, fim);
        } else {
            return buscar(chave, arr, inicio, meio - 1);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        int chave = 0;

        // BUSCAR:
        int resultado = BuscaBinaria.buscar(chave, arr);

        // PRINTS:
        System.out.println("\n> " + (resultado == -1 ? "Nenhum resultado encontrado !!!" : "A chave \"" + arr[resultado] + "\" foi encontrada na posicao \"" + resultado + "\"..."));
        System.out.println("> Numero de passos: " + BuscaBinaria.n + "\n");
    }
}
