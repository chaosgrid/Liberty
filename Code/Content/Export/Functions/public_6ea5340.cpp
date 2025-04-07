#include "Content-PCH.h"

PROC_DECLARE(0x6ea5340, internal_6ea5340, public_6ea5340);
extern "C" NAKED register_t __cdecl internal_6ea5340()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6ea5340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcecbc], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5340)
    }
}
