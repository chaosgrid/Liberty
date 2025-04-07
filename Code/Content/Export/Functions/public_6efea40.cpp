#include "Content-PCH.h"

PROC_DECLARE(0x6efea40, internal_6efea40, public_6efea40);
extern "C" NAKED register_t __cdecl internal_6efea40()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6efea40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3fc], eax
        ret 
        UNREACHABLE_TRAP(0x6efea40)
    }
}
