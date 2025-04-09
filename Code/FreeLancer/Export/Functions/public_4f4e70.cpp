#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4e70, internal_4f4e70, public_4f4e70);
extern "C" NAKED register_t __cdecl internal_4f4e70()
{
    __asm
    {
/*FIXUP push offset public_5d9810 @0x4f4e70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9810
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bf0], eax
        ret 
        UNREACHABLE_TRAP(0x4f4e70)
    }
}
