#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8928);

#define public_6ef8952 _public_6ef8952
#define public_6ef8957 _public_6ef8957
#define public_6ef897c _public_6ef897c
#define public_6ef8989 _public_6ef8989
#define public_6ef8993 _public_6ef8993
#define public_6ef899b _public_6ef899b
#define public_6ef89a6 _public_6ef89a6
#define public_6ef89c0 _public_6ef89c0
#define public_6ef89c1 _public_6ef89c1
#define public_6ef89cf _public_6ef89cf
#define public_6ef89d3 _public_6ef89d3
#define public_6ef89d6 _public_6ef89d6
#define public_6ef89de _public_6ef89de
#define public_6ef89e2 _public_6ef89e2
#define public_6ef89eb _public_6ef89eb
#define public_6ef89f7 _public_6ef89f7
#define public_6ef89fa _public_6ef89fa
#define public_6ef8a0f _public_6ef8a0f
#define public_6ef8a14 _public_6ef8a14
#define public_6ef8a1d _public_6ef8a1d
#define public_6ef8a26 _public_6ef8a26
#define public_6ef8a44 _public_6ef8a44
#define public_6ef8a47 _public_6ef8a47
#define public_6ef8a55 _public_6ef8a55
#define public_6ef8a57 _public_6ef8a57
#define public_6ef8a5f _public_6ef8a5f
#define public_6ef8a67 _public_6ef8a67
#define public_6ef8a6c _public_6ef8a6c
#define public_6ef8a82 _public_6ef8a82
#define public_6ef8a9e _public_6ef8a9e
#define public_6ef8aa5 _public_6ef8aa5
#define public_6ef8ab4 _public_6ef8ab4
#define public_6ef8ab6 _public_6ef8ab6
#define public_6ef8abc _public_6ef8abc
#define public_6ef8ac4 _public_6ef8ac4
#define public_6ef8acb _public_6ef8acb
#define public_6ef8ad2 _public_6ef8ad2

