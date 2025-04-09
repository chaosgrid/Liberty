#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5835e0);
CLANG_FORWARD_PROC_SYMBOL(public_5870f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5835c0, internal_5835c0, public_5835c0);
extern "C" NAKED register_t __cdecl internal_5835c0()
{
    __asm
    {
/*FIXUP push offset public_5e2528 @0x5835c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2528
        mov ecx, offset public_67c4c8
        call public_5870f0
/*FIXUP push offset _public_5835e0 @0x5835cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5835e0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5835c0)
    }
}
