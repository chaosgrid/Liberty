#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bc00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c020);
CLANG_FORWARD_PROC_SYMBOL(public_6f563e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f569b0);

PROC_DECLARE(0x6f24c80, internal_6f24c80, public_6f24c80);
extern "C" NAKED register_t __cdecl internal_6f24c80()
{
    __asm
    {
        push esi
        push 0
        call public_6f4bc00
        mov esi, eax
        call public_6f4c020
        call public_6f569b0
        call public_6f563e0
        push esi
        call public_6f4bc00
        add esp, 8
        mov dword ptr ds : [public_6f61dfc], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f24c80)
    }
}
