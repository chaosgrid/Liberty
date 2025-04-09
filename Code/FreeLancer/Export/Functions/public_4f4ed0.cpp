#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4ed0, internal_4f4ed0, public_4f4ed0);
extern "C" NAKED register_t __cdecl internal_4f4ed0()
{
    __asm
    {
/*FIXUP push offset public_5d9844 @0x4f4ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9844
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674be4], eax
        ret 
        UNREACHABLE_TRAP(0x4f4ed0)
    }
}
