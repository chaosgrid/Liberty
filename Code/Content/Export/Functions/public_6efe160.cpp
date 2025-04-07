#include "Content-PCH.h"

PROC_DECLARE(0x6efe160, internal_6efe160, public_6efe160);
extern "C" NAKED register_t __cdecl internal_6efe160()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6efe160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3d8], eax
        ret 
        UNREACHABLE_TRAP(0x6efe160)
    }
}
