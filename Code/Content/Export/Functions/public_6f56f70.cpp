#include "Content-PCH.h"

PROC_DECLARE(0x6f56f70, internal_6f56f70, public_6f56f70);
extern "C" NAKED register_t __cdecl internal_6f56f70()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6f56f70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0dc0], eax
        ret 
        UNREACHABLE_TRAP(0x6f56f70)
    }
}
