#include "Content-PCH.h"

PROC_DECLARE(0x6ea7770, internal_6ea7770, public_6ea7770);
extern "C" NAKED register_t __cdecl internal_6ea7770()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6ea7770*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceebc], eax
        ret 
        UNREACHABLE_TRAP(0x6ea7770)
    }
}
