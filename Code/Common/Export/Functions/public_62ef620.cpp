#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef640);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef620, internal_62ef620, public_62ef620);
extern "C" NAKED register_t __cdecl internal_62ef620()
{
    __asm
    {
        mov ecx, offset public_63fcac0
        call public_62efad0
/*FIXUP push offset _public_62ef640 @0x62ef62a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef640
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef620)
    }
}
