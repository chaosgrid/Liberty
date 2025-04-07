#include "Content-PCH.h"

PROC_DECLARE(0x6ea1060, internal_6ea1060, public_6ea1060);
extern "C" NAKED register_t __cdecl internal_6ea1060()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6ea1060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce954], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1060)
    }
}
