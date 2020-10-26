package aula2;

/*
façam uma programa com Java que receba as notas de AV1 e AV2, calcule a média e
mostre-a ao usuário.
*/

public class Media 
{
	private float av1;
	private float av2;
	private float media;
	
	public Media()
	{
		
	}
	
	public Media(float av1 , float av2)
	{
		this.av1 = av1;
		this.av2 = av2;
	}
	
	public void setAv1(float av1)
	{
		this.av1 = av1;
	}
	
	public void setAv2(float av2)
	{
		this.av2 = av2;
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
		media = (av1 + av2) / 2;
	}
	
	public float getMedia()
	{
		return media;
	}
	
}
