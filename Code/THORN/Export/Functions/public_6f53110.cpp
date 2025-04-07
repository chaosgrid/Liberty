#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53110);

PROC_DECLARE(0x6f53110, internal_6f53110, public_6f53110);
extern "C" NAKED register_t __cdecl internal_6f53110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
/*FIXUP push offset public_6f61250 @0x6f53114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61250
        push eax
        call public_6f511c0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f53110)
    }
}
