#include "Content-PCH.h"

PROC_DECLARE(0x6ed5b70, internal_6ed5b70, public_6ed5b70);
extern "C" NAKED register_t __cdecl internal_6ed5b70()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6ed5b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf188], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5b70)
    }
}
