#include "Content-PCH.h"

PROC_DECLARE(0x6ea4ae0, internal_6ea4ae0, public_6ea4ae0);
extern "C" NAKED register_t __cdecl internal_6ea4ae0()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6ea4ae0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcec20], eax
        ret 
        UNREACHABLE_TRAP(0x6ea4ae0)
    }
}
