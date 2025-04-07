#include "Content-PCH.h"

PROC_DECLARE(0x6ea17e0, internal_6ea17e0, public_6ea17e0);
extern "C" NAKED register_t __cdecl internal_6ea17e0()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea17e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce97c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea17e0)
    }
}
