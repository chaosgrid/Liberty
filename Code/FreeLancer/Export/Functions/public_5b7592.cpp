#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d90);

PROC_DECLARE(0x5b7592, internal_5b7592, public_5b7592);
extern "C" NAKED register_t __cdecl internal_5b7592()
{
    __asm
    {
/*FIXUP push offset _public_5b7d90 @0x5b7592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d90
        push dword ptr ds : [public_67ee14]
/*FIXUP push offset public_616438 @0x5b759d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616438
/*FIXUP push offset public_5e7310 @0x5b75a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7310
/*FIXUP push offset public_5e7284 @0x5b75a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616438]
        UNREACHABLE_TRAP(0x5b7592)
    }
}
