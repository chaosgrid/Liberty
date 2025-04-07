#include "Content-PCH.h"

PROC_DECLARE(0x6ea4e60, internal_6ea4e60, public_6ea4e60);
extern "C" NAKED register_t __cdecl internal_6ea4e60()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6ea4e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcec84], eax
        ret 
        UNREACHABLE_TRAP(0x6ea4e60)
    }
}
