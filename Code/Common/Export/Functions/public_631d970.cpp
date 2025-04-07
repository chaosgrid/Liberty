#include "Common-PCH.h"

PROC_DECLARE(0x631d970, internal_631d970, public_631d970);
extern "C" NAKED register_t __cdecl internal_631d970()
{
    __asm
    {
/*FIXUP push offset public_63a3c00 @0x631d970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3c00
        push 1
        push 1
        push 0
        call dword ptr ds : [public_6399140]
        mov dword ptr ds : [public_6401810], eax
        ret 
        UNREACHABLE_TRAP(0x631d970)
    }
}
