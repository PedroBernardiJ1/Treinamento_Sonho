#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
    
    int mapa_esparso_A[7][7] = {
        {0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0}
    };

    int mapa_esparso_B[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };

    int mapa_esparso_C[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 0, 0, 1, 0, 0},
        {0, 1, 1, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
        {0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0, 1, 0, 0, 0, 0}
    };
    
    int caso {};

    cout << "1 -> MAPA 7 X 7" << endl;
    cout << "2 -> MAPA 8 X 8" << endl;
    cout << "3 -> MAPA 10 X 10" << endl;
    cout << "Escolha qual mapa deve ser utilizado:" << endl;
    cin >> caso;

    cout << endl;

    int linha {};
    int coluna {};
    float distancia {};
    int linha_minima {};
    int coluna_minima {};
    float distancia_minima = sqrt(pow (10, 2) + pow (10, 2));


    cout << "Informe seu destino:" << endl;
    cout << "Linha de destino : ";
    cin >> linha;
    cout << "Coluna de destino : ";
    cin >> coluna;

    cout << endl;

    cout << "Verificando coordenada [" << linha << ", " << coluna << "]..." << endl;

    if (caso == 1) {

        
        if (mapa_esparso_A[linha][coluna] == 1){

            cout << "Status: Destino Inválido! Obstáculo Detectado." << endl;
        
        } else {

            cout << "Status: Caminho Livre." << endl;
            cout << "Buscando obstáculo mais próximo..." << endl;
            
            for (int i = 1; i < 7; i++) {

                for (int j = 1; j < 7; j++) {

                    if (mapa_esparso_A[i][j] == 1) {

                        int dif_linha = abs(linha - i);
                        int dif_coluna = abs(coluna - j);
                        
                        distancia = sqrt(pow (dif_linha, 2) + pow (dif_coluna, 2));

                        if (distancia > 0) {
                            
                            if(distancia <= distancia_minima){

                                distancia_minima = distancia;
                                linha_minima = i;
                                coluna_minima = j;

                            }
                        }
                    }
                }
            }
        }

    } else if (caso == 2) {
        
        if (mapa_esparso_B[linha][coluna] == 1){

            cout << "Status: Destino Inválido! Obstáculo Detectado." << endl;
        
        } else {

            cout << "Status: Caminho Livre." << endl;
            cout << "Buscando obstáculo mais próximo..." << endl;
            
            for (int i = 1; i < 8; i++) {

                for (int j = 1; j < 8; j++) {

                    if (mapa_esparso_B[i][j] == 1) {

                        int dif_linha = abs(linha - i);
                        int dif_coluna = abs(coluna - j);
                        
                        distancia = sqrt(pow (dif_linha, 2) + pow (dif_coluna, 2));

                        if (distancia > 0) {
                            
                            if(distancia <= distancia_minima){

                                distancia_minima = distancia;
                                linha_minima = i;
                                coluna_minima = j;

                            }
                        }
                    }
                }
            }
        }

    } else if (caso == 3) {
        
        if (mapa_esparso_C[linha][coluna] == 1){

            cout << "Status: Destino Inválido! Obstáculo Detectado." << endl;
        
        } else {

            cout << "Status: Caminho Livre." << endl;
            cout << "Buscando obstáculo mais próximo..." << endl;
            
            for (int i = 1; i < 10; i++) {

                for (int j = 1; j < 10; j++) {

                    if (mapa_esparso_C[i][j] == 1) {

                        int dif_linha = abs(linha - i);
                        int dif_coluna = abs(coluna - j);
                        
                        distancia = sqrt(pow (dif_linha, 2) + pow (dif_coluna, 2));

                        if (distancia > 0) {
                            
                            if(distancia <= distancia_minima){

                                distancia_minima = distancia;
                                linha_minima = i;
                                coluna_minima = j;

                            }
                        }
                    }
                }
            }
        }

    } else {

        cout << "Caso não pode ser avaliado." << endl;

    }

    cout << fixed << setprecision (2);
    cout << "Obstáculo mais próximo encontrado em: [" << linha_minima << ", " << coluna_minima << "]" << endl;
    cout << "Distância Euclidiana: " << distancia_minima << endl;
    
    return 0;
}