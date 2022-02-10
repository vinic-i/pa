# Interface Escultor 3D

Repositório que contém a terceira etapa do Escultor 3D que servirá como nota para terceira unidade do componente curricular Programação Avançada - DCA1202.

Utilizando uma interface desenvolvida através do QTCreator, o usuário pode desenhar diversas figuras, como cubos, paralelepípedos, esferas, elipses, que são geradas através de voxels. O arquivo resultado do desenho é salvo no formato OFF, e pode ser aberto utilizando os softwares MeshLab (Windows e Linux) e GeomView(Linux).

# Integrantes do grupo:

Adson Emanuel Santos Amaral;

Caio Matheus Lopes Ribeiro.



# Interface

![interface](https://user-images.githubusercontent.com/56892661/102609243-eb1d2900-4109-11eb-9d8f-c4b64cb5dd74.png)

<p align="justify"> A interface é por onde o usuário irá comandar o programa, ela disponibiliza as funções que serão detalhadas mais a frente. Por padrão, a área de desenho (denominada Canvas) possui 50x50x50, a ferramenta de desenho "PutVoxel", e os canais de RGB zerados, e transparência no máximo. </p align="justify">

# Canvas

![canvas e funções](https://user-images.githubusercontent.com/56892661/102610688-5c5ddb80-410c-11eb-8d08-ce637635457c.png)

O canvas é a área na qual o usuário irá desenhar utilizando as funções que são apresentadas logo abaixo dele.

# Definindo o tamanho do Canvas

![criacanvas](https://user-images.githubusercontent.com/56892661/102610677-5b2cae80-410c-11eb-939f-4e4bdc0ee9a2.png)

Através dessa ferramenta o usuário pode definir o tamanho do Canvas no qual os desenhos serão feitos.

# Definindo os raios e dimensões das figuras.

![dimensionamento](https://user-images.githubusercontent.com/56892661/102610680-5b2cae80-410c-11eb-8356-91241226c57f.png)

<p align="justify"> Aqui o usuário pode definir os raios que deseja desenhar as esferas e elipses, bem como as dimensões para o desenho da caixa. (As medidas escolhidas também valem para as funções de cortar).</p align="justify">

# Profundidade

![profundidade](https://user-images.githubusercontent.com/56892661/102610685-5bc54500-410c-11eb-9f57-ed4db16f3b43.png)

<p align="justify"> Escolhendo entre as opções <i> XY, YZ e XZ </i> Alterando a profundidade o usuário consegue caminhar em um dos eixos, após fixar o plano escolhido anteriormente. </p align="justify">

# Escolhendo a cor e a transparência

![cor e transparência](https://user-images.githubusercontent.com/56892661/102610676-5a941800-410c-11eb-9af5-32313ef094ef.png)

<p align="justify"> O usuário consegue escolher o valor da cor alterando os parâmetros RGB, que variam de 1~245 (não está variando de 0~255 devido a empecilhos com a forma como MeshLab lê os canais RGB.).
Além da escolha das cores, o usuário também pode escolher a transparência da figura que ele está desenhando, através do parâmetro A. </p align="justify">

# Exemplos de execução.

![canvas com coração](https://user-images.githubusercontent.com/56892661/102610687-5c5ddb80-410c-11eb-8688-b2a88eaba3d2.png)

Utilizando apenas a função PutVoxel, foi desenhado um coração para ilustrar o funcionamento do programa.

<p align="justify"> Após a conclusão do desenho, o usuário pode acessar o menu ao clicar na opção "File", localizada no canto superior esquerdo da tela. A partir dela ele pode salvar o arquivo (ou sair do programa). </p align="justify">

![menu](https://user-images.githubusercontent.com/56892661/102613041-8e713c80-4110-11eb-9979-2a0e98383e91.png)
![confirmacao de salvar](https://user-images.githubusercontent.com/56892661/102610672-59fb8180-410c-11eb-8e77-4caf6aabef09.png)

Em seguida, o arquivo gerado pode ser aberto utilizando um dos softwares anteriormente comentados: MeshLab ou GeomView.

![arquivogerado](https://user-images.githubusercontent.com/56892661/102611173-2ff68f00-410d-11eb-9e36-6a3f1155b834.png)

Alguns outros desenhos gerados pelo programa:

![paiasso](https://user-images.githubusercontent.com/56892661/102615462-bc588000-4114-11eb-9a43-634a6a46a039.png)
![paiassov](https://user-images.githubusercontent.com/56892661/102615463-bd89ad00-4114-11eb-9125-949b419677f3.png)

Neste palhaço, as lágrimas foram desenhadas em profundidades diferentes.

Já nesse outro exemplo, foram colocados figuras e cortes aleatórios, apenas com a finalidade de mostrar uma visualização de como ficam as formas quando desenhadas em várias profundidades diferentes.

![seila](https://user-images.githubusercontent.com/56892661/102615466-bd89ad00-4114-11eb-9ec3-2e4e378a81f5.png)
