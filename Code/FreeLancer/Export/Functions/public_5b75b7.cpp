#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d3e);

PROC_DECLARE(0x5b75b7, internal_5b75b7, public_5b75b7);
extern "C" NAKED register_t __cdecl internal_5b75b7()
{
    __asm
    {
/*FIXUP push offset _public_5b7d3e @0x5b75b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d3e
        push dword ptr ds : [public_67ee10]
/*FIXUP push offset public_616430 @0x5b75c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616430
/*FIXUP push offset public_5e7320 @0x5b75c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7320
/*FIXUP push offset public_5e7284 @0x5b75cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616430]
        UNREACHABLE_TRAP(0x5b75b7)
    }
}
