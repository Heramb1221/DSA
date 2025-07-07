public class Example {
    public static void main(String[] args) {
        // constructor 1
        StringBuffer sb = new StringBuffer();

        // constructor 2
        StringBuffer sb2 = new StringBuffer("Kinal Kushwaha");

        //constructor 3
        StringBuffer sb3 = new StringBuffer(30);

        sb.append("WeMakeDevs");

        sb.insert(2, " Rahul ");

        sb.replace(1, 5, "kushwaha");

        sb.delete(1,5);

        sb.reverse();

        String str = sb.toString();
    }
}
