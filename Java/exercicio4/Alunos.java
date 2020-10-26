package aula4;

import java.io.Serializable;

public class Alunos implements Serializable
{
	private String nome;
	private float av1;
	private float av2;
	private float media;
	
	public Alunos()
	{
		
	}
	
	public Alunos(String nome, float av1, float av2)
	{
		this.nome = nome;
		this.av1 = av1;
		this.av2 = av2;
	}
	
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	
	public void setAv1(float av1)
	{
		this.av1 = av1;
	}
	
	public void setAv2(float av2)
	{
		this.av2 = av2;
	}
	
	public String getNome()
	{
		return nome;
	}
	
	public float getAv1()
	{
		return av1;
	}
	
	public float getAv2()
	{
		return av2;
	}
	
	public void calcularMedia()
	{
		media = ( (av1 + av2) / 2 ) ;
	}
	
	public float getMedia()
	{
		return media;
	}
	
}
