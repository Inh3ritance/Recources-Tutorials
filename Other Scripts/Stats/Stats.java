import java.util.Arrays;
import java.lang.Math;
public class Stats{
  public static void main(String[] args){
    double median, s, s2 = 0, mean = 0;
    
    
    //Change these Values
    double[] arr = {88,104,130,160,180,195,134,145,215,105,145,152,153,139,87,99,92,119,129};
    
   
    
    Arrays.sort(arr);
    if(arr.length % 2  == 0){
      median = (arr[arr.length/2] + arr[arr.length/2-1])/2.0;
      System.out.println( "median: " + median );
    } else {
      median = arr[arr.length/2];
      System.out.println( "median: " + median );
    }
    
    for(int i = 0; i < arr.length; i++){
      mean += arr[i];
    }
    mean = mean/arr.length; 
    System.out.println("mean: " + mean);
    
    for(int i = 0; i < arr.length; i++){
      s2 += Math.pow((arr[i] - mean),2);
    }
    s2 = s2/(arr.length - 1);
    System.out.println("s2: " + s2);
    
    s = Math.sqrt(s2);
    System.out.println("s: " + s);
    
  } 
}