#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_671680d);

PROC_DECLARE(0x6716029, internal_6716029, public_6716029);
extern "C" NAKED register_t __cdecl internal_6716029()
{
    __asm
    {
/*FIXUP push offset _public_671680d @0x6716029*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_671680d
        push dword ptr ds : [public_671d01c]
/*FIXUP push offset public_6719360 @0x6716034*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719360
/*FIXUP push offset public_67172a4 @0x6716039*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172a4
/*FIXUP push offset public_6717240 @0x671603e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719360]
        UNREACHABLE_TRAP(0x6716029)
    }
}
