package aula4;

public class AlunosTest 
{
	public static void main(String[] args)
	{
		Alunos aluno1 = new Alunos("Enus",10.0f,10.0f);
		Alunos aluno2 = new Alunos("Natan",9.0f,9.0f);
		
		aluno1.calcularMedia();
		aluno2.calcularMedia();
		
		System.out.println("A media do aluno " + aluno1.getNome() + " É " + aluno1.getMedia());
		System.out.println("A media do aluno " + aluno2.getNome() + " É " + aluno2.getMedia());
		
	}
}
