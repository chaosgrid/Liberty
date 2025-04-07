#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eeb70);

PROC_DECLARE(0x62d2b00, internal_62d2b00, public_62d2b00);
extern "C" NAKED register_t __cdecl internal_62d2b00()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        add ecx, 0x142C
        jmp public_62eeb70
        UNREACHABLE_TRAP(0x62d2b00)
    }
}
