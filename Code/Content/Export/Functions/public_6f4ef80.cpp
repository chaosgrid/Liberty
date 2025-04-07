#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6f4efa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f4ef80, internal_6f4ef80, public_6f4ef80);
extern "C" NAKED register_t __cdecl internal_6f4ef80()
{
    __asm
    {
        mov ecx, offset public_6fd0cdc
        call public_6eac620
/*FIXUP push offset _public_6f4efa0 @0x6f4ef8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4efa0
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f4ef80)
    }
}
