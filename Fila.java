public class Fila {
    private int size, first, last;
    private String[] elements;

    public Fila(int size) {
        this.size = size;
        this.first = -1;
        this.last = -1;
        this.elements = new String[size];
    }

    public void insert(String element) {
        if ((this.last + 1) % this.size == this.first) {
            System.out.println(" ERRO: A fila esta cheia !!!");
        }
        else {
            if (this.first == -1) {
                this.first = 0;
                this.last = 0;
            }
            else if (this.last == this.size - 1 && this.first != 0) {
                this.last = 0;
            }
            else {
                this.last++;
            }

            this.elements[this.last] = element;

            System.out.println(" O elemento \"" + element + "\" foi adicionado a fila...");
        }

        System.out.println(" Fila:" + this);
    }

    public void remove() {
        if (this.first == -1) {
            System.out.println(" ERRO: A fila esta vazia !!!");
        }
        else {
            String element = elements[this.first];

            if (this.first == this.last) {
                this.first = -1;
                this.last = -1;
            }
            else if (this.first == this.size - 1) {
                this.first = 0;
            }
            else {
                this.first++;
            }

            System.out.println(" O elemento \"" + element + "\" foi removido da fila...");
        }

        System.out.println(" Fila:" + this);
    }

    @Override
    public String toString() {
        String str = "";

        if (this.first == -1) {
            str += " Vazia...";
        }
        else {
            for (int i = this.first; i < this.size; i++) {
                if (this.elements[i] != null) {
                    str += " " + this.elements[i];
                }
            }

            if (this.first > this.last) {
                for (int i = 0; i <= this.last; i++) {
                    str += " " + this.elements[i];
                }
            }
        }

        return str;
    }

    public static void main(String[] args) {
        int n = 3;
        Fila fila = new Fila(n);

        fila.insert("A");
        fila.insert("B");
        fila.insert("C");
        fila.remove();
        fila.remove();
        fila.insert("D");
        fila.insert("E");
    }
}
