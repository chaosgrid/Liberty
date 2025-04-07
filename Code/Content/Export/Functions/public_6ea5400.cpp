#include "Content-PCH.h"

PROC_DECLARE(0x6ea5400, internal_6ea5400, public_6ea5400);
extern "C" NAKED register_t __cdecl internal_6ea5400()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ea5400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceca4], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5400)
    }
}
