#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f53a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f5380, internal_4f5380, public_4f5380);
extern "C" NAKED register_t __cdecl internal_4f5380()
{
    __asm
    {
        mov ecx, offset public_674c0c
        call public_4f53b0
/*FIXUP push offset _public_4f53a0 @0x4f538a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f53a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f5380)
    }
}
