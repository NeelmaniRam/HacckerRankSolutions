


//problem link :https://www.hackerrank.com/challenges/java-substring/problem
//status :accepted
//author : NEELMANI RAM

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int start = in.nextInt();
        int end = in.nextInt();
        System.out.print(S.substring(start,end));
    }
}
