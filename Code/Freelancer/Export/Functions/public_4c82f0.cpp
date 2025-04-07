#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8310);
CLANG_FORWARD_PROC_SYMBOL(public_4c8400);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c82f0, internal_4c82f0, public_4c82f0);
extern "C" NAKED register_t __cdecl internal_4c82f0()
{
    __asm
    {
/*FIXUP push offset public_5d6e24 @0x4c82f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e24
        mov ecx, offset public_6733dc
        call public_4c8400
/*FIXUP push offset _public_4c8310 @0x4c82ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c8310
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c82f0)
    }
}
