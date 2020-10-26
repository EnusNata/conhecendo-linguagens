package aula5;

import java.io.FileInputStream;
import java.io.ObjectInputStream;

public class LeituraSerial 
{
	private String nomeArquivo;
	private Alunos aluno;
	
	public LeituraSerial()
	{
		this.nomeArquivo = "../arquivosSeriais/Alunos.ser";
	}
	
	public LeituraSerial(String nomeArquivo)
	{
		this.nomeArquivo = nomeArquivo;
	}
	
	public void setNomeArquivo(String nomeArquivo)
	{
		this.nomeArquivo = nomeArquivo;
	}
	
	
	public String getNomeArquivo()
	{
		return nomeArquivo;
	}
	
	public Alunos getAluno()
	{
		return aluno;
	}
	
	public void deSerializar()
	{
		try
		{
			FileInputStream arquivo = new FileInputStream(nomeArquivo);
			ObjectInputStream objeto = new ObjectInputStream(arquivo);
			
			aluno = (Alunos) objeto.readObject();
			objeto.close();
		}
		catch(Exception excecao)
		{
			excecao.printStackTrace();
		}
	}
	
}
