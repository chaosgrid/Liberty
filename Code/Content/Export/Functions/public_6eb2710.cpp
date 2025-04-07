#include "Content-PCH.h"

PROC_DECLARE(0x6eb2710, internal_6eb2710, public_6eb2710);
extern "C" NAKED register_t __cdecl internal_6eb2710()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6eb2710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceef0], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2710)
    }
}
