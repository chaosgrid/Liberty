#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ef40);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x620ef20, internal_620ef20, public_620ef20);
extern "C" NAKED register_t __cdecl internal_620ef20()
{
    __asm
    {
        mov ecx, offset public_62579a4
        call public_623e890
/*FIXUP push offset _public_620ef40 @0x620ef2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_620ef40
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x620ef20)
    }
}
