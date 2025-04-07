#include "Content-PCH.h"

PROC_DECLARE(0x6fa7680, internal_6fa7680, public_6fa7680);
extern "C" NAKED register_t __cdecl internal_6fa7680()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6fa7680*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3dc4], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7680)
    }
}
