#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bdb4);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bdc6);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f32a);

PROC_DECLARE(0x6d2bdb4, internal_6d2bdb4, public_6d2bdb4);
extern "C" NAKED register_t __cdecl internal_6d2bdb4()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset _public_6d2bdc6 @0x6d2bdb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2bdc6
        call public_6d2f32a
        add esp, 4
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bdb4)
    }
}
