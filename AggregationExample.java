class Address {
    int streetNum;
    String city;
    String state;
    String country;

    Address(int street, String c, String st, String coun) {
        this.streetNum = street;
        this.city = c;
        this.state = st;
        this.country = coun;
    }
}

class AggregationExample {
    int rollNum;
    String studentName;
    // Creating HAS-A relationship with Address class
    Address studentAddr;

    AggregationExample(int roll, String name, Address addr) {
        this.rollNum = roll;
        this.studentName = name;
        this.studentAddr = addr;
    }

    public static void main(String args[]) {
        Address ad = new Address(14, "Barabanki", "UP", "India");
        AggregationExample obj = new AggregationExample(123, "Harshit Verma", ad);
        System.out.println(obj.rollNum);
        System.out.println(obj.studentName);
        System.out.println(obj.studentAddr.streetNum);
        System.out.println(obj.studentAddr.city);
        System.out.println(obj.studentAddr.state);
        System.out.println(obj.studentAddr.country);
    }
}