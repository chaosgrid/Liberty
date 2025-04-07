#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_67168fe);

PROC_DECLARE(0x6715f70, internal_6715f70, public_6715f70);
extern "C" NAKED register_t __cdecl internal_6715f70()
{
    __asm
    {
/*FIXUP push offset _public_67168fe @0x6715f70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67168fe
        push dword ptr ds : [public_671d030]
/*FIXUP push offset public_6719380 @0x6715f7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719380
/*FIXUP push offset public_6717230 @0x6715f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717230
/*FIXUP push offset public_6717224 @0x6715f85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717224
        call public_671669b
        jmp dword ptr ds : [public_6719380]
        UNREACHABLE_TRAP(0x6715f70)
    }
}
