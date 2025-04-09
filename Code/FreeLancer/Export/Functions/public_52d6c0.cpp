#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52d6c0, internal_52d6c0, public_52d6c0);
extern "C" NAKED register_t __cdecl internal_52d6c0()
{
    __asm
    {
/*FIXUP push offset public_5dd57c @0x52d6c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd57c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675444], eax
        ret 
        UNREACHABLE_TRAP(0x52d6c0)
    }
}
