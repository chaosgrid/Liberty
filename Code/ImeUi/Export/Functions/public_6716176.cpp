#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671669b);
CLANG_FORWARD_PROC_SYMBOL(public_67167fb);

PROC_DECLARE(0x6716176, internal_6716176, public_6716176);
extern "C" NAKED register_t __cdecl internal_6716176()
{
    __asm
    {
/*FIXUP push offset _public_67167fb @0x6716176*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67167fb
        push dword ptr ds : [public_671cff8]
/*FIXUP push offset public_6719358 @0x6716181*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719358
/*FIXUP push offset public_6717328 @0x6716186*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717328
/*FIXUP push offset public_6717240 @0x671618b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call public_671669b
        jmp dword ptr ds : [public_6719358]
        UNREACHABLE_TRAP(0x6716176)
    }
}
