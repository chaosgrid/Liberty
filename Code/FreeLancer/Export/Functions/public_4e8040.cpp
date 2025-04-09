#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e8040, internal_4e8040, public_4e8040);
extern "C" NAKED register_t __cdecl internal_4e8040()
{
    __asm
    {
/*FIXUP push offset public_5d8f38 @0x4e8040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8f38
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674b4c], eax
        ret 
        UNREACHABLE_TRAP(0x4e8040)
    }
}
