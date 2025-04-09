#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_468fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x468fb0, internal_468fb0, public_468fb0);
extern "C" NAKED register_t __cdecl internal_468fb0()
{
    __asm
    {
        mov ecx, offset public_66d430
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_468fd0 @0x468fbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468fd0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x468fb0)
    }
}
