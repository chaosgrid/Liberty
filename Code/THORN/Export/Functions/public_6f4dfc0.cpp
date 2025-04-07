#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dfc0);

PROC_DECLARE(0x6f4dfc0, internal_6f4dfc0, public_6f4dfc0);
extern "C" NAKED register_t __cdecl internal_6f4dfc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
/*FIXUP push offset public_6f60620 @0x6f4dfc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60620
        push eax
        call public_6f4d3b0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4dfc0)
    }
}
