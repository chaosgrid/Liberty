#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bcf7);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bd09);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f32a);

PROC_DECLARE(0x6d2bcf7, internal_6d2bcf7, public_6d2bcf7);
extern "C" NAKED register_t __cdecl internal_6d2bcf7()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset _public_6d2bd09 @0x6d2bcfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2bd09
        call public_6d2f32a
        add esp, 4
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bcf7)
    }
}
