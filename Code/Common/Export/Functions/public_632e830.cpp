#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e850);
CLANG_FORWARD_PROC_SYMBOL(public_632e950);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x632e830, internal_632e830, public_632e830);
extern "C" NAKED register_t __cdecl internal_632e830()
{
    __asm
    {
        mov ecx, offset public_640a728
        call public_632e850
/*FIXUP push offset _public_632e950 @0x632e83a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_632e950
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x632e830)
    }
}
