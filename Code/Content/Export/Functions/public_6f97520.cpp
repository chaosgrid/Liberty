#include "Content-PCH.h"

PROC_DECLARE(0x6f97520, internal_6f97520, public_6f97520);
extern "C" NAKED register_t __cdecl internal_6f97520()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f97520*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3d48], eax
        ret 
        UNREACHABLE_TRAP(0x6f97520)
    }
}
