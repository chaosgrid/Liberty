#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40f70);

#define public_6d40f9c _public_6d40f9c
#define public_6d40fc2 _public_6d40fc2
#define public_6d40fd5 _public_6d40fd5
#define public_6d40ff0 _public_6d40ff0
#define public_6d41015 _public_6d41015
#define public_6d4104f _public_6d4104f
#define public_6d41066 _public_6d41066
#define public_6d41077 _public_6d41077
#define public_6d410ab _public_6d410ab
#define public_6d410bf _public_6d410bf
#define public_6d410c3 _public_6d410c3

PROC_DECLARE(0x6d40f70, internal_6d40f70, public_6d40f70);
extern "C" NAKED register_t __cdecl internal_6d40f70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        jne public_6d40f9c
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d410c3
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40f9c : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], eax
        jne public_6d40fc2
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d410c3
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40fc2 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        inc edi
        sub dword ptr ss : [ebp-8], 2
        jmp public_6d410ab
        public_6d40fd5 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40ff0
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d410c3
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40ff0 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d41015
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d410c3
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d41015 : nop
        movzx eax, byte ptr ds : [edi]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp-0xC]
        dec dword ptr ss : [ebp-4]
        sub dword ptr ss : [ebp-8], 2
        mov dword ptr ds : [ecx+0x14], 0x4E
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        inc edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0xC]
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d4104f
        cmp eax, 0x20
        jl public_6d41066
        public_6d4104f : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x1A
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0xC]
        pop ecx
        public_6d41066 : nop
        cmp eax, 0x10
        jl public_6d41077
        mov cl, byte ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax+esi+0xDA], cl
        jmp public_6d410ab
        public_6d41077 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov cl, dl
        and cl, 0xF
        sar edx, 4
        cmp cl, dl
        mov byte ptr ds : [eax+esi+0xCA], cl
        mov byte ptr ds : [eax+esi+0xDA], dl
        jbe public_6d410ab
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x14], 0x1B
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d410ab : nop
        cmp dword ptr ss : [ebp-8], 0
        jg public_6d40fd5
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], edi
        mov al, 1
        public_6d410bf : nop
        pop edi
        pop ebx
        leave 
        ret 
        public_6d410c3 : nop
        xor al, al
        jmp public_6d410bf
        UNREACHABLE_TRAP(0x6d40f70)
    }
}

#undef public_6d40f9c
#undef public_6d40fc2
#undef public_6d40fd5
#undef public_6d40ff0
#undef public_6d41015
#undef public_6d4104f
#undef public_6d41066
#undef public_6d41077
#undef public_6d410ab
#undef public_6d410bf
#undef public_6d410c3
