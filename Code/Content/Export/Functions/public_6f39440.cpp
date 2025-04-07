#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f39470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39440, internal_6f39440, public_6f39440);
extern "C" NAKED register_t __cdecl internal_6f39440()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0a3c
        call public_6ef2a70
/*FIXUP push offset _public_6f39470 @0x6f39455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39470
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39440)
    }
}
