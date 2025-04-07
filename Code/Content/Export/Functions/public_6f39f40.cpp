#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39f40, internal_6f39f40, public_6f39f40);
extern "C" NAKED register_t __cdecl internal_6f39f40()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0960
        call public_6f3e7f0
/*FIXUP push offset _public_6f39f70 @0x6f39f55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39f70
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39f40)
    }
}
