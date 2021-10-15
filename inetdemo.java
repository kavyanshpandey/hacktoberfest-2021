import java.io.*;  
import java.net.*;  
public class InetDemo{  
public static void main(String[] args){  
try{  
InetAddress address=InetAddress.getLocalHost();  
  
System.out.println("Host Name: "+address.getHostName());  
System.out.println("IP Address: "+address.getHostAddress());  
 }
catch(Exception e)
{
	System.out.println(e);
}  
}  
}  
