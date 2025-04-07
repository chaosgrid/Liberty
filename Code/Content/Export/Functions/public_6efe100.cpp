#include "Content-PCH.h"

PROC_DECLARE(0x6efe100, internal_6efe100, public_6efe100);
extern "C" NAKED register_t __cdecl internal_6efe100()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6efe100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3e4], eax
        ret 
        UNREACHABLE_TRAP(0x6efe100)
    }
}
