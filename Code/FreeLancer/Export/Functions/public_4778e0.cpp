#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4778e0, internal_4778e0, public_4778e0);
extern "C" NAKED register_t __cdecl internal_4778e0()
{
    __asm
    {
/*FIXUP push offset public_5d0e4c @0x4778e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e4c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c74], eax
        ret 
        UNREACHABLE_TRAP(0x4778e0)
    }
}
