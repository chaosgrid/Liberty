#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555714 _public_555714
#define public_555727 _public_555727
#define public_555730 _public_555730
#define public_555734 _public_555734
#define public_555741 _public_555741
#define public_555752 _public_555752

PROC_DECLARE(0x555700, internal_555700, public_555700);
extern "C" NAKED register_t __cdecl internal_555700()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5e11c0
        je public_555734
        public_555714 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_555727
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_555730
        public_555727 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_555730 : nop
        cmp edi, ebx
        jne public_555714
        public_555734 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_555752
        public_555741 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_555741
        public_555752 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x555700)
    }
}

#undef public_555714
#undef public_555727
#undef public_555730
#undef public_555734
#undef public_555741
#undef public_555752
