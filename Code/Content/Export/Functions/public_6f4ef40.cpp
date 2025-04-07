#include "Content-PCH.h"

PROC_DECLARE(0x6f4ef40, internal_6f4ef40, public_6f4ef40);
extern "C" NAKED register_t __cdecl internal_6f4ef40()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f4ef40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0cf0], eax
        ret 
        UNREACHABLE_TRAP(0x6f4ef40)
    }
}
