#include "Content-PCH.h"

PROC_DECLARE(0x6f05890, internal_6f05890, public_6f05890);
extern "C" NAKED register_t __cdecl internal_6f05890()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f05890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0600], eax
        ret 
        UNREACHABLE_TRAP(0x6f05890)
    }
}
