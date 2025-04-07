#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_671686c);

PROC_DECLARE(0x6715fba, internal_6715fba, public_6715fba);
extern "C" NAKED register_t __cdecl internal_6715fba()
{
    __asm
    {
/*FIXUP push offset _public_671686c @0x6715fba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_671686c
        push dword ptr ds : [public_671d028]
/*FIXUP push offset public_6719378 @0x6715fc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719378
/*FIXUP push offset public_6717260 @0x6715fca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717260
/*FIXUP push offset public_6717240 @0x6715fcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719378]
        UNREACHABLE_TRAP(0x6715fba)
    }
}
