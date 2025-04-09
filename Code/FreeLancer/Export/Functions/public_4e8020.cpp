#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e8020, internal_4e8020, public_4e8020);
extern "C" NAKED register_t __cdecl internal_4e8020()
{
    __asm
    {
/*FIXUP push offset public_5d8f24 @0x4e8020*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8f24
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674b50], eax
        ret 
        UNREACHABLE_TRAP(0x4e8020)
    }
}
