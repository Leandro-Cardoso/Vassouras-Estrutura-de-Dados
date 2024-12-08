public class InverterLista<T> {
    /**
     * Inverte a lista recebida como parametro.
     */
    public T[] invert(T[] list) {
        for (int i = 0; i < list.length / 2; i++) {
            int j = list.length - 1 - i;

            T element1 = list[i];
            T element2 = list[j];
            
            list[i] = element2;
            list[j] = element1;
        }

        return list;
    }

    public String toString(T[] list) {
        String str = " Lista:";

        for (T element : list) {
            str += " " + element;
        }

        return str;
    }

    public static void main(String[] args) {
        Integer[] list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        InverterLista<Integer> inverter = new InverterLista<>();

        System.out.println("\n" + inverter.toString(list));

        Integer[] inverted = inverter.invert(list);
        System.out.println(inverter.toString(inverted) + "\n");
    }
}
