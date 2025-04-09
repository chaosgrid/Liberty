#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52eaf0, internal_52eaf0, public_52eaf0);
extern "C" NAKED register_t __cdecl internal_52eaf0()
{
    __asm
    {
/*FIXUP push offset public_5ddb2c @0x52eaf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddb2c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675460], eax
        ret 
        UNREACHABLE_TRAP(0x52eaf0)
    }
}
