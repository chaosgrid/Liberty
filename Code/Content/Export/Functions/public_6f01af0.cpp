#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f026c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f01af0, internal_6f01af0, public_6f01af0);
extern "C" NAKED register_t __cdecl internal_6f01af0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd04f8
        call public_6f026c0
/*FIXUP push offset _public_6f01b20 @0x6f01b05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f01b20
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f01af0)
    }
}
