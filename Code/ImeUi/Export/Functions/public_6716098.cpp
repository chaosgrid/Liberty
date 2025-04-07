#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716879);

PROC_DECLARE(0x6716098, internal_6716098, public_6716098);
extern "C" NAKED register_t __cdecl internal_6716098()
{
    __asm
    {
/*FIXUP push offset _public_6716879 @0x6716098*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716879
        push dword ptr ds : [public_671d010]
/*FIXUP push offset public_671937c @0x67160a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671937c
/*FIXUP push offset public_67172cc @0x67160a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172cc
/*FIXUP push offset public_6717240 @0x67160ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_671937c]
        UNREACHABLE_TRAP(0x6716098)
    }
}
