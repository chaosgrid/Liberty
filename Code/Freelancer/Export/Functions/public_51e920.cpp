#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b450);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_51e971 _public_51e971

PROC_DECLARE(0x51e920, internal_51e920, public_51e920);
extern "C" NAKED register_t __cdecl internal_51e920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push eax
        call public_51b450
        push 0x40400000
        push 0x3F800000
        mov bl, al
        call public_41a0f0
        add esp, 8
        call public_54baf0
        test eax, eax
        je public_51e971
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        push esi
        mov esi, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [eax]
        push 5
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [esi+0xE4]
        pop esi
        public_51e971 : nop
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x51e920)
    }
}

#undef public_51e971
