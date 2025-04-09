#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576290);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5762a0 _public_5762a0
#define public_5762d3 _public_5762d3

PROC_DECLARE(0x576290, internal_576290, public_576290);
extern "C" NAKED register_t __cdecl internal_576290()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_67c270]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_5762d3
        mov edi, edi
        public_5762a0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67c274]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_67c274], ecx
        jne public_5762a0
        mov edi, dword ptr ds : [public_67c270]
        public_5762d3 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67c270], eax
        mov dword ptr ds : [public_67c274], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x576290)
    }
}

#undef public_5762a0
#undef public_5762d3
