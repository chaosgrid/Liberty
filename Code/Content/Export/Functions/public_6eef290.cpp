#include "Content-PCH.h"

PROC_DECLARE(0x6eef290, internal_6eef290, public_6eef290);
extern "C" NAKED register_t __cdecl internal_6eef290()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6eef290*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf22c], eax
        ret 
        UNREACHABLE_TRAP(0x6eef290)
    }
}
