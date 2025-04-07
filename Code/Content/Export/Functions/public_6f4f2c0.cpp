#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f4f2c0, internal_6f4f2c0, public_6f4f2c0);
extern "C" NAKED register_t __cdecl internal_6f4f2c0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0ca4
        call public_6f52930
/*FIXUP push offset _public_6f4f2f0 @0x6f4f2d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4f2f0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4f2c0)
    }
}
