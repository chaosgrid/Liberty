#include "Content-PCH.h"

PROC_DECLARE(0x6f24810, internal_6f24810, public_6f24810);
extern "C" NAKED register_t __cdecl internal_6f24810()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f24810*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd075c], eax
        ret 
        UNREACHABLE_TRAP(0x6f24810)
    }
}
