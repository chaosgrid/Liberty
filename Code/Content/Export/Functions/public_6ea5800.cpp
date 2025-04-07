#include "Content-PCH.h"

PROC_DECLARE(0x6ea5800, internal_6ea5800, public_6ea5800);
extern "C" NAKED register_t __cdecl internal_6ea5800()
{
    __asm
    {
/*FIXUP push offset public_6fb3764 @0x6ea5800*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3764
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcecf8], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5800)
    }
}
