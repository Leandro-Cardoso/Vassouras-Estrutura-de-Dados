import java.util.List;
import java.util.ArrayList;

public class Heap {
    private List<Element> elements;
    private int n;

    public Heap(List<Element> elements) {
        this.elements = elements;
        this.n = elements.size() - 1;

        for (int i = this.n / 2 - 1; i >= 0; --i) {
            this.down(i);
        }
    }

    public void up(int i) {
        int j = i / 2;

        if (j >= 1) {
            if (this.elements.get(i).getPriority() > this.elements.get(j).getPriority()) {
                Element temp = this.elements.get(i);
                this.elements.set(i, this.elements.get(j));
                this.elements.set(j, temp);
                this.up(j);
            }
        }
    }

    public void down(int i) {
        int j = 2 * i;

        while (j <= this.n) {
            if (j < this.n && this.elements.get(j + 1).getPriority() > this.elements.get(j).getPriority()) {
                j++;
            }

            if (this.elements.get(i).getPriority() < this.elements.get(j).getPriority()) {
                Element temp = this.elements.get(i);
                this.elements.set(i, this.elements.get(j));
                this.elements.set(j, temp);
                i = j;
                j = 2 * i;
            }
            else {
                break;
            }
        }
    }

    @Override
    public String toString() {
        String str = "HEAP:";

        for (int i = 0; i < this.elements.size(); i++) {
            str += " " + this.elements.get(i);

            if (!this.elements.get(i).equals(this.elements.get(this.n))) {
                str += " -";
            }
        }
        return str;
    }

    public static void main(String[] args) {
        // Criacao dos nos:
        String[] values = {"A", "B", "C", "D", "E", "F", "G", "H", "I"};
        int[] priorities = {92, 85, 90, 47, 93, 34, 20, 40, 46};
        List<Element> elements = new ArrayList<>();

        for (int i = 0; i < values.length; i++) {
            Element element = new Element(values[i], priorities[i]);

            elements.add(element);
        }

        // Criacao do Heap:
        Heap heap = new Heap(elements);

        // Teste:
        System.out.println("\n " + heap + "\n");
    }
}

class Element {
    private String value;
    private int priority;

    public Element(String value, int priority) {
        this.value = value;
        this.priority = priority;
    }

    public String getValue() {
        return this.value;
    }

    public int getPriority() {
        return this.priority;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Element) {
            Element element = (Element) obj;

            return this.value == element.value ? true : false;
        }
        else {
            return false;
        }
    }

    @Override
    public String toString() {
        return this.value + " <" + this.priority + ">";
    }
}
