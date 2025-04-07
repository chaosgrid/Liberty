#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3a00);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c39d0, internal_4c39d0, public_4c39d0);
extern "C" NAKED register_t __cdecl internal_4c39d0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_673320
        call public_4c5a10
/*FIXUP push offset _public_4c3a00 @0x4c39e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c3a00
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c39d0)
    }
}
