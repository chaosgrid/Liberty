#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0cfa0);

#define public_6cee82c _public_6cee82c
#define public_6cee82e _public_6cee82e
#define public_6cee85d _public_6cee85d
#define public_6cee85f _public_6cee85f
#define public_6cee878 _public_6cee878
#define public_6cee87a _public_6cee87a
#define public_6cee884 _public_6cee884
#define public_6cee8b6 _public_6cee8b6
#define public_6cee8ce _public_6cee8ce
#define public_6cee910 _public_6cee910
#define public_6cee91a _public_6cee91a
#define public_6cee93e _public_6cee93e
#define public_6cee940 _public_6cee940
#define public_6cee94a _public_6cee94a
#define public_6cee95c _public_6cee95c
#define public_6cee95e _public_6cee95e
#define public_6cee96a _public_6cee96a

PROC_DECLARE(0x6cee810, internal_6cee810, public_6cee810);
extern "C" NAKED register_t __cdecl internal_6cee810()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        je public_6cee82c
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cee82c
        mov eax, edi
        jmp public_6cee82e
        public_6cee82c : nop
        xor eax, eax
        public_6cee82e : nop
        mov ecx, dword ptr ds : [eax+0xB0]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x28]
        call public_6d0cfa0
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cee884
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cee85d
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6cee85d
        mov ecx, eax
        jmp public_6cee85f
        public_6cee85d : nop
        xor ecx, ecx
        public_6cee85f : nop
        mov edx, dword ptr ds : [ecx+0xB4]
        test edx, edx
        je public_6cee884
        test eax, eax
        je public_6cee878
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cee87a
        public_6cee878 : nop
        xor eax, eax
        public_6cee87a : nop
        push eax
        call dword ptr ds : [public_6d64378]
        add esp, 4
        public_6cee884 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        je public_6cee91a
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x6C]
        fstp dword ptr ds : [esi]
        mov byte ptr ds : [esi+0x26], 1
        mov eax, dword ptr ds : [edi+0x54]
        test eax, eax
        je public_6cee8b6
        lea eax, ss:[esp+0xC]
        push edi
        push eax
        call dword ptr ds : [public_6d64374]
        add esp, 8
        jmp public_6cee8ce
        public_6cee8b6 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        public_6cee8ce : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        push edi
        mov dword ptr ds : [ecx+8], edx
        call dword ptr ds : [public_6d64370]
        mov byte ptr ds : [esi+0x1D], al
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        push edi
        call dword ptr ds : [public_6d6436c]
        push edi
        call dword ptr ds : [public_6d64234]
        add esp, 0x14
        lea edx, ds:[esi+0x1E]
        nop 
        lea esp, ss:[esp]
        public_6cee910 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6cee910
        public_6cee91a : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x74]
        call dword ptr ds : [public_6d641c0]
        test al, al
        pop esi
        je public_6cee94a
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cee93e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cee940
        public_6cee93e : nop
        xor eax, eax
        public_6cee940 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6cee96a
        public_6cee94a : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_6cee95c
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cee95e
        public_6cee95c : nop
        xor ecx, ecx
        public_6cee95e : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x94]
        public_6cee96a : nop
        pop edi
        mov dword ptr ss : [ebp+0x28], 0
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6cee810)
    }
}

#undef public_6cee82c
#undef public_6cee82e
#undef public_6cee85d
#undef public_6cee85f
#undef public_6cee878
#undef public_6cee87a
#undef public_6cee884
#undef public_6cee8b6
#undef public_6cee8ce
#undef public_6cee910
#undef public_6cee91a
#undef public_6cee93e
#undef public_6cee940
#undef public_6cee94a
#undef public_6cee95c
#undef public_6cee95e
#undef public_6cee96a
