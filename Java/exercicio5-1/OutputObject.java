package aula5;

import java.io.FileOutputStream;
import java.io.ObjectOutputStream;

/**
 *	Classe que objetiva salvar objetos do tipo Alunos , deve-se antes definir nome do arquivo e aluno a ser salvo.  
 **/

public class OutputObject 
{
	private static String nomeArquivo;
	private static Alunos alunoOutput;
	
	public static void setNomeArquivo(String novoNomeArquivo)
	{
		nomeArquivo = novoNomeArquivo;
	}
	
	public static void setAlunoOutput(Alunos aluno)
	{
		alunoOutput = aluno;
	}
	
	public static void outputObject()
	{
		try
		{
			FileOutputStream arquivo = new FileOutputStream(nomeArquivo);
			ObjectOutputStream objeto = new ObjectOutputStream(arquivo);
			
			objeto.writeObject(alunoOutput);
			objeto.close();
			
		}
		catch(Exception excecao)
		{
			excecao.printStackTrace();
		}
	}
	
}
