#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65d9a6e);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65de658);
CLANG_FORWARD_PROC_SYMBOL(public_65de7da);

#define public_65de68f _public_65de68f
#define public_65de69c _public_65de69c
#define public_65de6a9 _public_65de6a9
#define public_65de6b6 _public_65de6b6
#define public_65de6d3 _public_65de6d3
#define public_65de6de _public_65de6de
#define public_65de6f0 _public_65de6f0
#define public_65de70b _public_65de70b
#define public_65de71e _public_65de71e
#define public_65de725 _public_65de725
#define public_65de737 _public_65de737
#define public_65de752 _public_65de752
#define public_65de76e _public_65de76e
#define public_65de78e _public_65de78e
#define public_65de790 _public_65de790
#define public_65de79e _public_65de79e
#define public_65de7af _public_65de7af
#define public_65de7c1 _public_65de7c1
#define public_65de7d3 _public_65de7d3
#define public_65de7d5 _public_65de7d5

PROC_DECLARE(0x65de658, internal_65de658, public_65de658);
extern "C" NAKED register_t __cdecl internal_65de658()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        dec eax
        push ebx
        push esi
        dec eax
        push edi
        je public_65de6d3
        dec eax
        dec eax
        je public_65de6b6
        sub eax, 4
        je public_65de6b6
        sub eax, 3
        je public_65de6b6
        sub eax, 4
        je public_65de6a9
        sub eax, 6
        je public_65de69c
        dec eax
        je public_65de68f
        or eax, 0xFFFFFFFF
        jmp public_65de7d5
        public_65de68f : nop
        mov ebx, dword ptr ds : [public_65e6418]
        mov edi, offset public_65e6418
        jmp public_65de6de
        public_65de69c : nop
        mov ebx, dword ptr ds : [public_65e6414]
        mov edi, offset public_65e6414
        jmp public_65de6de
        public_65de6a9 : nop
        mov ebx, dword ptr ds : [public_65e641c]
        mov edi, offset public_65e641c
        jmp public_65de6de
        public_65de6b6 : nop
        call public_65d8f61
        mov esi, eax
        push dword ptr ds : [esi+0x50]
        push dword ptr ss : [ebp+8]
        call public_65de7da
        mov edi, eax
        pop ecx
        add edi, 8
        pop ecx
        mov ebx, dword ptr ds : [edi]
        jmp public_65de6f0
        public_65de6d3 : nop
        mov ebx, dword ptr ds : [public_65e6410]
        mov edi, offset public_65e6410
        public_65de6de : nop
        push 1
        mov dword ptr ss : [ebp-4], 1
        call public_65dceab
        mov esi, dword ptr ss : [ebp+8]
        pop ecx
        public_65de6f0 : nop
        cmp ebx, 1
        jne public_65de70b
        cmp dword ptr ss : [ebp-4], 0
        je public_65de7d3
        push ebx
        call public_65dcf0c
        pop ecx
        jmp public_65de7d3
        public_65de70b : nop
        xor ecx, ecx
        cmp ebx, ecx
        jne public_65de725
        cmp dword ptr ss : [ebp-4], ecx
        je public_65de71e
        push 1
        call public_65dcf0c
        pop ecx
        public_65de71e : nop
        push 3
        call public_65d9a6e
        public_65de725 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 8
        je public_65de737
        cmp eax, 0xB
        je public_65de737
        cmp eax, 4
        jne public_65de752
        public_65de737 : nop
        mov edx, dword ptr ds : [esi+0x54]
        cmp eax, 8
        mov dword ptr ss : [ebp-8], edx
        mov dword ptr ds : [esi+0x54], ecx
        jne public_65de78e
        mov edx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x58], 0x8C
        mov dword ptr ss : [ebp-0xC], edx
        public_65de752 : nop
        cmp eax, 8
        jne public_65de78e
        mov ecx, dword ptr ds : [public_65e5728]
        mov eax, dword ptr ds : [public_65e572c]
        add eax, ecx
        cmp ecx, eax
        jge public_65de790
        lea eax, ds:[ecx+ecx*2]
        shl eax, 2
        public_65de76e : nop
        mov edx, dword ptr ds : [esi+0x50]
        add eax, 0xC
        and dword ptr ds : [edx+eax-4], 0
        mov edx, dword ptr ds : [public_65e5728]
        mov edi, dword ptr ds : [public_65e572c]
        inc ecx
        add edi, edx
        cmp ecx, edi
        jl public_65de76e
        jmp public_65de790
        public_65de78e : nop
        mov dword ptr ds : [edi], ecx
        public_65de790 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_65de79e
        push 1
        call public_65dcf0c
        pop ecx
        public_65de79e : nop
        cmp dword ptr ss : [ebp+8], 8
        jne public_65de7af
        push dword ptr ds : [esi+0x58]
        push 8
        call ebx
        pop ecx
        pop ecx
        jmp public_65de7c1
        public_65de7af : nop
        push dword ptr ss : [ebp+8]
        call ebx
        cmp dword ptr ss : [ebp+8], 0xB
        pop ecx
        je public_65de7c1
        cmp dword ptr ss : [ebp+8], 4
        jne public_65de7d3
        public_65de7c1 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp+8], 8
        mov dword ptr ds : [esi+0x54], eax
        jne public_65de7d3
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+0x58], eax
        public_65de7d3 : nop
        xor eax, eax
        public_65de7d5 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65de658)
    }
}

#undef public_65de68f
#undef public_65de69c
#undef public_65de6a9
#undef public_65de6b6
#undef public_65de6d3
#undef public_65de6de
#undef public_65de6f0
#undef public_65de70b
#undef public_65de71e
#undef public_65de725
#undef public_65de737
#undef public_65de752
#undef public_65de76e
#undef public_65de78e
#undef public_65de790
#undef public_65de79e
#undef public_65de7af
#undef public_65de7c1
#undef public_65de7d3
#undef public_65de7d5
