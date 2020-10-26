package aula3;

public class ContaTest 
{
	public static void main(String[] args)
	{
		Conta conta1 = new Conta(4,6);
		
		conta1.somar();
		
		System.out.println("A soma das notas é " + conta1.getResultado());
		
		conta1.subtrair();
		
		System.out.println("A subtracão das notas dá " + conta1.getResultado() );
		
	}
}
