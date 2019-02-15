// Roslyn Parker
// 15 Feb 2019 
// Version: 3
// The purpose of this .java file is exercise 4 in lab4
// The code has a sum method and then the main prints out the results

class lab2 {
     public static void main(String []args){
        int i = 3; 
         int j = 4; 
         int total; 
         total = sum(i, j); 
         System.out.printf("i: %d j: %d total: %d \n", i, j, total);
     }
     
     public static int sum(int x, int y) { 
            x = 1; 
            y = 1; 
            return x + y; 
     } 
}