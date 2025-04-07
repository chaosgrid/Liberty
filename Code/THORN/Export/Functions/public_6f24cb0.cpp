#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bc00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c140);

PROC_DECLARE(0x6f24cb0, internal_6f24cb0, public_6f24cb0);
extern "C" NAKED register_t __cdecl internal_6f24cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61dfc]
        push esi
        push eax
        call public_6f4bc00
        mov esi, eax
        call public_6f4c140
        push esi
        call public_6f4bc00
        add esp, 8
        mov dword ptr ds : [public_6f61dfc], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f24cb0)
    }
}
