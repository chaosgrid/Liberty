#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e350);
CLANG_FORWARD_PROC_SYMBOL(public_42ecb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x42e320, internal_42e320, public_42e320);
extern "C" NAKED register_t __cdecl internal_42e320()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_667d78
        call public_42ecb0
/*FIXUP push offset _public_42e350 @0x42e335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42e350
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42e320)
    }
}
