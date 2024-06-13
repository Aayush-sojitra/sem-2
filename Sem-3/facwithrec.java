import java.util.Scanner;
class facwithrec{
	public static int fac(int num){
        if(num > 0){
            return fac(num - 1)* num;
        }
        else{
            return 1;
        }
}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int n=sc.nextInt();
		System.out.println("Answer:"+fac(n));

		}
}