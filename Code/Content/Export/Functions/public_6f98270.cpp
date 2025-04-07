#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec860);
CLANG_FORWARD_PROC_SYMBOL(public_6f982a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f98270, internal_6f98270, public_6f98270);
extern "C" NAKED register_t __cdecl internal_6f98270()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd3cec
        call public_6eec860
/*FIXUP push offset _public_6f982a0 @0x6f98285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f982a0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f98270)
    }
}
