#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f500, internal_52f500, public_52f500);
extern "C" NAKED register_t __cdecl internal_52f500()
{
    __asm
    {
/*FIXUP push offset public_5ddcb0 @0x52f500*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddcb0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675498], eax
        ret 
        UNREACHABLE_TRAP(0x52f500)
    }
}
