#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ebf0, internal_52ebf0, public_52ebf0);
extern "C" NAKED register_t __cdecl internal_52ebf0()
{
    __asm
    {
/*FIXUP push offset public_5ddb4c @0x52ebf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddb4c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67545c], eax
        ret 
        UNREACHABLE_TRAP(0x52ebf0)
    }
}
