#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4eb0, internal_4f4eb0, public_4f4eb0);
extern "C" NAKED register_t __cdecl internal_4f4eb0()
{
    __asm
    {
/*FIXUP push offset public_5d9834 @0x4f4eb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9834
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674be8], eax
        ret 
        UNREACHABLE_TRAP(0x4f4eb0)
    }
}
