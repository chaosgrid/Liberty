#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef910);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef8f0, internal_62ef8f0, public_62ef8f0);
extern "C" NAKED register_t __cdecl internal_62ef8f0()
{
    __asm
    {
        mov ecx, offset public_63fca84
        call public_62efad0
/*FIXUP push offset _public_62ef910 @0x62ef8fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef910
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef8f0)
    }
}
