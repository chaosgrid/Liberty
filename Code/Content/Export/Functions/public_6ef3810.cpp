#include "Content-PCH.h"

PROC_DECLARE(0x6ef3810, internal_6ef3810, public_6ef3810);
extern "C" NAKED register_t __cdecl internal_6ef3810()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6ef3810*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf2b4], eax
        ret 
        UNREACHABLE_TRAP(0x6ef3810)
    }
}
