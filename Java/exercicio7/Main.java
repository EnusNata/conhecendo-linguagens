package aula7;

import java.util.ArrayList;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Aluno aluno = new Aluno();
        ArrayList <Aluno> cadastroAluno = new ArrayList <Aluno>();
        Scanner input = new Scanner(System.in);
        
        String nomeTemp,temp;
        float av1Temp,av2Temp,av3Temp;
        int condicao = 1;
        
        while(condicao == 1)
        {
            System.out.println("Digite o nome do aluno: <<");
            nomeTemp = input.nextLine();
            aluno.setNome(nomeTemp);
            
            System.out.println("Digite a nota da av1: <<");
            av1Temp = input.nextFloat();
            aluno.setAv1(av1Temp);
            
            System.out.println("Digite a nota da av2: <<");
            av2Temp = input.nextFloat();
            aluno.setAv2(av2Temp);
            
            System.out.println("Digite a nota da av3: <<");
            av3Temp = input.nextFloat();
            aluno.setAv3(av3Temp);
            
            cadastroAluno.add(aluno);
            
            System.out.println("Digite 1 para novo cadastro ou 0 para finalizar: <<");
            condicao = input.nextInt();
            
            temp = input.nextLine();
           
        }
        
        System.out.printf("Foram cadastrados %d alunos.",cadastroAluno.size());
        
        for(int count = 0; count < cadastroAluno.size(); count++)
        {
            cadastroAluno.get(count).imprime();
        }
        
    }
}