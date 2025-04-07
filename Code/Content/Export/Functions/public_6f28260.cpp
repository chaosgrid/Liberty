#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c90);

PROC_DECLARE(0x6f28260, internal_6f28260, public_6f28260);
extern "C" NAKED register_t __cdecl internal_6f28260()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        add ecx, 0x10C
        push ecx
        mov ecx, esi
        call public_6f57c90
        mov ecx, esi
        call public_6f57b00
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f28260)
    }
}
