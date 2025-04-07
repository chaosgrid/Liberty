#include "Content-PCH.h"

PROC_DECLARE(0x6ea5760, internal_6ea5760, public_6ea5760);
extern "C" NAKED register_t __cdecl internal_6ea5760()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6ea5760*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fced0c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5760)
    }
}
