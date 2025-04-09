#include "Freelancer-PCH.h"

PROC_DECLARE(0x477940, internal_477940, public_477940);
extern "C" NAKED register_t __cdecl internal_477940()
{
    __asm
    {
/*FIXUP push offset public_5d0e80 @0x477940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e80
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c68], eax
        ret 
        UNREACHABLE_TRAP(0x477940)
    }
}
