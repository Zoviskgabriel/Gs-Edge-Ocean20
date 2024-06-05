# Gs-Edge-Ocean20

## Integrantes

    Felipe Ferreira - RM-553680

    Joseh Gabriel Trimboli Agra - RM-553094
    
*Projeto de Monitoramento dos Oceanos*

## Problema:
 - A necessidade de um monitoramento das aguas do oceano para combater a desinformação e aumentar a conscientização sobre a saúde dos oceanos e o impacto das mudanças climáticas 
  nas correntes marinhas. Assim proposto o desenvolvimento do um protótipo com Arduino para utilizar sensores que monitorem o oceano.

## Solucao do Projeto:

 - Este projeto vai monitorar a água dos oceanos usando um sistema de sensores de temperatura e Fotoresistor com um Arduino. Os dados coletados incluem a temperatura da água e a transparencia da água.
 - A ideia é fornecer informações sobre a saúde dos oceanos para as regioes proximas ao mar, a empresas e prestadores de servicos marinhos. Para que assim seja possivel ter um maior controle da poluicao de certas areas.

## Instruções de Uso

*Montagem do arduino:*
- Conecte todos os componentes conforme as conexões da imagem a baixo.
  
*Carregamento do Código:*
- Abra o Arduino IDE.
- Copie e cole o código fornecido neste github 
- Instale as seguintes bibliotecas: - OneWire, DallasTemperature
- Conecte o Arduino ao computador via cabo USB.
- Selecione a porta correta em Ferramentas > Porta.
- Clique em Carregar para enviar o código para o Arduino.

*Visualização dos Dados:*
- Abra o monitor serial no Arduino IDE para visualizar os dados em tempo real.

## Exemplo Wokwi:

- Wokwi: https://wokwi.com/projects/399883240126559233

*Link do video:*

 - Youtube:

## Componentes Necessários:

- Arduino Uno
- Sensor de Temperatura DS18B20
- Fotoresistor (LDR) 
- Resistor de 4.7kΩ
- Cabos de conexão

## Bibliotecas usadas:

 - OneWire Library: Para comunicação com o sensor DS18B20.
 - DallasTemperature Library: Para leitura de dados de temperatura do sensor DS18B20.

## Importância da Integração:

A coleta precisa de dados de temperatura e transparencia da água, possibilitada por este projeto, representa um passo crucial para a compreensão e gestão de diversos aspectos ambientais. Sua aplicação se estende a:

 - Análise e Monitoramento Ambiental: Fornecer informações relevantes para a avaliação da qualidade da água e a identificação de potenciais problemas.
 - Estudos sobre Mudanças Climáticas: Contribuir para a análise dos impactos das mudanças climáticas nos ecossistemas aquáticos.
 - Gestão de Recursos Hídricos: Oferecer dados para o monitoramento de habitats aquáticos e a proteção da biodiversidade.
 - Controle de Processos Industriais: Assegurar o cumprimento de normas e a otimização de processos que envolvem água.
 - A integração desta tecnologia em diferentes áreas garante a otimização da gestão ambiental e a tomada de decisões mais eficazes e sustentáveis.
  
## Conclusão:
- Este projeto é um sistema de monitoramento de temperatura, e claridade da água, Ele demonstra um enorme potencial para a área de monitoramento ambiental. Sua simplicidade e eficácia na coleta de dados o tornam uma ferramenta valiosa para diversas aplicações. Além 
  disso, sua arquitetura modular abre portas para futuros aprimoramentos, como a integração de sensores adicionais, a implementação de funcionalidades de análise de dados e a conexão a plataformas de monitoramento remoto.

## Ideias Futuras:

 - Integração com outros sensores ambientais (pH, salinidade).
 - Implementação de conectividade para monitoramento remoto.
 - Desenvolvimento de uma interface gráfica para visualização de dados.
 - Integração com serviços de armazenamento e análise de dados na nuvem
