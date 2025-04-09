#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4e50, internal_4f4e50, public_4f4e50);
extern "C" NAKED register_t __cdecl internal_4f4e50()
{
    __asm
    {
/*FIXUP push offset public_5d97fc @0x4f4e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d97fc
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bf4], eax
        ret 
        UNREACHABLE_TRAP(0x4f4e50)
    }
}
