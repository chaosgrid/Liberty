#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ffa70);
CLANG_FORWARD_PROC_SYMBOL(public_62ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ffa8f _public_62ffa8f

PROC_DECLARE(0x62ffa70, internal_62ffa70, public_62ffa70);
extern "C" NAKED register_t __cdecl internal_62ffa70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ffa8f
        push esi
        call public_630d3f0
        add esp, 4
        public_62ffa8f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
        mov ecx, edi
        call public_62ffab0
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62ffa70)
    }
}

#undef public_62ffa8f
