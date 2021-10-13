import java.util.Scanner;


enum LEVEL{
    LOW(4), MEDIUM(5), HIGH(10);
    private int My;
    LEVEL(int LVL)
    {
        My=LVL;
    }
    int getLevel()
    {
        return My;
    }
}


public class EnumMainClass
{
    LEVEL myLevel;
    public static void main(String[] args) {
        EnumMainClass ck=new EnumMainClass();
        EnumMainClass ck2=new EnumMainClass();
        EnumMainClass ck3=new EnumMainClass();
        ck.myLevel= LEVEL.HIGH;
        ck2.myLevel=LEVEL.MEDIUM;
        ck3.myLevel=LEVEL.LOW;
        System.out.println(ck.myLevel.getLevel());  // 10
        System.out.println(ck2.myLevel.getLevel());  // 5
        System.out.println(ck3.myLevel.getLevel());  // 4

        //Enum Methods-------> values(),ordidnal(),valueOf()

        //values() return the array of enum_name_type which contains the constants_Name
        for (LEVEL x: LEVEL.values()) {
            System.out.println(x);
        }

        //ordinal() returns the index of particular constant
        System.out.println(ck.myLevel.ordinal());   // 2
        System.out.println(ck2.myLevel.ordinal());  // 1
        System.out.println(ck3.myLevel.ordinal());  // 0

        // valueOf("constantName") returns the value of given constantName
        System.out.println(LEVEL.valueOf("HIGH")); //if HIGH is constant then it prints "HIGH" otherwise if shows a compiler error on this line only

    }
}