#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39170);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39140, internal_6f39140, public_6f39140);
extern "C" NAKED register_t __cdecl internal_6f39140()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0a78
        call public_6f3e5c0
/*FIXUP push offset _public_6f39170 @0x6f39155*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39170
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39140)
    }
}
