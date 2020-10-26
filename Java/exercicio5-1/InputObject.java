package aula5;

import java.io.FileInputStream;
import java.io.ObjectInputStream;

public class InputObject 
{
	private static String nomeArquivo;
	private static Alunos alunoInput;
	
	public static void setNomeArquivo(String novoNomeArquivo)
	{
		nomeArquivo = novoNomeArquivo;
	}
	
	public static Alunos getAluno()
	{
		return alunoInput;
	}
	
	public static void inputObject()
	{
		try
		{
			FileInputStream arquivo = new FileInputStream(nomeArquivo);
			ObjectInputStream objeto = new ObjectInputStream(arquivo);
			
			alunoInput = (Alunos) objeto.readObject();
			objeto.close();
			
		}
		catch(Exception excecao)
		{
			excecao.printStackTrace();
		}
	}
	
}
