//Stack

import java.util.*;

class Collection3
{
    public static void main(String a[])
    {
        Stack <float> sobj = new Stack<float>();

        sobj.push(10.5f);
        sobj.push(20.5f);
        sobj.push(30.5f);
        sobj.push(40.5f);
        
        float fret = sobj.pop();
        System.out.println(fret);

        fret = sobj.pop();
        System.out.println(fret);
    }
}