#include "Content-PCH.h"

PROC_DECLARE(0x6eb2830, internal_6eb2830, public_6eb2830);
extern "C" NAKED register_t __cdecl internal_6eb2830()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6eb2830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceecc], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2830)
    }
}
