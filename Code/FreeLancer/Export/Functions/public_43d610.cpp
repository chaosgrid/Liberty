#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d610, internal_43d610, public_43d610);
extern "C" NAKED register_t __cdecl internal_43d610()
{
    __asm
    {
/*FIXUP push offset public_5cb524 @0x43d610*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb524
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_668810], eax
        ret 
        UNREACHABLE_TRAP(0x43d610)
    }
}
