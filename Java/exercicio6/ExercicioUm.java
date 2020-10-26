package aula6;

import java.util.Scanner;

public class ExercicioUm 
{
    public static void main(String[] args)
    {
        String nome;
        float media;
        float[] notas = new float[2];
        
        Scanner input = new Scanner(System.in);
        
        System.out.print("Digite o nome do aluno: ");
        nome = input.nextLine();
        
        for(int count=0; count < notas.length; count++)
        {
         System.out.printf("Digite a nota da AV%d: ",(count+1));
         notas[count] = input.nextFloat();
        }
        
        Aluno aluno1 = new Aluno();
        aluno1.setNome(nome);
        aluno1.setNotas(notas);
        aluno1.calcularMedia();
        
        media = aluno1.getMedia();
        
        System.out.println("A média do aluno é: " + media );
        
    }
}
