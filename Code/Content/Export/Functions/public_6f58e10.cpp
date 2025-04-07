#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f594e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f58e10, internal_6f58e10, public_6f58e10);
extern "C" NAKED register_t __cdecl internal_6f58e10()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0e34
        call public_6f594e0
/*FIXUP push offset _public_6f58e40 @0x6f58e25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f58e40
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f58e10)
    }
}
