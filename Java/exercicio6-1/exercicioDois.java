package aula6_1;

import java.util.Scanner;

public class exercicioDois 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        
        float[] av1 = new float[5];
        float[] av2 = new float[5];
        
        float[] mediaAlunos = new float[5];
        
        float mediaAv1Final;
        float mediaAv2Final;
        
        System.out.print("Digite a nota de 5 alunos na av1: ");
        for(int count = 0; count < av1.length; count++)
        {
            av1[count] = input.nextFloat();
        }
        
        System.out.print("Digite a nota de 5 alunos na av2: ");
        for(int count = 0; count < av1.length; count++)
        {
            av2[count] = input.nextFloat();
        }
        
        //calculando media dos alunos
        for(int count = 0; count < av1.length; count++)
        {
            mediaAlunos[count] = (av1[count] + av2[count]) / 2;
        }
        
        mediaAv1Final = 0;
        mediaAv2Final = 0;
        
        //calculando media dos semestres
        for(int count = 0; count < av1.length; count++)
        {
            mediaAv1Final += av1[count];
            mediaAv2Final += av2[count];
        }
        mediaAv1Final /= 5;
        mediaAv2Final /= 5;
        
        System.out.println("A media do aluno 1 é " + mediaAlunos[0]);
        
    }
}
