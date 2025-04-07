#include "Content-PCH.h"

PROC_DECLARE(0x6fa7660, internal_6fa7660, public_6fa7660);
extern "C" NAKED register_t __cdecl internal_6fa7660()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6fa7660*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3dc8], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7660)
    }
}
