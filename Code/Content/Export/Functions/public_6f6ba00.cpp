#include "Content-PCH.h"

PROC_DECLARE(0x6f6ba00, internal_6f6ba00, public_6f6ba00);
extern "C" NAKED register_t __cdecl internal_6f6ba00()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f6ba00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1cd0], eax
        ret 
        UNREACHABLE_TRAP(0x6f6ba00)
    }
}
