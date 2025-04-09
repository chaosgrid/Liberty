#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d5f0, internal_43d5f0, public_43d5f0);
extern "C" NAKED register_t __cdecl internal_43d5f0()
{
    __asm
    {
/*FIXUP push offset public_5cb4fc @0x43d5f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb4fc
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_668814], eax
        ret 
        UNREACHABLE_TRAP(0x43d5f0)
    }
}
