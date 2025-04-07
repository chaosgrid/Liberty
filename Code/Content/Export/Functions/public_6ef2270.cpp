#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef22a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2a70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ef2270, internal_6ef2270, public_6ef2270);
extern "C" NAKED register_t __cdecl internal_6ef2270()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcf260
        call public_6ef2a70
/*FIXUP push offset _public_6ef22a0 @0x6ef2285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef22a0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ef2270)
    }
}
