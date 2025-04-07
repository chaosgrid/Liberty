#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a5a40, internal_5a5a40, public_5a5a40);
extern "C" NAKED register_t __cdecl internal_5a5a40()
{
    __asm
    {
/*FIXUP push offset public_5e6414 @0x5a5a40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6414
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67e784], eax
        ret 
        UNREACHABLE_TRAP(0x5a5a40)
    }
}
