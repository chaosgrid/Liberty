#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4ef0, internal_4f4ef0, public_4f4ef0);
extern "C" NAKED register_t __cdecl internal_4f4ef0()
{
    __asm
    {
/*FIXUP push offset public_5d985c @0x4f4ef0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d985c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674be0], eax
        ret 
        UNREACHABLE_TRAP(0x4f4ef0)
    }
}
