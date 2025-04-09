#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d9d);

PROC_DECLARE(0x5b7420, internal_5b7420, public_5b7420);
extern "C" NAKED register_t __cdecl internal_5b7420()
{
    __asm
    {
/*FIXUP push offset _public_5b7d9d @0x5b7420*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d9d
        push dword ptr ds : [public_67ee3c]
/*FIXUP push offset public_61640c @0x5b742b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_61640c
/*FIXUP push offset public_5e7254 @0x5b7430*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7254
/*FIXUP push offset public_5e7248 @0x5b7435*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call public_5b7b3d
        jmp dword ptr ds : [public_61640c]
        UNREACHABLE_TRAP(0x5b7420)
    }
}
