#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6336ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6336e90);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6336a90, internal_6336a90, public_6336a90);
extern "C" NAKED register_t __cdecl internal_6336a90()
{
    __asm
    {
        mov ecx, offset public_658a828
        call public_6336ab0
/*FIXUP push offset _public_6336e90 @0x6336a9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6336e90
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6336a90)
    }
}
