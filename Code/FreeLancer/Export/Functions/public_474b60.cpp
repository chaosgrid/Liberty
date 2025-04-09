#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474b80);
CLANG_FORWARD_PROC_SYMBOL(public_477070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x474b60, internal_474b60, public_474b60);
extern "C" NAKED register_t __cdecl internal_474b60()
{
    __asm
    {
/*FIXUP push offset public_5cedac @0x474b60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cedac
        mov ecx, offset public_66dc18
        call public_477070
/*FIXUP push offset _public_474b80 @0x474b6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_474b80
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x474b60)
    }
}
