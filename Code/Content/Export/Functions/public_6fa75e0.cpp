#include "Content-PCH.h"

PROC_DECLARE(0x6fa75e0, internal_6fa75e0, public_6fa75e0);
extern "C" NAKED register_t __cdecl internal_6fa75e0()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6fa75e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3dd8], eax
        ret 
        UNREACHABLE_TRAP(0x6fa75e0)
    }
}
