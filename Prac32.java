
import java.util.*;

public class Prac32 {

    public static  boolean checkAnagram(String str, String anagram){
        char[] arr1=str.toCharArray();
        char[] arr2=anagram.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        if (!(arr1.length==arr2.length)) {
            return false;
        }

        for(int i=0;i<arr1.length;i++){
            if (arr1[i]==arr2[i]) {
                return true;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter String:");
        String str=sc.nextLine();
        System.out.println("Enter Anagram:");
        String anagram=sc.nextLine();

        checkAnagram( str,  anagram);
        if (true) {
            System.out.println("Anagram");
        }
        else {
            System.out.println("Not Anagram");
        }
    }
}
