public class StackImplementation {
    protected int[] data;

    private static final int DEFAULT_SIZE = 10;

    int ptr = -1;

    public StackImplementation() {
        this(DEFAULT_SIZE);
    }

    public StackImplementation(int size) {
        this.data = new int[size];
    }

    public boolean push(int item) {

        if(isFull()) {
            System.out.println("Stack is Full");
            return false;
        }

        ptr++;
        data[ptr] = item;

        return true;
    }

    public int pop() throws Exception {
        if(isEmpty()) {
            throw new Exception("Cannot pop from an empty stack");
        }

        int removedItem = data[ptr];
        ptr--;
        return removedItem;
    }

    public int peek() throws Exception {
        if(isEmpty()) {
            throw new Exception("Cannot peek from an empty stack");
        }

        return data[ptr];
    }

    private boolean isFull() {
        return ptr == data.length - 1;
    }

    private boolean isEmpty() {
        return ptr == -1;
    }
}