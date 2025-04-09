#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f520, internal_52f520, public_52f520);
extern "C" NAKED register_t __cdecl internal_52f520()
{
    __asm
    {
/*FIXUP push offset public_5ddcc4 @0x52f520*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddcc4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675494], eax
        ret 
        UNREACHABLE_TRAP(0x52f520)
    }
}
