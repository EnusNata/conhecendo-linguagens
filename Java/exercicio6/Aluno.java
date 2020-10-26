package aula6;

public class Aluno 
{
    private String nome;
    private float[] notas;
    private float media;
    
    public Aluno()
    {
        notas = new float[2];
    }
    
    public void setNome(String nome)
    {
        this.nome = nome;
    }
    
    public void setNotas(float[] notas)
    {
        for(int count = 0; count < notas.length; count++)
        {
            this.notas[count] = notas[count] ; 
        }
    }
    
    public void calcularMedia()
    {
        for(int count = 0; count < this.notas.length; count++)
        {
            this.media += this.notas[count] ;
        }
        
        this.media /= notas.length ;
    }
    
    public String getNome()
    {
        return this.nome;
    }
    
    public float[] getNotas()
    {
        return notas;
    }
    
    public float getMedia()
    {
        return this.media; 
    }    
    
}