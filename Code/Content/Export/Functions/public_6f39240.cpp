#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39270);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39240, internal_6f39240, public_6f39240);
extern "C" NAKED register_t __cdecl internal_6f39240()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0a64
        call public_6f3e630
/*FIXUP push offset _public_6f39270 @0x6f39255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39270
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39240)
    }
}
