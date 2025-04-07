#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7dcb);

PROC_DECLARE(0x5b7445, internal_5b7445, public_5b7445);
extern "C" NAKED register_t __cdecl internal_5b7445()
{
    __asm
    {
/*FIXUP push offset _public_5b7dcb @0x5b7445*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7dcb
        push dword ptr ds : [public_67ee38]
/*FIXUP push offset public_616410 @0x5b7450*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616410
/*FIXUP push offset public_5e7260 @0x5b7455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7260
/*FIXUP push offset public_5e7248 @0x5b745a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call public_5b7b3d
        jmp dword ptr ds : [public_616410]
        UNREACHABLE_TRAP(0x5b7445)
    }
}
