#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552b80);
CLANG_FORWARD_PROC_SYMBOL(public_552c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x552b60, internal_552b60, public_552b60);
extern "C" NAKED register_t __cdecl internal_552b60()
{
    __asm
    {
        mov ecx, offset public_679900
        call public_552b80
/*FIXUP push offset _public_552c60 @0x552b6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_552c60
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x552b60)
    }
}
