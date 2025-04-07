#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef460);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef440, internal_62ef440, public_62ef440);
extern "C" NAKED register_t __cdecl internal_62ef440()
{
    __asm
    {
        mov ecx, offset public_63fcae8
        call public_62efad0
/*FIXUP push offset _public_62ef460 @0x62ef44a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef460
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef440)
    }
}
