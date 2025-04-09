#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b2bd0, internal_4b2bd0, public_4b2bd0);
extern "C" NAKED register_t __cdecl internal_4b2bd0()
{
    __asm
    {
/*FIXUP push offset public_5d51b8 @0x4b2bd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d51b8
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67220c], eax
        ret 
        UNREACHABLE_TRAP(0x4b2bd0)
    }
}
