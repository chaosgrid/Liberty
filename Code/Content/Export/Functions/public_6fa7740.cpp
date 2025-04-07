#include "Content-PCH.h"

PROC_DECLARE(0x6fa7740, internal_6fa7740, public_6fa7740);
extern "C" NAKED register_t __cdecl internal_6fa7740()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6fa7740*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3dac], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7740)
    }
}
