package aula5;

public class SerializacaoTest 
{
	public static void main(String[] args)
	{	
		Alunos aluno1 = new Alunos("Naruto",3.3f,2.3f);
		Alunos aluno2 = new Alunos();
	
		aluno1.calcularMedia();
		
		EscritaSerial escritor = new EscritaSerial(aluno1);
		
		escritor.Serializar();
		
		LeituraSerial leitor = new LeituraSerial();
		
		leitor.deSerializar();
		
		aluno2 = leitor.getAluno();
		
		System.out.println("O nome do alunos é " + aluno2.getNome());
		
	}
}
