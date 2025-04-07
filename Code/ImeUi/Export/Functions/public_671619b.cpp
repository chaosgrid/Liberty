#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716927);

PROC_DECLARE(0x671619b, internal_671619b, public_671619b);
extern "C" NAKED register_t __cdecl internal_671619b()
{
    __asm
    {
/*FIXUP push offset _public_6716927 @0x671619b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716927
        push dword ptr ds : [public_671cff4]
/*FIXUP push offset public_6719388 @0x67161a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719388
/*FIXUP push offset public_6717338 @0x67161ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717338
/*FIXUP push offset public_6717224 @0x67161b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717224
        call public_671669b
        jmp dword ptr ds : [public_6719388]
        UNREACHABLE_TRAP(0x671619b)
    }
}
