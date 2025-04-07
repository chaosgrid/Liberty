#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ca4);

PROC_DECLARE(0x5b7548, internal_5b7548, public_5b7548);
extern "C" NAKED register_t __cdecl internal_5b7548()
{
    __asm
    {
/*FIXUP push offset _public_5b7ca4 @0x5b7548*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7ca4
        push dword ptr ds : [public_67ee1c]
/*FIXUP push offset public_61641c @0x5b7553*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_61641c
/*FIXUP push offset public_5e72ec @0x5b7558*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72ec
/*FIXUP push offset public_5e72bc @0x5b755d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72bc
        call public_5b7b3d
        jmp dword ptr ds : [public_61641c]
        UNREACHABLE_TRAP(0x5b7548)
    }
}
