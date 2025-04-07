#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f026c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98450);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f98420, internal_6f98420, public_6f98420);
extern "C" NAKED register_t __cdecl internal_6f98420()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd3cd4
        call public_6f026c0
/*FIXUP push offset _public_6f98450 @0x6f98435*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f98450
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f98420)
    }
}
