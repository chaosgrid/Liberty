#include "Content-PCH.h"

PROC_DECLARE(0x6f81a10, internal_6f81a10, public_6f81a10);
extern "C" NAKED register_t __cdecl internal_6f81a10()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6f81a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3b24], eax
        ret 
        UNREACHABLE_TRAP(0x6f81a10)
    }
}
