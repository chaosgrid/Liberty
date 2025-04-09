#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530890);
CLANG_FORWARD_PROC_SYMBOL(public_531050);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x530860, internal_530860, public_530860);
extern "C" NAKED register_t __cdecl internal_530860()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6754f4
        call public_531050
/*FIXUP push offset _public_530890 @0x530875*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_530890
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x530860)
    }
}
