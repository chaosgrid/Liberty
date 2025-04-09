#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c6120, internal_4c6120, public_4c6120);
extern "C" NAKED register_t __cdecl internal_4c6120()
{
    __asm
    {
/*FIXUP push offset public_5d0e30 @0x4c6120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e30
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67339c], eax
        ret 
        UNREACHABLE_TRAP(0x4c6120)
    }
}
