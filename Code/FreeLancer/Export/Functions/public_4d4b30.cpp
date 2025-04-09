#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d4b30, internal_4d4b30, public_4d4b30);
extern "C" NAKED register_t __cdecl internal_4d4b30()
{
    __asm
    {
/*FIXUP push offset public_5d7c24 @0x4d4b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7c24
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674950], eax
        ret 
        UNREACHABLE_TRAP(0x4d4b30)
    }
}
