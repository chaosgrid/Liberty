#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d75c0, internal_4d75c0, public_4d75c0);
extern "C" NAKED register_t __cdecl internal_4d75c0()
{
    __asm
    {
/*FIXUP push offset public_5d82b4 @0x4d75c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d82b4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674a14], eax
        ret 
        UNREACHABLE_TRAP(0x4d75c0)
    }
}
