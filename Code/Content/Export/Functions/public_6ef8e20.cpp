#include "Content-PCH.h"

PROC_DECLARE(0x6ef8e20, internal_6ef8e20, public_6ef8e20);
extern "C" NAKED register_t __cdecl internal_6ef8e20()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6ef8e20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf324], eax
        ret 
        UNREACHABLE_TRAP(0x6ef8e20)
    }
}
