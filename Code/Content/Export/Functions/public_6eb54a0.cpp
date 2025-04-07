#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb54d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2a70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6eb54a0, internal_6eb54a0, public_6eb54a0);
extern "C" NAKED register_t __cdecl internal_6eb54a0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcef10
        call public_6ef2a70
/*FIXUP push offset _public_6eb54d0 @0x6eb54b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb54d0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eb54a0)
    }
}
