opcao = 0

while (opcao != 4):
    
    print ("""\n1 - Iniciar sistema
2 - Configurações
3 - Ajuda
4 - Encerrar sistema""")
    
    opcao = int (input ("\nDigite a opção desejada: "))

    if (opcao == 1):
        print ("Iniciar sistema")
    
    elif (opcao == 2):
        print ("Configurações")

    elif (opcao == 3):
        print ("Ajuda")
    
    elif (opcao == 4):
        print ("Encerrar sistema")
        break

    else:
        print ("Opção inválida")
