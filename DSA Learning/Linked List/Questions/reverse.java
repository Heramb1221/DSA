public class reverse {
    private void reverserec(Node node) {
        if(node == tail) {
            head = tail;
            return;
        }

        reverserec(node.next);

        tail.next = node;
        tail = node;
        tail.next = null;
    }

    public void revinplace() {
        if(size < 2 || head == null) {
            return;
        }

        Node prev = null;
        Node pres = head;
        Node next = pres.next;

        while(pres != null) {
            pres.next = prev;
            prev = pres;
            pres = next;

            if(next != null) {
                next = next.next;
            }
        }

        head = prev;
    }
}
