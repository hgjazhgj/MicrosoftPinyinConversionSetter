#include <Windows.h>
#include <imm.h>
int main() {
    RegisterHotKey(NULL, IME_CMODE_CHINESE, MOD_CONTROL | MOD_SHIFT, VK_F1);
    RegisterHotKey(NULL, 0, 0, VK_ESCAPE);
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        switch (msg.message) {
        case WM_HOTKEY:
            SendMessage(ImmGetDefaultIMEWnd(GetForegroundWindow()), WM_IME_CONTROL, /* IMC_SETCONVERSIONMODE */ 2, msg.wParam);
        }
    }
}
