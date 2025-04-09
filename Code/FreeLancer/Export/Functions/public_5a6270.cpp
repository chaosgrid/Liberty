#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a62a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a67c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5a6270, internal_5a6270, public_5a6270);
extern "C" NAKED register_t __cdecl internal_5a6270()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_67e770
        call public_5a67c0
/*FIXUP push offset _public_5a62a0 @0x5a6285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a62a0
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x5a6270)
    }
}
