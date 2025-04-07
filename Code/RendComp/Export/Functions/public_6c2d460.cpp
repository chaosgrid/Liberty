#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d460);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d480);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d490);

PROC_DECLARE(0x6c2d460, internal_6c2d460, public_6c2d460);
extern "C" NAKED register_t __cdecl internal_6c2d460()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+8], 0
        call public_6c2d480
        mov ecx, esi
        pop esi
        jmp public_6c2d490
        UNREACHABLE_TRAP(0x6c2d460)
    }
}
