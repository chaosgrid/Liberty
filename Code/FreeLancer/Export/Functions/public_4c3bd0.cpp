#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3c00);
CLANG_FORWARD_PROC_SYMBOL(public_4c59a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c3bd0, internal_4c3bd0, public_4c3bd0);
extern "C" NAKED register_t __cdecl internal_4c3bd0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_67294c
        call public_4c59a0
/*FIXUP push offset _public_4c3c00 @0x4c3be5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c3c00
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c3bd0)
    }
}
