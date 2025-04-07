#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efa00);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef9e0, internal_62ef9e0, public_62ef9e0);
extern "C" NAKED register_t __cdecl internal_62ef9e0()
{
    __asm
    {
        mov ecx, offset public_63fca70
        call public_62efad0
/*FIXUP push offset _public_62efa00 @0x62ef9ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62efa00
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef9e0)
    }
}
