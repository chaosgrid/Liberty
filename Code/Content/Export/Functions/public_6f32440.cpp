#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f32440, internal_6f32440, public_6f32440);
extern "C" NAKED register_t __cdecl internal_6f32440()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0830
        call public_6f1d4f0
/*FIXUP push offset _public_6f32470 @0x6f32455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f32470
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f32440)
    }
}
