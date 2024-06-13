import java.util.Scanner;
class Prac14{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter first number:");
		int m=sc.nextInt();
		System.out.println("Enter last number:");
		int n=sc.nextInt();
		int s=0;
		for (int i=m;i<=n ;i++ ) {
			s=s+i;
		}
		System.out.println("Ans:"+s);
	}
}