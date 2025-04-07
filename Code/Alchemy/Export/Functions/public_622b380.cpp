#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x622b380, internal_622b380, public_622b380);
extern "C" NAKED register_t __cdecl internal_622b380()
{
    __asm
    {
        mov ecx, offset public_6257a9c
        call public_623e890
/*FIXUP push offset _public_622b3a0 @0x622b38a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_622b3a0
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x622b380)
    }
}
