#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ca50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c2d0, internal_59c2d0, public_59c2d0);
extern "C" NAKED register_t __cdecl internal_59c2d0()
{
    __asm
    {
/*FIXUP push offset public_5e5464 @0x59c2d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5464
        mov ecx, offset public_67da94
        call public_59ca50
/*FIXUP push offset _public_59c2f0 @0x59c2df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c2f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c2d0)
    }
}
