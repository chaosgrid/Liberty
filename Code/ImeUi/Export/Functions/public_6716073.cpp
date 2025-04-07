#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716927);

PROC_DECLARE(0x6716073, internal_6716073, public_6716073);
extern "C" NAKED register_t __cdecl internal_6716073()
{
    __asm
    {
/*FIXUP push offset _public_6716927 @0x6716073*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716927
        push dword ptr ds : [public_671d014]
/*FIXUP push offset public_6719384 @0x671607e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719384
/*FIXUP push offset public_67172c0 @0x6716083*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172c0
/*FIXUP push offset public_6717224 @0x6716088*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717224
        call public_671669b
        jmp dword ptr ds : [public_6719384]
        UNREACHABLE_TRAP(0x6716073)
    }
}
