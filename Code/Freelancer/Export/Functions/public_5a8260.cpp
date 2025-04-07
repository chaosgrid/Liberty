#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b170);
CLANG_FORWARD_PROC_SYMBOL(public_4c4bc0);
CLANG_FORWARD_PROC_SYMBOL(public_564b00);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5aa440);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fd0);

#define public_5a82af _public_5a82af
#define public_5a82b9 _public_5a82b9

PROC_DECLARE(0x5a8260, internal_5a8260, public_5a8260);
extern "C" NAKED register_t __cdecl internal_5a8260()
{
    __asm
    {
        call public_564b00
        test al, al
        jne public_5a82b9
        call public_46b170
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        je public_5a82af
        mov ecx, offset public_67e7b8
        call public_5aa440
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_67ecd0]
        push ecx
        call public_5b6fd0
        add esp, 4
        mov dword ptr ds : [public_67ecd0], 0
        mov dword ptr ds : [public_67ecd4], 0
        public_5a82af : nop
        mov dword ptr ds : [public_673344], 0
        public_5a82b9 : nop
        call public_4c4bc0
        jmp dword ptr ds : [public_5c6c90]
        UNREACHABLE_TRAP(0x5a8260)
    }
}

#undef public_5a82af
#undef public_5a82b9
