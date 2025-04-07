#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412bb0);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

PROC_DECLARE(0x412a50, internal_412a50, public_412a50);
extern "C" NAKED register_t __cdecl internal_412a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418996
        mov ecx, esi
        call public_412bb0
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x412a50)
    }
}
