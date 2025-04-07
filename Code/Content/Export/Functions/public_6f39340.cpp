#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39370);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39340, internal_6f39340, public_6f39340);
extern "C" NAKED register_t __cdecl internal_6f39340()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0a50
        call public_6f3e6a0
/*FIXUP push offset _public_6f39370 @0x6f39355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39370
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39340)
    }
}
