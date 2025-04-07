#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed60a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ed6070, internal_6ed6070, public_6ed6070);
extern "C" NAKED register_t __cdecl internal_6ed6070()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcf0e0
        call public_6eec860
/*FIXUP push offset _public_6ed60a0 @0x6ed6085*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ed60a0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ed6070)
    }
}
