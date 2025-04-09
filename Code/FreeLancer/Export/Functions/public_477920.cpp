#include "FreeLancer-PCH.h"

PROC_DECLARE(0x477920, internal_477920, public_477920);
extern "C" NAKED register_t __cdecl internal_477920()
{
    __asm
    {
/*FIXUP push offset public_5d0e68 @0x477920*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e68
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c6c], eax
        ret 
        UNREACHABLE_TRAP(0x477920)
    }
}
