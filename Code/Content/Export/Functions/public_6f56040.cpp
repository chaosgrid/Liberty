#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f026c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56070);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f56040, internal_6f56040, public_6f56040);
extern "C" NAKED register_t __cdecl internal_6f56040()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0d2c
        call public_6f026c0
/*FIXUP push offset _public_6f56070 @0x6f56055*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f56070
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56040)
    }
}
