#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7c9f);

PROC_DECLARE(0x5b74fe, internal_5b74fe, public_5b74fe);
extern "C" NAKED register_t __cdecl internal_5b74fe()
{
    __asm
    {
/*FIXUP push offset _public_5b7c9f @0x5b74fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7c9f
        push dword ptr ds : [public_67ee24]
/*FIXUP push offset public_616418 @0x5b7509*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616418
/*FIXUP push offset public_5e72cc @0x5b750e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72cc
/*FIXUP push offset public_5e72bc @0x5b7513*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72bc
        call public_5b7b3d
        jmp dword ptr ds : [public_616418]
        UNREACHABLE_TRAP(0x5b74fe)
    }
}
