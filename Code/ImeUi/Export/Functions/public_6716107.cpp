#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_67168a2);

PROC_DECLARE(0x6716107, internal_6716107, public_6716107);
extern "C" NAKED register_t __cdecl internal_6716107()
{
    __asm
    {
/*FIXUP push offset _public_67168a2 @0x6716107*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67168a2
        push dword ptr ds : [public_671d004]
/*FIXUP push offset public_6719368 @0x6716112*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719368
/*FIXUP push offset public_67172fc @0x6716117*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172fc
/*FIXUP push offset public_6717240 @0x671611c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719368]
        UNREACHABLE_TRAP(0x6716107)
    }
}
