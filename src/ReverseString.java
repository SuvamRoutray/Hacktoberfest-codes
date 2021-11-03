public class ReverseString {
    public String reverseString(String s){
        return new StringBuffer(s).reverse().toString();
    }

    public static void main(String[] args) {
        ReverseString rs = new ReverseString();
        String str = "dohtem siht tset";
        System.out.println(rs.reverseString(str));
    }
}
