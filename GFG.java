// Java program to print unique words
// from a string

import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class GFG
{
    static void printUniquedWords(String str)
    {
        Pattern p = Pattern.compile("[a-zA-Z]+");
        Matcher m = p.matcher(str);
        HashMap<String, Integer> hm = new HashMap<>();

        while (m.find())
        {
            String word = m.group();

            // If this is first occurrence of word
            if(!hm.containsKey(word))
                hm.put(word, 1);
            else
                // increment counter of word
                hm.put(word, hm.get(word) + 1);

        }
        Set<String> s = hm.keySet();
        Iterator<String> itr = s.iterator();
        itr.
        while(itr.hasNext())
        {
            String w = itr.next();

            if (hm.get(w) == 1)
                System.out.println(w);
        }
    }
    public static void main(String[] args)
    {
        String str = "Java is great. Grails is also great";
        printUniquedWords(str);
    }
}
