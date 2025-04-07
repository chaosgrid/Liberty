#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63114a0);
CLANG_FORWARD_PROC_SYMBOL(public_6311d40);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6311470, internal_6311470, public_6311470);
extern "C" NAKED register_t __cdecl internal_6311470()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fd2a8
        call public_6311d40
/*FIXUP push offset _public_63114a0 @0x6311485*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63114a0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6311470)
    }
}
