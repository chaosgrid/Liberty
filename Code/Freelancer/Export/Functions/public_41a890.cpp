#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_41b310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x41a890, internal_41a890, public_41a890);
extern "C" NAKED register_t __cdecl internal_41a890()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6166d8
        call public_41b310
/*FIXUP push offset _public_41a8c0 @0x41a8a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41a8c0
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x41a890)
    }
}
