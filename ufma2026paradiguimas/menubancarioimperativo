@cogumeloanao
    VAR
        menu: INTEIRO
        cont: LOGICO
        saldo, deposito, saque: REAL
    
  INIcio
    cont <- VERDADEIRO
    saldo <- 129.00

    ENQUANTO cont = VERDADEIRO FACA
        ESCREVER "1 consultar saldo"
        ESCREVER "2 realizar deposito"
        ESCREVER "3 realizar saque"
        ESCREVER "4 sair"
        LER menu

        SE menu = 1 ENTAO
            ESCREVER "saldo disponivel eh ", saldo
        FIM_SE

        SE menu = 2 ENTAO
            ESCREVER "faca o seu deposito"
            LER deposito
            saldo <- saldo + deposito
            ESCREVER "novo saldo eh ", saldo
        FIM_SE

        SE menu = 3 ENTAO
            ESCREVER "faca seu saque"
            LER saque
            
            SE saque > saldo ENTAO
                ESCREVER "saldo insuficiente"
            SENAO_SE saque <= 0 ENTAO
                ESCREVER "digite um valor valido"
            SENAO
                saldo <- saldo - saque
                ESCREVER "saque efetuado, novo saldo eh ", saldo
            FIM_SE
        FIM_SE

        SE menu = 4 ENTAO
            cont <- FALSO
            ESCREVER "saindo"
        FIM_SE
    FIM_ENQUANTO
FIM_ALGORITMO
