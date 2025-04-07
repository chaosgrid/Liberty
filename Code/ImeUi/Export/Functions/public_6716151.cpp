#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_671681a);

PROC_DECLARE(0x6716151, internal_6716151, public_6716151);
extern "C" NAKED register_t __cdecl internal_6716151()
{
    __asm
    {
/*FIXUP push offset _public_671681a @0x6716151*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_671681a
        push dword ptr ds : [public_671cffc]
/*FIXUP push offset public_6719370 @0x671615c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719370
/*FIXUP push offset public_671731c @0x6716161*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671731c
/*FIXUP push offset public_6717240 @0x6716166*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719370]
        UNREACHABLE_TRAP(0x6716151)
    }
}
