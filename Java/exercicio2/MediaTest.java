package aula2;

public class MediaTest 
{
	public static void main(String[] args)
	{
		Media aluno1 = new Media(9.0f,8.0f);
		
		aluno1.calcularMedia();
		
		System.out.println("Sua média é " + aluno1.getMedia());
	}
}
