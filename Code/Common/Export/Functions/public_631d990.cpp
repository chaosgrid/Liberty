#include "Common-PCH.h"

PROC_DECLARE(0x631d990, internal_631d990, public_631d990);
extern "C" NAKED register_t __cdecl internal_631d990()
{
    __asm
    {
/*FIXUP push offset public_63a3c28 @0x631d990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3c28
        push 1
        push 1
        push 0
        call dword ptr ds : [public_6399140]
        mov dword ptr ds : [public_640180c], eax
        ret 
        UNREACHABLE_TRAP(0x631d990)
    }
}
