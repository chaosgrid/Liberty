#include "Content-PCH.h"

PROC_DECLARE(0x6f05830, internal_6f05830, public_6f05830);
extern "C" NAKED register_t __cdecl internal_6f05830()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6f05830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd060c], eax
        ret 
        UNREACHABLE_TRAP(0x6f05830)
    }
}
