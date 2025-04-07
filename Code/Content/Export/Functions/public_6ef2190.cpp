#include "Content-PCH.h"

PROC_DECLARE(0x6ef2190, internal_6ef2190, public_6ef2190);
extern "C" NAKED register_t __cdecl internal_6ef2190()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6ef2190*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf28c], eax
        ret 
        UNREACHABLE_TRAP(0x6ef2190)
    }
}
