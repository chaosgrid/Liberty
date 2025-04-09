#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bc10);

#define public_54bc2a _public_54bc2a

PROC_DECLARE(0x54bc10, internal_54bc10, public_54bc10);
extern "C" NAKED register_t __cdecl internal_54bc10()
{
    __asm
    {
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        je public_54bc2a
        mov eax, dword ptr ss : [esp+4]
        push 0
        push eax
        mov ecx, offset public_678b98
        call public_549e70
        public_54bc2a : nop
        ret 
        UNREACHABLE_TRAP(0x54bc10)
    }
}

#undef public_54bc2a
