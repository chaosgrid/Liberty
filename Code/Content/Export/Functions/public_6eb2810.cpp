#include "Content-PCH.h"

PROC_DECLARE(0x6eb2810, internal_6eb2810, public_6eb2810);
extern "C" NAKED register_t __cdecl internal_6eb2810()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6eb2810*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceed0], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2810)
    }
}
