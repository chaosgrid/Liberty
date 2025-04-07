#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3b40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c3b50 _public_4c3b50
#define public_4c3b83 _public_4c3b83

PROC_DECLARE(0x4c3b40, internal_4c3b40, public_4c3b40);
extern "C" NAKED register_t __cdecl internal_4c3b40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_672970]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c3b83
        mov edi, edi
        public_4c3b50 : nop
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
        mov ecx, dword ptr ds : [public_672974]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_672974], ecx
        jne public_4c3b50
        mov edi, dword ptr ds : [public_672970]
        public_4c3b83 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_672970], eax
        mov dword ptr ds : [public_672974], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c3b40)
    }
}

#undef public_4c3b50
#undef public_4c3b83
