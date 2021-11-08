#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <ctime>

using namespace sf;


int main()
{
    RenderWindow window(VideoMode(1500, 1200), "TYPE TRAIN!");
    
    Texture keyboard_bg;
    keyboard_bg.loadFromFile("images/keyboard.jpg");

    Texture keyboard_press_A_bg;
    keyboard_press_A_bg.loadFromFile("images/keyboard_press_A.png");

    Texture keyboard_press_B_bg;
    keyboard_press_B_bg.loadFromFile("images/keyboard_press_B.png");

    Texture keyboard_press_C_bg;
    keyboard_press_C_bg.loadFromFile("images/keyboard_press_C.png");

    Texture keyboard_press_D_bg;
    keyboard_press_D_bg.loadFromFile("images/keyboard_press_D.png");

    Texture keyboard_press_E_bg;
    keyboard_press_E_bg.loadFromFile("images/keyboard_press_E.png");

    Texture keyboard_press_F_bg;
    keyboard_press_F_bg.loadFromFile("images/keyboard_press_F.png");

    Texture keyboard_press_G_bg;
    keyboard_press_G_bg.loadFromFile("images/keyboard_press_G.png");

    Texture keyboard_press_H_bg;
    keyboard_press_H_bg.loadFromFile("images/keyboard_press_H.png");

    Texture keyboard_press_I_bg;
    keyboard_press_I_bg.loadFromFile("images/keyboard_press_I.png");

    Texture keyboard_press_J_bg;
    keyboard_press_J_bg.loadFromFile("images/keyboard_press_J.png");

    Texture keyboard_press_K_bg;
    keyboard_press_K_bg.loadFromFile("images/keyboard_press_K.png");

    Texture keyboard_press_L_bg;
    keyboard_press_L_bg.loadFromFile("images/keyboard_press_L.png");

    Texture keyboard_press_M_bg;
    keyboard_press_M_bg.loadFromFile("images/keyboard_press_M.png");

    Texture keyboard_press_N_bg;
    keyboard_press_N_bg.loadFromFile("images/keyboard_press_N.png");

    Texture keyboard_press_O_bg;
    keyboard_press_O_bg.loadFromFile("images/keyboard_press_O.png");

    Texture keyboard_press_P_bg;
    keyboard_press_P_bg.loadFromFile("images/keyboard_press_P.png");

    Texture keyboard_press_Q_bg;
    keyboard_press_Q_bg.loadFromFile("images/keyboard_press_Q.png");

    Texture keyboard_press_R_bg;
    keyboard_press_R_bg.loadFromFile("images/keyboard_press_R.png");

    Texture keyboard_press_S_bg;
    keyboard_press_S_bg.loadFromFile("images/keyboard_press_S.png");

    Texture keyboard_press_T_bg;
    keyboard_press_T_bg.loadFromFile("images/keyboard_press_T.png");

    Texture keyboard_press_U_bg;
    keyboard_press_U_bg.loadFromFile("images/keyboard_press_U.png");

    Texture keyboard_press_V_bg;
    keyboard_press_V_bg.loadFromFile("images/keyboard_press_V.png");

    Texture keyboard_press_W_bg;
    keyboard_press_W_bg.loadFromFile("images/keyboard_press_W.png");

    Texture keyboard_press_X_bg;
    keyboard_press_X_bg.loadFromFile("images/keyboard_press_X.png");

    Texture keyboard_press_Y_bg;
    keyboard_press_Y_bg.loadFromFile("images/keyboard_press_Y.png");

    Texture keyboard_press_Z_bg;
    keyboard_press_Z_bg.loadFromFile("images/keyboard_press_Z.png");

    Texture packman_bg;
    packman_bg.loadFromFile("images/packman.png");

    Texture input_bg;
    input_bg.loadFromFile("images/input.png");

    float currenFrame = 0;
    
    Sprite packman;
    packman.setTexture(packman_bg);
    packman.setTextureRect(IntRect(99*int(currenFrame), 0, 99, 99));
    packman.setPosition(110, 200);


    Sprite keyboard;
    keyboard.setTexture(keyboard_bg);
    keyboard.setPosition(200, 500);

    Sprite keyboard_press_A;
    keyboard_press_A.setTexture(keyboard_press_A_bg);
    keyboard_press_A.setPosition(200, 500);

    Sprite keyboard_press_B;
    keyboard_press_B.setTexture(keyboard_press_B_bg);
    keyboard_press_B.setPosition(200, 500);

    Sprite keyboard_press_C;
    keyboard_press_C.setTexture(keyboard_press_C_bg);
    keyboard_press_C.setPosition(200, 500);

    Sprite keyboard_press_D;
    keyboard_press_D.setTexture(keyboard_press_D_bg);
    keyboard_press_D.setPosition(200, 500);

    Sprite keyboard_press_E;
    keyboard_press_E.setTexture(keyboard_press_E_bg);
    keyboard_press_E.setPosition(200, 500);

    Sprite keyboard_press_F;
    keyboard_press_F.setTexture(keyboard_press_F_bg);
    keyboard_press_F.setPosition(200, 500);

    Sprite keyboard_press_G;
    keyboard_press_G.setTexture(keyboard_press_G_bg);
    keyboard_press_G.setPosition(200, 500);

    Sprite keyboard_press_H;
    keyboard_press_H.setTexture(keyboard_press_H_bg);
    keyboard_press_H.setPosition(200, 500);

    Sprite keyboard_press_I;
    keyboard_press_I.setTexture(keyboard_press_I_bg);
    keyboard_press_I.setPosition(200, 500);

    Sprite keyboard_press_J;
    keyboard_press_J.setTexture(keyboard_press_J_bg);
    keyboard_press_J.setPosition(200, 500);

    Sprite keyboard_press_K;
    keyboard_press_K.setTexture(keyboard_press_K_bg);
    keyboard_press_K.setPosition(200, 500);

    Sprite keyboard_press_L;
    keyboard_press_L.setTexture(keyboard_press_L_bg);
    keyboard_press_L.setPosition(200, 500);

    Sprite keyboard_press_M;
    keyboard_press_M.setTexture(keyboard_press_M_bg);
    keyboard_press_M.setPosition(200, 500);

    Sprite keyboard_press_N;
    keyboard_press_N.setTexture(keyboard_press_N_bg);
    keyboard_press_N.setPosition(200, 500);

    Sprite keyboard_press_O;
    keyboard_press_O.setTexture(keyboard_press_O_bg);
    keyboard_press_O.setPosition(200, 500);

    Sprite keyboard_press_P;
    keyboard_press_P.setTexture(keyboard_press_P_bg);
    keyboard_press_P.setPosition(200, 500);

    Sprite keyboard_press_Q;
    keyboard_press_Q.setTexture(keyboard_press_Q_bg);
    keyboard_press_Q.setPosition(200, 500);

    Sprite keyboard_press_R;
    keyboard_press_R.setTexture(keyboard_press_R_bg);
    keyboard_press_R.setPosition(200, 500);

    Sprite keyboard_press_S;
    keyboard_press_S.setTexture(keyboard_press_S_bg);
    keyboard_press_S.setPosition(200, 500);

    Sprite keyboard_press_T;
    keyboard_press_T.setTexture(keyboard_press_T_bg);
    keyboard_press_T.setPosition(200, 500);

    Sprite keyboard_press_U;
    keyboard_press_U.setTexture(keyboard_press_U_bg);
    keyboard_press_U.setPosition(200, 500);

    Sprite keyboard_press_V;
    keyboard_press_V.setTexture(keyboard_press_V_bg);
    keyboard_press_V.setPosition(200, 500);

    Sprite keyboard_press_W;
    keyboard_press_W.setTexture(keyboard_press_W_bg);
    keyboard_press_W.setPosition(200, 500);

    Sprite keyboard_press_X;
    keyboard_press_X.setTexture(keyboard_press_X_bg);
    keyboard_press_X.setPosition(200, 500);

    Sprite keyboard_press_Y;
    keyboard_press_Y.setTexture(keyboard_press_Y_bg);
    keyboard_press_Y.setPosition(200, 500);

    Sprite keyboard_press_Z;
    keyboard_press_Z.setTexture(keyboard_press_Z_bg);
    keyboard_press_Z.setPosition(200, 500);
    


    Font font;
    if (!font.loadFromFile("fonts/times.ttf"))
        return EXIT_FAILURE;
    Text text("Hello SFML", font, 100);

    std::vector<char> svector;
    std::string str;

    str = ' ';

    for (int i = 0; i < 17; i++)
    {
        svector.push_back(rand() % 26 + 65);
        str += svector[i];
    }
    
    text.setString(str);
    text.setFillColor(Color::Black);
    text.setPosition(210, 180);


    Sprite input;
    input.setTexture(input_bg);
    input.setPosition(100, 190);

    
   
    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        } 

        currenFrame += 0.001;
        if (currenFrame > 3) currenFrame -= 3;
        packman.setTextureRect(IntRect(99 * int(currenFrame), 0, 99, 99));

        window.clear();
        window.draw(input);
        window.draw(text);
        window.draw(packman);
        window.draw(keyboard);
        

        for(int i=0; i<str.size(); i++){
            
            char tempChar = str[i];
            
            if (Keyboard::isKeyPressed(Keyboard::A)){
                
                window.draw(keyboard_press_A);
                
                if(tempChar == 'B' && str[i - 1] == ' ') {
                        packman.move(50, 0);
                        str[i] = ' ';
                        text.setString(str);
                }   
            }
            else if (Keyboard::isKeyPressed(Keyboard::B)){
                window.draw(keyboard_press_B);

                if (tempChar == 'B' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }
            
            }
            else if (Keyboard::isKeyPressed(Keyboard::C)) {
                window.draw(keyboard_press_C);

                if (tempChar == 'C' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }
            else if (Keyboard::isKeyPressed(Keyboard::D)) {
                window.draw(keyboard_press_D);

                if (tempChar == 'D' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }
            else if (Keyboard::isKeyPressed(Keyboard::E)) {
                window.draw(keyboard_press_E);

                if (tempChar == 'E' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::F)) {
                window.draw(keyboard_press_F);

                if (tempChar == 'F' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::G)) {
                window.draw(keyboard_press_G);

                if (tempChar == 'G' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::H)) {
                window.draw(keyboard_press_H);

                if (tempChar == 'H' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::I)) {
                window.draw(keyboard_press_I);

                if (tempChar == 'I' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::J)) {
                window.draw(keyboard_press_J);

                if (tempChar == 'J' && str[i - 1] == ' ') {
                    packman.move(50, 0);
                    str[i] = ' ';
                    text.setString(str);
                }

            }

            else if (Keyboard::isKeyPressed(Keyboard::K)) {
            window.draw(keyboard_press_K);

            if (tempChar == 'K' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::L)) {
            window.draw(keyboard_press_L);

            if (tempChar == 'L' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::M)) {
            window.draw(keyboard_press_M);

            if (tempChar == 'M' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::N)) {
            window.draw(keyboard_press_N);

            if (tempChar == 'N' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::O)) {
            window.draw(keyboard_press_O);

            if (tempChar == 'O' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::P)) {
            window.draw(keyboard_press_P);

            if (tempChar == 'P' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::Q)) {
            window.draw(keyboard_press_Q);

            if (tempChar == 'Q' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::R)) {
            window.draw(keyboard_press_R);

            if (tempChar == 'R' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::S)) {
            window.draw(keyboard_press_S);

            if (tempChar == 'S' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::T)) {
            window.draw(keyboard_press_T);

            if (tempChar == 'T' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::U)) {
            window.draw(keyboard_press_U);

            if (tempChar == 'U' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::V)) {
            window.draw(keyboard_press_V);

            if (tempChar == 'V' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::X)) {
            window.draw(keyboard_press_X);

            if (tempChar == 'X' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::W)) {
            window.draw(keyboard_press_W);

            if (tempChar == 'W' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::Y)) {
            window.draw(keyboard_press_Y);

            if (tempChar == 'Y' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

            else if (Keyboard::isKeyPressed(Keyboard::Z)) {
            window.draw(keyboard_press_Z);

            if (tempChar == 'Z' && str[i - 1] == ' ') {
                packman.move(50, 0);
                str[i] = ' ';
                text.setString(str);
            }

            }

        }

        window.display();
        
    }

    return 0;
}
