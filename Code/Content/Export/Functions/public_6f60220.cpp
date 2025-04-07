#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60250);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f60220, internal_6f60220, public_6f60220);
extern "C" NAKED register_t __cdecl internal_6f60220()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd1b84
        call public_6eec6b0
/*FIXUP push offset _public_6f60250 @0x6f60235*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f60250
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f60220)
    }
}
