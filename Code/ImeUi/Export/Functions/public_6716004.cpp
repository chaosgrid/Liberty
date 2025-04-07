#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_6716940);

PROC_DECLARE(0x6716004, internal_6716004, public_6716004);
extern "C" NAKED register_t __cdecl internal_6716004()
{
    __asm
    {
/*FIXUP push offset _public_6716940 @0x6716004*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716940
        push dword ptr ds : [public_671d020]
/*FIXUP push offset public_6719350 @0x671600f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719350
/*FIXUP push offset public_671728c @0x6716014*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671728c
/*FIXUP push offset public_6717280 @0x6716019*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717280
        call public_671669b
        jmp dword ptr ds : [public_6719350]
        UNREACHABLE_TRAP(0x6716004)
    }
}
