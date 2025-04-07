#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39770);
CLANG_FORWARD_PROC_SYMBOL(public_6f594e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39740, internal_6f39740, public_6f39740);
extern "C" NAKED register_t __cdecl internal_6f39740()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0a00
        call public_6f594e0
/*FIXUP push offset _public_6f39770 @0x6f39755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39770
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39740)
    }
}
