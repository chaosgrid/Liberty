#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d67);

PROC_DECLARE(0x5b74b4, internal_5b74b4, public_5b74b4);
extern "C" NAKED register_t __cdecl internal_5b74b4()
{
    __asm
    {
/*FIXUP push offset _public_5b7d67 @0x5b74b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d67
        push dword ptr ds : [public_67ee2c]
/*FIXUP push offset public_616434 @0x5b74bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616434
/*FIXUP push offset public_5e72a0 @0x5b74c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72a0
/*FIXUP push offset public_5e7284 @0x5b74c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616434]
        UNREACHABLE_TRAP(0x5b74b4)
    }
}
