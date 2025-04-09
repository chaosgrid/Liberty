#include "Freelancer-PCH.h"

PROC_DECLARE(0x563ad0, internal_563ad0, public_563ad0);
extern "C" NAKED register_t __cdecl internal_563ad0()
{
    __asm
    {
/*FIXUP push offset public_5e21ec @0x563ad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21ec
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [public_67a480], eax
        ret 
        UNREACHABLE_TRAP(0x563ad0)
    }
}
