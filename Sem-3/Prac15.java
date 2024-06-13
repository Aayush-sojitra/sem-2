import java.util.Scanner;
class Prac15{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int n=sc.nextInt();
		int s=0;
		for (int i=1;i<=n ;i++ ) {
			s=s+i;
		}
		double avg=s/n;
		System.out.println("Avg:"+avg);
	}
}