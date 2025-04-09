#include "FreeLancer-PCH.h"

PROC_DECLARE(0x48a010, internal_48a010, public_48a010);
extern "C" NAKED register_t __cdecl internal_48a010()
{
    __asm
    {
/*FIXUP push offset public_5d24bc @0x48a010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d24bc
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671fb4], eax
        ret 
        UNREACHABLE_TRAP(0x48a010)
    }
}
