#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413d00);
CLANG_FORWARD_PROC_SYMBOL(public_4144c0);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x413cd0, internal_413cd0, public_413cd0);
extern "C" NAKED register_t __cdecl internal_413cd0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_4294ec
        call public_4144c0
/*FIXUP push offset _public_413d00 @0x413ce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_413d00
        call public_419410
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x413cd0)
    }
}
