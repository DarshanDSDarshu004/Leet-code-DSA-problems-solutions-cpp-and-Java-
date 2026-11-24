class Solution {
    public int reverse(int x) {
        boolean negative=x<0;
        String s=String.valueOf(Math.abs((long)x));

        StringBuilder sb=new StringBuilder(s);

        sb.reverse();
        long res=Long.parseLong(sb.toString());

        if(negative){
            res=-res;
            
        }
        
        if(res>Integer.MAX_VALUE || res<Integer.MIN_VALUE){
            return 0;
        }
       
       

       return (int)res;
        
        
    }
}