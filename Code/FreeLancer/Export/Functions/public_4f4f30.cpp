#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f4f30, internal_4f4f30, public_4f4f30);
extern "C" NAKED register_t __cdecl internal_4f4f30()
{
    __asm
    {
/*FIXUP push offset public_5d9880 @0x4f4f30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9880
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bd8], eax
        ret 
        UNREACHABLE_TRAP(0x4f4f30)
    }
}
