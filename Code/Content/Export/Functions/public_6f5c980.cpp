#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5c980, internal_6f5c980, public_6f5c980);
extern "C" NAKED register_t __cdecl internal_6f5c980()
{
    __asm
    {
        mov ecx, offset public_6fd1c08
        call public_6ee8a70
/*FIXUP push offset _public_6f5c9a0 @0x6f5c98a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5c9a0
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f5c980)
    }
}
