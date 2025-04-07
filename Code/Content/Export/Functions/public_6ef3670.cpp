#include "Content-PCH.h"

PROC_DECLARE(0x6ef3670, internal_6ef3670, public_6ef3670);
extern "C" NAKED register_t __cdecl internal_6ef3670()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6ef3670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf2e8], eax
        ret 
        UNREACHABLE_TRAP(0x6ef3670)
    }
}
