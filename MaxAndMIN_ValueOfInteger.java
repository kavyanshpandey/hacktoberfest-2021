public class  MaxAndMIN_ValueOfInteger {
    public static void main(String[] args) {
        int a =Integer.MAX_VALUE;
        System.out.println("MAX Value : "+a);
        int b=Integer.MIN_VALUE;
        System.out.println("MIN value : "+b);
        System.out.println("INTEGER BYTES : " + ""+Integer.BYTES+" BYTES");
        float c=12.f;
        System.out.println("Float MIN Value : "+Float.MIN_VALUE);
        System.out.println("Float MAX Value : "+Float.MAX_VALUE);
        System.out.println("DOUBLE BYTES :" +Double.BYTES+" Bytes");
        System.out.println("INTEGER Size :" +Integer.SIZE);
        System.out.println("Double Size :" +Double.SIZE);

    }
}

//==================================== OUTPUT =======================================================================

//                                 MAX Value : 2147483647
//                                 MIN value : -2147483648
//                                 INTEGER BYTES : 4 BYTES
//                                 Float MIN Value : 1.4E-45
//                                 Float MAX Value : 3.4028235E38
//                                 DOUBLE BYTES :8 Bytes
//                                 INTEGER Size :32
//                                 Double Size :64