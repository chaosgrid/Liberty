#include "FreeLancer-PCH.h"

PROC_DECLARE(0x48a030, internal_48a030, public_48a030);
extern "C" NAKED register_t __cdecl internal_48a030()
{
    __asm
    {
/*FIXUP push offset public_5d24cc @0x48a030*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d24cc
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671fb0], eax
        ret 
        UNREACHABLE_TRAP(0x48a030)
    }
}
