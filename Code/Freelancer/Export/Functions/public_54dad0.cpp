#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54daf0);
CLANG_FORWARD_PROC_SYMBOL(public_54db50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x54dad0, internal_54dad0, public_54dad0);
extern "C" NAKED register_t __cdecl internal_54dad0()
{
    __asm
    {
        push 0x142
        mov ecx, offset public_6797d0
        call public_54daf0
/*FIXUP push offset _public_54db50 @0x54dadf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_54db50
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x54dad0)
    }
}
