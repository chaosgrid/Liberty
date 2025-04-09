#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c9800, internal_4c9800, public_4c9800);
extern "C" NAKED register_t __cdecl internal_4c9800()
{
    __asm
    {
/*FIXUP push offset public_5d7120 @0x4c9800*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7120
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_6748cc], eax
        ret 
        UNREACHABLE_TRAP(0x4c9800)
    }
}
