#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5429b0, internal_5429b0, public_5429b0);
extern "C" NAKED register_t __cdecl internal_5429b0()
{
    __asm
    {
/*FIXUP push offset public_5dfb8c @0x5429b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb8c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b44], eax
        ret 
        UNREACHABLE_TRAP(0x5429b0)
    }
}
