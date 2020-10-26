package aula3;

public class Conta 
{
	private int numero1;
	private int numero2;
	private int resultado;
	
	public Conta()
	{
		
	}
	
	public Conta(int numero1 , int numero2)
	{
		this.numero1 = numero1;
		this.numero2 = numero2;
	}
	
	public void somar()
	{
		resultado = (numero1 + numero2);
	}
	
	public void subtrair()
	{
		resultado = (numero1 - numero2);
	}
	
	public int getResultado()
	{
		return resultado;
	}
	
	
}
