#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215530);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x6215510, internal_6215510, public_6215510);
extern "C" NAKED register_t __cdecl internal_6215510()
{
    __asm
    {
        mov ecx, offset public_6257a04
        call public_623e890
/*FIXUP push offset _public_6215530 @0x621551a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6215530
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6215510)
    }
}
