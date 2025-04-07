#include "Content-PCH.h"

PROC_DECLARE(0x6f94d10, internal_6f94d10, public_6f94d10);
extern "C" NAKED register_t __cdecl internal_6f94d10()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6f94d10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3c74], eax
        ret 
        UNREACHABLE_TRAP(0x6f94d10)
    }
}
