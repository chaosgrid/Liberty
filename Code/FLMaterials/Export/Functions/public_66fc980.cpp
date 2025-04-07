#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc9b0);
CLANG_FORWARD_PROC_SYMBOL(public_66fd000);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

PROC_DECLARE(0x66fc980, internal_66fc980, public_66fc980);
extern "C" NAKED register_t __cdecl internal_66fc980()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_67045f4
        call public_66fd000
/*FIXUP push offset _public_66fc9b0 @0x66fc995*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66fc9b0
        call public_6700912
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x66fc980)
    }
}
