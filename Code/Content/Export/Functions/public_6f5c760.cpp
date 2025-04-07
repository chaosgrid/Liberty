#include "Content-PCH.h"

PROC_DECLARE(0x6f5c760, internal_6f5c760, public_6f5c760);
extern "C" NAKED register_t __cdecl internal_6f5c760()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6f5c760*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1c6c], eax
        ret 
        UNREACHABLE_TRAP(0x6f5c760)
    }
}
