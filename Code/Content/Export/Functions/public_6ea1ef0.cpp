#include "Content-PCH.h"

PROC_DECLARE(0x6ea1ef0, internal_6ea1ef0, public_6ea1ef0);
extern "C" NAKED register_t __cdecl internal_6ea1ef0()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ea1ef0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9b8], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1ef0)
    }
}
