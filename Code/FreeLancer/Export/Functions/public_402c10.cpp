#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402c40);
CLANG_FORWARD_PROC_SYMBOL(public_404dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x402c10, internal_402c10, public_402c10);
extern "C" NAKED register_t __cdecl internal_402c10()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_616478
        call public_404dd0
/*FIXUP push offset _public_402c40 @0x402c25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_402c40
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x402c10)
    }
}
