#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef730);
CLANG_FORWARD_PROC_SYMBOL(public_62efad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef710, internal_62ef710, public_62ef710);
extern "C" NAKED register_t __cdecl internal_62ef710()
{
    __asm
    {
        mov ecx, offset public_63fcaac
        call public_62efad0
/*FIXUP push offset _public_62ef730 @0x62ef71a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef730
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ef710)
    }
}
