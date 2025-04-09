#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7860);

#define public_51da7e _public_51da7e

PROC_DECLARE(0x51da70, internal_51da70, public_51da70);
extern "C" NAKED register_t __cdecl internal_51da70()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        je public_51da7e
        xor eax, eax
        ret 4
        public_51da7e : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4c7860
        add esp, 4
        movzx eax, al
        ret 4
        UNREACHABLE_TRAP(0x51da70)
    }
}

#undef public_51da7e
