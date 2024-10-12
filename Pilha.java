public class Pilha {
    private int size;
    private int top;
    private String[] pilha;
    private String status;

    public Pilha(int size) {
        this.size = size;
        this.top = -1;
        this.pilha = new String[size];
        this.status = "";
    }

    public String str() {
        String pilhaStr = "";

        if (this.status != "") {
            pilhaStr = this.status;
            return "\n Pilha: " + pilhaStr + "\n";
        }
        else if (this.pilha[0] == null) {
            pilhaStr = "Vazia";
        }
        else {
            for (String elemento : this.pilha) {
                if (elemento != null) {
                    pilhaStr += elemento + " ";
                }
            }
        }

        return "\n Pilha: " + pilhaStr + "\n Tamanho: " + this.size + "\n Topo: " + (this.top + 1) + "\n";
    }

    public void insert(String e) {
        if (this.status == "") {
            this.top++;

            if (this.top > this.size - 1) {
                this.status = "Overflow";
            }
            else {
                System.out.println(" Inserido: " + e);
                this.pilha[this.top] = e;
            }
            System.out.println(this.str());
        }
    }

    public void remove() {
        if (this.status == "") {
            if (this.top < 0) {
                this.status = "Underflow";
            }
            else {
                System.out.println(" Removido: " + this.pilha[this.top]);
                this.pilha[this.top] = null;
                this.top--;
            }
            System.out.println(this.str());
        }
    }

    public static void main(String[] args) {
        Pilha pilha = new Pilha(5);

        pilha.insert("A");
        pilha.insert("B");
        pilha.remove();
        pilha.insert("C");
        pilha.remove();
        pilha.remove();
        pilha.insert("D");
        pilha.insert("E");
        pilha.insert("F");
        pilha.insert("G");
        pilha.insert("H");
        pilha.insert("I");
    }
}
