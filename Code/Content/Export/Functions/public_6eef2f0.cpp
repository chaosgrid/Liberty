#include "Content-PCH.h"

PROC_DECLARE(0x6eef2f0, internal_6eef2f0, public_6eef2f0);
extern "C" NAKED register_t __cdecl internal_6eef2f0()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6eef2f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf220], eax
        ret 
        UNREACHABLE_TRAP(0x6eef2f0)
    }
}
