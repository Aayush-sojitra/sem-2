// 32. Design anagram game using array.
//  Allow a user to enter N words and store it in an array.
//  Generate a random number between 0 to N-1.
//  Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
//  Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
//  Given a word A and word B. B is said to be an anagram of A if and only if
// the characters present in B is same as characters present in A,
// irrespective of their sequence. For ex: “LISTEN” == “SILENT”

import java.util.*;
 class Datail{
 }
public class Anagram{
     public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String[] array= new String[n];
        for(int i=0;i<n;i++){
            System.out.println("enter the name"+i);
            array[i]=sc.next();
        }
        Random r  = new Random();
        int random=r.nextInt(n);
       
        String actualword=array[random];
         System.out.println(array[random]+" "+"enter the anagram");
         String backword=sc.next();
        boolean c= Check( backword,actualword);
        if( c){
             System.out.println("anagram");
        }
        else{
            System.out.println(" not anagram");
        }
       
     }
         static boolean Check(  String backword,String actualword){
            char[] arrry1=actualword.toCharArray();
            char[] arrry2=backword.toCharArray();

            Arrays.sort(arrry1);
             Arrays.sort(arrry2);
             if(arrry1.length!= arrry2.length )return false;
            
                
             
             for(int i=0;i<arrry1.length;i++){
                if(arrry1[i]!=arrry2[i])return false;
                
             }
              return true;
        
}
}