#include "Freelancer-PCH.h"

PROC_DECLARE(0x542970, internal_542970, public_542970);
extern "C" NAKED register_t __cdecl internal_542970()
{
    __asm
    {
/*FIXUP push offset public_5dfb7c @0x542970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb7c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b4c], eax
        ret 
        UNREACHABLE_TRAP(0x542970)
    }
}
