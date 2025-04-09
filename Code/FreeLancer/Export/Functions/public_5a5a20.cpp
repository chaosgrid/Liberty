#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a5a20, internal_5a5a20, public_5a5a20);
extern "C" NAKED register_t __cdecl internal_5a5a20()
{
    __asm
    {
/*FIXUP push offset public_5e6400 @0x5a5a20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6400
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67e788], eax
        ret 
        UNREACHABLE_TRAP(0x5a5a20)
    }
}
