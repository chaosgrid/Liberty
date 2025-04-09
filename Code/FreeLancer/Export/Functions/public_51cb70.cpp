#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7290);
CLANG_FORWARD_PROC_SYMBOL(public_51b480);
CLANG_FORWARD_PROC_SYMBOL(public_51cb70);
CLANG_FORWARD_PROC_SYMBOL(public_577590);

PROC_DECLARE(0x51cb70, internal_51cb70, public_51cb70);
extern "C" NAKED register_t __cdecl internal_51cb70()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5dc118 @0x51cb71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc118
        mov esi, ecx
        call public_577590
        push 0
        call public_4c7290
        add esp, 8
        mov ecx, esi
        pop esi
        jmp public_51b480
        UNREACHABLE_TRAP(0x51cb70)
    }
}
