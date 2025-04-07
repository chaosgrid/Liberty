#include "Content-PCH.h"

PROC_DECLARE(0x6eb2770, internal_6eb2770, public_6eb2770);
extern "C" NAKED register_t __cdecl internal_6eb2770()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6eb2770*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceee4], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2770)
    }
}
