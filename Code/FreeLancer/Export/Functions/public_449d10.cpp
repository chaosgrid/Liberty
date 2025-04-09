#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449d10);

#define public_449d20 _public_449d20
#define public_449d2e _public_449d2e
#define public_449d3e _public_449d3e

PROC_DECLARE(0x449d10, internal_449d10, public_449d10);
extern "C" NAKED register_t __cdecl internal_449d10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor edx, edx
        lea esi, ds:[ecx+0x518]
        mov edi, edi
        public_449d20 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_449d2e
        cmp dword ptr ds : [eax+0x300], edi
        je public_449d3e
        public_449d2e : nop
        inc edx
        add esi, 4
        cmp edx, 0x40
        jl public_449d20
        pop edi
        pop esi
        xor eax, eax
        ret 4
        public_449d3e : nop
        mov eax, dword ptr ds : [ecx+edx*4+0x518]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x449d10)
    }
}

#undef public_449d20
#undef public_449d2e
#undef public_449d3e
