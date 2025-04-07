#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4de0);
CLANG_FORWARD_PROC_SYMBOL(public_65f51d0);

PROC_DECLARE(0x65f51d0, internal_65f51d0, public_65f51d0);
extern "C" NAKED register_t __cdecl internal_65f51d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65f4de0
        mov eax, dword ptr ds : [esi+0x14]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f51d0)
    }
}
