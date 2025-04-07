#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef550);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef530, internal_62ef530, public_62ef530);
extern "C" NAKED register_t __cdecl internal_62ef530()
{
    __asm
    {
        mov ecx, offset public_63fcad4
        call public_62efad0
/*FIXUP push offset _public_62ef550 @0x62ef53a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef550
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef530)
    }
}
