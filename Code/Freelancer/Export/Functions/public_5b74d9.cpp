#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7cd2);

PROC_DECLARE(0x5b74d9, internal_5b74d9, public_5b74d9);
extern "C" NAKED register_t __cdecl internal_5b74d9()
{
    __asm
    {
/*FIXUP push offset _public_5b7cd2 @0x5b74d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7cd2
        push dword ptr ds : [public_67ee28]
/*FIXUP push offset public_616420 @0x5b74e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616420
/*FIXUP push offset public_5e72b0 @0x5b74e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72b0
/*FIXUP push offset public_5e7284 @0x5b74ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616420]
        UNREACHABLE_TRAP(0x5b74d9)
    }
}
