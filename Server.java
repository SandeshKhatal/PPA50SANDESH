import java.net.*;
import java.io.*;

class Server
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("Server application is running...");

        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is waiting for client...");

        Socket sobj =ssobj.accept();
        System.out.println("Server gets successfully connected...");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;

        System.out.println("Marvellous messenger started...");

        while((str1=br1.readLine()) != null )
        {
            System.out.println("Client Says :" +str1);
            System.out.println("Enter message for Client:");
            str2 = br2.readLine();
            ps.println(str2); 
        }
        System.out.println("Thank you for using marvellous messenger...");
    }
}