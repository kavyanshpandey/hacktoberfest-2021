public class CreatingStringObject {
    public static void main(String[] args) {
        String str1=new String("Harshit");
        String str4=new String("Harshit");
        String str2="Harshit";
        String str3="Harshit";
        System.out.println(str1==str2);
        System.out.println(str1==str3);
        System.out.println(str2==str3); // Already exist in pool(String Constant Pool)
        System.out.println(str4==str1);
    }
}
 