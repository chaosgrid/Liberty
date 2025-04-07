#include "Content-PCH.h"

PROC_DECLARE(0x6efb510, internal_6efb510, public_6efb510);
extern "C" NAKED register_t __cdecl internal_6efb510()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6efb510*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf348], eax
        ret 
        UNREACHABLE_TRAP(0x6efb510)
    }
}
