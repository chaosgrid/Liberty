#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d15);

PROC_DECLARE(0x5b748f, internal_5b748f, public_5b748f);
extern "C" NAKED register_t __cdecl internal_5b748f()
{
    __asm
    {
/*FIXUP push offset _public_5b7d15 @0x5b748f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d15
        push dword ptr ds : [public_67ee30]
/*FIXUP push offset public_61642c @0x5b749a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_61642c
/*FIXUP push offset public_5e7290 @0x5b749f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7290
/*FIXUP push offset public_5e7284 @0x5b74a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_61642c]
        UNREACHABLE_TRAP(0x5b748f)
    }
}
