#include "Content-PCH.h"

PROC_DECLARE(0x6ef2070, internal_6ef2070, public_6ef2070);
extern "C" NAKED register_t __cdecl internal_6ef2070()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6ef2070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf2b0], eax
        ret 
        UNREACHABLE_TRAP(0x6ef2070)
    }
}
