#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7830);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca70);

PROC_DECLARE(0x6eb7830, internal_6eb7830, public_6eb7830);
extern "C" NAKED register_t __cdecl internal_6eb7830()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f1ca70
        mov dword ptr ds : [esi], offset public_6fb478c
        mov dword ptr ds : [esi+0x10], 0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb7830)
    }
}
