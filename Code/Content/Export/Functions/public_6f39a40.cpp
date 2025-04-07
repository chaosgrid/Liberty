#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39a40, internal_6f39a40, public_6f39a40);
extern "C" NAKED register_t __cdecl internal_6f39a40()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd09c4
        call public_6f3e710
/*FIXUP push offset _public_6f39a70 @0x6f39a55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39a70
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39a40)
    }
}
