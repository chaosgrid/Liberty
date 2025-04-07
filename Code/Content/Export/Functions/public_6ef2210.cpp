#include "Content-PCH.h"

PROC_DECLARE(0x6ef2210, internal_6ef2210, public_6ef2210);
extern "C" NAKED register_t __cdecl internal_6ef2210()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6ef2210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf27c], eax
        ret 
        UNREACHABLE_TRAP(0x6ef2210)
    }
}
