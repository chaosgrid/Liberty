#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6372a10);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

PROC_DECLARE(0x6372a10, internal_6372a10, public_6372a10);
extern "C" NAKED register_t __cdecl internal_6372a10()
{
    __asm
    {
/*FIXUP push offset public_63f0778 @0x6372a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0778
        call public_6356960
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        push 5
        call public_6378600
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6372a10)
    }
}
