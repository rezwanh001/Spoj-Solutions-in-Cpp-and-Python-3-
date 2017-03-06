import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		while (true){
			int n = sc.nextInt();
			if(n == 0){
				break;
			}
			else{
				n += 1;
				System.out.println(""+( n*(3*n-1) ) / 2)  ;
			}
		}
	}
} 