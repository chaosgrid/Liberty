#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542a10, internal_542a10, public_542a10);
extern "C" NAKED register_t __cdecl internal_542a10()
{
    __asm
    {
/*FIXUP push offset public_5dfbc4 @0x542a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfbc4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b38], eax
        ret 
        UNREACHABLE_TRAP(0x542a10)
    }
}
