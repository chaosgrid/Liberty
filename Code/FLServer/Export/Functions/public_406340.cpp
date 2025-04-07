#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4175f0);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

PROC_DECLARE(0x406340, internal_406340, public_406340);
extern "C" NAKED register_t __cdecl internal_406340()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418996
        add esi, 0x60
        push esi
        push 1
        call public_4175f0
        add esp, 8
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x406340)
    }
}
