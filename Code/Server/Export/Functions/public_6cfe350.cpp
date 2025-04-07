#include "Server-PCH.h"

PROC_DECLARE(0x6cfe350, internal_6cfe350, public_6cfe350);
extern "C" NAKED register_t __cdecl internal_6cfe350()
{
    __asm
    {
        push 0
/*FIXUP push offset public_6d66f18 @0x6cfe352*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f18
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [public_6d8d8ac], eax
        ret 
        UNREACHABLE_TRAP(0x6cfe350)
    }
}