PROC_DECLARE(0x6ef8928, internal_6ef8928, public_6ef8928);
extern "C" NAKED register_t __cdecl internal_6ef8928()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push esi
        and dword ptr ds : [ecx], 0
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], 1
        mov eax, dword ptr ss : [ebp+8]
        test edi, edi
        je public_6ef8952
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_6ef8952 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ef899b
        public_6ef8957 : nop
        mov dl, byte ptr ds : [eax+1]
        inc eax
        cmp dl, 0x22
        je public_6ef8989
        test dl, dl
        je public_6ef8989
        movzx edx, dl
        test byte ptr ds : [edx+public_6f01401], 4
        je public_6ef897c
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ef897c
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        public_6ef897c : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ef8957
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_6ef8957
        public_6ef8989 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ef8993
        and byte ptr ds : [esi], 0
        inc esi
        public_6ef8993 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ef89de
        inc eax
        jmp public_6ef89de
        public_6ef899b : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ef89a6
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        public_6ef89a6 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        movzx ebx, dl
        test byte ptr ds : [ebx+public_6f01401], 4
        je public_6ef89c1
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ef89c0
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], bl
        inc esi
        public_6ef89c0 : nop
        inc eax
        public_6ef89c1 : nop
        cmp dl, 0x20
        je public_6ef89cf
        test dl, dl
        je public_6ef89d3
        cmp dl, 9
        jne public_6ef899b
        public_6ef89cf : nop
        test dl, dl
        jne public_6ef89d6
        public_6ef89d3 : nop
        dec eax
        jmp public_6ef89de
        public_6ef89d6 : nop
        test esi, esi
        je public_6ef89de
        and byte ptr ds : [esi-1], 0
        public_6ef89de : nop
        and dword ptr ss : [ebp+0x18], 0
        public_6ef89e2 : nop
        cmp byte ptr ds : [eax], 0
        je public_6ef8acb
        public_6ef89eb : nop
        mov dl, byte ptr ds : [eax]
        cmp dl, 0x20
        je public_6ef89f7
        cmp dl, 9
        jne public_6ef89fa
        public_6ef89f7 : nop
        inc eax
        jmp public_6ef89eb
        public_6ef89fa : nop
        cmp byte ptr ds : [eax], 0
        je public_6ef8acb
        test edi, edi
        je public_6ef8a0f
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_6ef8a0f : nop
        mov edx, dword ptr ss : [ebp+0x14]
        inc dword ptr ds : [edx]
        public_6ef8a14 : nop
        mov dword ptr ss : [ebp+8], 1
        xor ebx, ebx
        public_6ef8a1d : nop
        cmp byte ptr ds : [eax], 0x5C
        jne public_6ef8a26
        inc eax
        inc ebx
        jmp public_6ef8a1d
        public_6ef8a26 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ef8a57
        test bl, 1
        jne public_6ef8a55
        xor edi, edi
        cmp dword ptr ss : [ebp+0x18], edi
        je public_6ef8a44
        cmp byte ptr ds : [eax+1], 0x22
        lea edx, ds:[eax+1]
        jne public_6ef8a44
        mov eax, edx
        jmp public_6ef8a47
        public_6ef8a44 : nop
        mov dword ptr ss : [ebp+8], edi
        public_6ef8a47 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        xor edx, edx
        cmp dword ptr ss : [ebp+0x18], edx
        sete dl
        mov dword ptr ss : [ebp+0x18], edx
        public_6ef8a55 : nop
        shr ebx, 1
        public_6ef8a57 : nop
        mov edx, ebx
        dec ebx
        test edx, edx
        je public_6ef8a6c
        inc ebx
        public_6ef8a5f : nop
        test esi, esi
        je public_6ef8a67
        mov byte ptr ds : [esi], 0x5C
        inc esi
        public_6ef8a67 : nop
        inc dword ptr ds : [ecx]
        dec ebx
        jne public_6ef8a5f
        public_6ef8a6c : nop
        mov dl, byte ptr ds : [eax]
        test dl, dl
        je public_6ef8abc
        cmp dword ptr ss : [ebp+0x18], 0
        jne public_6ef8a82
        cmp dl, 0x20
        je public_6ef8abc
        cmp dl, 9
        je public_6ef8abc
        public_6ef8a82 : nop
        cmp dword ptr ss : [ebp+8], 0
        je public_6ef8ab6
        test esi, esi
        je public_6ef8aa5
        movzx ebx, dl
        test byte ptr ds : [ebx+public_6f01401], 4
        je public_6ef8a9e
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        inc dword ptr ds : [ecx]
        public_6ef8a9e : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_6ef8ab4
        public_6ef8aa5 : nop
        movzx edx, dl
        test byte ptr ds : [edx+public_6f01401], 4
        je public_6ef8ab4
        inc eax
        inc dword ptr ds : [ecx]
        public_6ef8ab4 : nop
        inc dword ptr ds : [ecx]
        public_6ef8ab6 : nop
        inc eax
        jmp public_6ef8a14
        public_6ef8abc : nop
        test esi, esi
        je public_6ef8ac4
        and byte ptr ds : [esi], 0
        inc esi
        public_6ef8ac4 : nop
        inc dword ptr ds : [ecx]
        jmp public_6ef89e2
        public_6ef8acb : nop
        test edi, edi
        je public_6ef8ad2
        and dword ptr ds : [edi], 0
        public_6ef8ad2 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        pop esi
        pop ebx
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef8928)
    }
}

#undef public_6ef8952
#undef public_6ef8957
#undef public_6ef897c
#undef public_6ef8989
#undef public_6ef8993
#undef public_6ef899b
#undef public_6ef89a6
#undef public_6ef89c0
#undef public_6ef89c1
#undef public_6ef89cf
#undef public_6ef89d3
#undef public_6ef89d6
#undef public_6ef89de
#undef public_6ef89e2
#undef public_6ef89eb
#undef public_6ef89f7
#undef public_6ef89fa
#undef public_6ef8a0f
#undef public_6ef8a14
#undef public_6ef8a1d
#undef public_6ef8a26
#undef public_6ef8a44
#undef public_6ef8a47
#undef public_6ef8a55
#undef public_6ef8a57
#undef public_6ef8a5f
#undef public_6ef8a67
#undef public_6ef8a6c
#undef public_6ef8a82
#undef public_6ef8a9e
#undef public_6ef8aa5
#undef public_6ef8ab4
#undef public_6ef8ab6
#undef public_6ef8abc
#undef public_6ef8ac4
#undef public_6ef8acb
#undef public_6ef8ad2
