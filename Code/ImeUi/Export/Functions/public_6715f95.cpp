#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_671680d);

PROC_DECLARE(0x6715f95, internal_6715f95, public_6715f95);
extern "C" NAKED register_t __cdecl internal_6715f95()
{
    __asm
    {
/*FIXUP push offset _public_671680d @0x6715f95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_671680d
        push dword ptr ds : [public_671d02c]
/*FIXUP push offset public_6719364 @0x6715fa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719364
/*FIXUP push offset public_6717250 @0x6715fa5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717250
/*FIXUP push offset public_6717240 @0x6715faa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719364]
        UNREACHABLE_TRAP(0x6715f95)
    }
}
