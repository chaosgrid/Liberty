#include "Content-PCH.h"

PROC_DECLARE(0x6eb2670, internal_6eb2670, public_6eb2670);
extern "C" NAKED register_t __cdecl internal_6eb2670()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6eb2670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef04], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2670)
    }
}
