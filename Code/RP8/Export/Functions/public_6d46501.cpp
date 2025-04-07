#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d464ec);
CLANG_FORWARD_PROC_SYMBOL(public_6d46501);
CLANG_FORWARD_PROC_SYMBOL(public_6d49926);

#define public_6d46526 _public_6d46526
#define public_6d46534 _public_6d46534
#define public_6d46540 _public_6d46540
#define public_6d46554 _public_6d46554
#define public_6d46568 _public_6d46568
#define public_6d46576 _public_6d46576
#define public_6d4657a _public_6d4657a
#define public_6d4658c _public_6d4658c
#define public_6d46593 _public_6d46593
#define public_6d465a2 _public_6d465a2
#define public_6d465b4 _public_6d465b4
#define public_6d465e5 _public_6d465e5
#define public_6d465e7 _public_6d465e7

PROC_DECLARE(0x6d46501, internal_6d46501, public_6d46501);
extern "C" NAKED register_t __cdecl internal_6d46501()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp ebx, 0x3B9AC9F0
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp-4], eax
        jbe public_6d46526
        xor edx, edx
        inc edx
        mov eax, edi
        call public_6d464ec
        public_6d46526 : nop
        mov eax, ebx
        and eax, 7
        jbe public_6d46534
        push 8
        pop ecx
        sub ecx, eax
        add ebx, ecx
        public_6d46534 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        jl public_6d46540
        cmp esi, 2
        jl public_6d46554
        public_6d46540 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0xC
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x18], esi
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46554 : nop
        mov eax, dword ptr ss : [ebp-4]
        and dword ptr ss : [ebp+0x10], 0
        lea eax, ds:[eax+esi*4+0x30]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6d4657a
        public_6d46568 : nop
        cmp dword ptr ds : [eax+8], ebx
        jae public_6d46576
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6d46568
        public_6d46576 : nop
        test eax, eax
        jne public_6d465e7
        public_6d4657a : nop
        cmp dword ptr ss : [ebp+0x10], 0
        lea edi, ds:[ebx+0x10]
        jne public_6d4658c
        mov esi, dword ptr ds : [esi*4+public_6d613b0]
        jmp public_6d46593
        public_6d4658c : nop
        mov esi, dword ptr ds : [esi*4+public_6d613b8]
        public_6d46593 : nop
        mov eax, 0x3B9ACA00
        sub eax, edi
        cmp esi, eax
        jbe public_6d465b4
        mov esi, eax
        jmp public_6d465b4
        public_6d465a2 : nop
        shr esi, 1
        cmp esi, 0x32
        jae public_6d465b4
        mov eax, dword ptr ss : [ebp+8]
        push 2
        pop edx
        call public_6d464ec
        public_6d465b4 : nop
        lea eax, ds:[esi+edi]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d49926
        test eax, eax
        pop ecx
        pop ecx
        je public_6d465a2
        mov ecx, dword ptr ss : [ebp-4]
        lea edx, ds:[esi+edi]
        add dword ptr ds : [ecx+0x48], edx
        mov ecx, dword ptr ss : [ebp+0x10]
        and dword ptr ds : [eax], 0
        and dword ptr ds : [eax+4], 0
        add esi, ebx
        test ecx, ecx
        mov dword ptr ds : [eax+8], esi
        jne public_6d465e5
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6d465e5 : nop
        mov dword ptr ds : [ecx], eax
        public_6d465e7 : nop
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[ecx+eax+0x10]
        add ecx, ebx
        sub dword ptr ds : [eax+8], ebx
        pop edi
        pop esi
        mov dword ptr ds : [eax+4], ecx
        mov eax, edx
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d46501)
    }
}

#undef public_6d46526
#undef public_6d46534
#undef public_6d46540
#undef public_6d46554
#undef public_6d46568
#undef public_6d46576
#undef public_6d4657a
#undef public_6d4658c
#undef public_6d46593
#undef public_6d465a2
#undef public_6d465b4
#undef public_6d465e5
#undef public_6d465e7
