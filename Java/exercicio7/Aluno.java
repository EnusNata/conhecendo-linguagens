package aula7;

class Aluno 
{
    private String nome;
    private float av1;
    private float av2;
    private float av3;
    
    public Aluno()
    {
        
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
    
    public void setAv3(float av3)
    {
        this.av3 = av3;
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
    
    public float getAv3()
    {
        return av3;
    }
    
    public void imprime()
    {
        System.out.println("Nome: " + getNome());
        System.out.println("av1: " + getAv1());
        System.out.println("av2: " + getAv2());
        System.out.println("av3: " + getAv3());
    }
    
}
