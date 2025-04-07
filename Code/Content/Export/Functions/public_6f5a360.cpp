#include "Content-PCH.h"

PROC_DECLARE(0x6f5a360, internal_6f5a360, public_6f5a360);
extern "C" NAKED register_t __cdecl internal_6f5a360()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6f5a360*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0e94], eax
        ret 
        UNREACHABLE_TRAP(0x6f5a360)
    }
}
