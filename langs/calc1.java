public class my_main{
    public static void main(String[] args){
	double e = 0, f = 1;
	int i = 28;
	while (i>0) {
		f *= i;
		e += f;
		i--;
	}
	e /= f;
    	System.out.println(e);
    }
}
