package aula5;

public class Serializacao 
{
	public static void main(String[] args)
	{
		String novoNomeArquivo = "../arquivosSeriais/AlunosSerializados.ser";
		
		Alunos aluno1 = new Alunos();
		Alunos aluno2 = new Alunos();
		Alunos alunolido[] = new Alunos[2];
		
		aluno1.setNome("natan");
		aluno1.setAv1(7.3f);
		aluno1.setAv2(8.8f);
		
		aluno2.setNome("daniel");
		aluno2.setAv1(6.5f);
		aluno2.setAv2(5.7f);
		
		OutputObject.setNomeArquivo(novoNomeArquivo);
		
		OutputObject.setAlunoOutput(aluno1);
		OutputObject.outputObject();
		
		OutputObject.setAlunoOutput(aluno2);
		OutputObject.outputObject();
		
		InputObject.setNomeArquivo(novoNomeArquivo);
		
		for(int contador = 0; contador < 2; contador++)
		{
			InputObject.inputObject();
			alunolido[contador] = InputObject.getAluno();
		}
		
		for(int contador = 0; contador < 2; contador++)
		{
			System.out.println(alunolido[contador].getNome());
			System.out.println(alunolido[contador].getAv1());
			System.out.println(alunolido[contador].getAv2());
			System.out.println();
			
		}
		
	}
}
