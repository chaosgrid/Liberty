#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366180);
CLANG_FORWARD_PROC_SYMBOL(public_63662a0);
CLANG_FORWARD_PROC_SYMBOL(public_6366340);

PROC_DECLARE(0x6366180, internal_6366180, public_6366180);
extern "C" NAKED register_t __cdecl internal_6366180()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63662a0
        mov ecx, esi
        call public_6366340
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6366180)
    }
}
