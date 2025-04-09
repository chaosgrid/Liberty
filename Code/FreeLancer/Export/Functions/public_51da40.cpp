#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7820);
CLANG_FORWARD_PROC_SYMBOL(public_51da40);

#define public_51da62 _public_51da62

PROC_DECLARE(0x51da40, internal_51da40, public_51da40);
extern "C" NAKED register_t __cdecl internal_51da40()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_51da62
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4c7820
        add esp, 4
        test al, al
        je public_51da62
        mov eax, 1
        ret 4
        public_51da62 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x51da40)
    }
}

#undef public_51da62
