#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ba60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f6ba40, internal_6f6ba40, public_6f6ba40);
extern "C" NAKED register_t __cdecl internal_6f6ba40()
{
    __asm
    {
        mov ecx, offset public_6fd1cbc
        call public_6eac620
/*FIXUP push offset _public_6f6ba60 @0x6f6ba4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f6ba60
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f6ba40)
    }
}
