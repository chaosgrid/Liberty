#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c290);
CLANG_FORWARD_PROC_SYMBOL(public_59c7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c270, internal_59c270, public_59c270);
extern "C" NAKED register_t __cdecl internal_59c270()
{
    __asm
    {
/*FIXUP push offset public_5e54a8 @0x59c270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e54a8
        mov ecx, offset public_67daec
        call public_59c7a0
/*FIXUP push offset _public_59c290 @0x59c27f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c290
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c270)
    }
}
