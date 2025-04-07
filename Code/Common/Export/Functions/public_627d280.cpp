#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_627e620);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x627d280, internal_627d280, public_627d280);
extern "C" NAKED register_t __cdecl internal_627d280()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fbff8
        call public_627e620
/*FIXUP push offset _public_627d2b0 @0x627d295*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627d2b0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x627d280)
    }
}
