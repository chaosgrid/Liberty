#include "Content-PCH.h"

PROC_DECLARE(0x6f4ee80, internal_6f4ee80, public_6f4ee80);
extern "C" NAKED register_t __cdecl internal_6f4ee80()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6f4ee80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d08], eax
        ret 
        UNREACHABLE_TRAP(0x6f4ee80)
    }
}
