package aula5;

import java.io.FileOutputStream;
import java.io.ObjectOutputStream;

public class EscritaSerial 
{
	private String nomeArquivo;
	private Alunos aluno;
	
	public EscritaSerial()
	{
		this.nomeArquivo = "../arquivosSeriais/Alunos.ser";
	}
	
	public EscritaSerial(Alunos aluno)
	{
		this.aluno = aluno;
		this.nomeArquivo = "../arquivosSeriais/Alunos.ser";
	}
	
	public EscritaSerial(Alunos aluno , String nomeArquivo)
	{
		this.aluno = aluno;
		this.nomeArquivo = nomeArquivo;
	}
	
	public void setNomeArquivo(String nomeArquivo)
	{
		this.nomeArquivo = nomeArquivo;
	}
	
	public void setAluno(Alunos aluno)
	{
		this.aluno = aluno;
	}
	
	public String getNomeArquivo()
	{
		return nomeArquivo;
	}
	
	public Alunos getAluno()
	{
		return aluno;
	}
	
	public void Serializar()
	{
		try
		{
			
			FileOutputStream arquivo = new FileOutputStream(nomeArquivo);
			ObjectOutputStream objeto = new ObjectOutputStream(arquivo);
			
			objeto.writeObject(aluno);
			objeto.close();
			
		}
		catch(Exception excecao)
		{
			excecao.printStackTrace();
		}
	}
}
