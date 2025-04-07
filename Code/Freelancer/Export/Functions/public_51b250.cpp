#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_51c200);
CLANG_FORWARD_PROC_SYMBOL(public_51daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51b290 _public_51b290
#define public_51b29b _public_51b29b

PROC_DECLARE(0x51b250, internal_51b250, public_51b250);
extern "C" NAKED register_t __cdecl internal_51b250()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_51b29b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51b29b
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        call public_51c200
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51b290
        push 0x100
        call public_4215e0
        add esp, 4
        public_51b290 : nop
        push edi
        push ebx
        mov ecx, esi
        call public_51daa0
        pop edi
        pop ebx
        public_51b29b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x51b250)
    }
}

#undef public_51b290
#undef public_51b29b
