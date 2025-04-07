#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627e520 _public_627e520
#define public_627e554 _public_627e554
#define public_627e55d _public_627e55d
#define public_627e568 _public_627e568
#define public_627e58c _public_627e58c
#define public_627e595 _public_627e595
#define public_627e5b0 _public_627e5b0
#define public_627e5c1 _public_627e5c1
#define public_627e5cd _public_627e5cd

PROC_DECLARE(0x627e510, internal_627e510, public_627e510);
extern "C" NAKED register_t __cdecl internal_627e510()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_627e568
        mov edi, edi
        public_627e520 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        jge public_627e554
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        jmp public_627e55d
        public_627e554 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627e55d : nop
        mov ecx, dword ptr ds : [edi+8]
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_627e520
        public_627e568 : nop
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        mov eax, dword ptr ds : [edi+4]
        jge public_627e58c
        mov edx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        jmp public_627e595
        public_627e58c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627e595 : nop
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        dec dword ptr ds : [public_63fc424]
        jne public_627e5cd
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebx
        je public_627e5c1
        mov edi, edi
        public_627e5b0 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_627e5b0
        public_627e5c1 : nop
        mov dword ptr ds : [public_63fc420], ebx
        mov dword ptr ds : [public_63fc42c], ebx
        public_627e5cd : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627e510)
    }
}

#undef public_627e520
#undef public_627e554
#undef public_627e55d
#undef public_627e568
#undef public_627e58c
#undef public_627e595
#undef public_627e5b0
#undef public_627e5c1
#undef public_627e5cd
