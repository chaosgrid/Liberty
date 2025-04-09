#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_585ef0);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);

#define public_585eff _public_585eff

PROC_DECLARE(0x585ef0, internal_585ef0, public_585ef0);
extern "C" NAKED register_t __cdecl internal_585ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        jne public_585eff
        pop esi
        ret 8
        public_585eff : nop
        mov eax, dword ptr ds : [eax+4]
        push eax
        call dword ptr ds : [public_5c632c]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        push ecx
        push eax
        mov ecx, esi
        call public_585f20
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x585ef0)
    }
}

#undef public_585eff
