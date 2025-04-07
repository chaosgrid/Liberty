#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273c30);

PROC_DECLARE(0x6273bb0, internal_6273bb0, public_6273bb0);
extern "C" NAKED register_t __cdecl internal_6273bb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6273c30
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6273bb0)
    }
}
