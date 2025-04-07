#include "Content-PCH.h"

PROC_DECLARE(0x6ea4620, internal_6ea4620, public_6ea4620);
extern "C" NAKED register_t __cdecl internal_6ea4620()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6ea4620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcebe4], eax
        ret 
        UNREACHABLE_TRAP(0x6ea4620)
    }
}
