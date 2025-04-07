#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716843);

PROC_DECLARE(0x671612c, internal_671612c, public_671612c);
extern "C" NAKED register_t __cdecl internal_671612c()
{
    __asm
    {
/*FIXUP push offset _public_6716843 @0x671612c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716843
        push dword ptr ds : [public_671d000]
/*FIXUP push offset public_6719374 @0x6716137*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719374
/*FIXUP push offset public_6717310 @0x671613c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717310
/*FIXUP push offset public_6717240 @0x6716141*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719374]
        UNREACHABLE_TRAP(0x671612c)
    }
}
