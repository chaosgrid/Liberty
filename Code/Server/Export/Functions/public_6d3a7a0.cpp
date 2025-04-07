#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3a7d8 _public_6d3a7d8
#define public_6d3a7ed _public_6d3a7ed
#define public_6d3a81d _public_6d3a81d
#define public_6d3a830 _public_6d3a830
#define public_6d3a852 _public_6d3a852
#define public_6d3a862 _public_6d3a862
#define public_6d3a86e _public_6d3a86e
#define public_6d3a876 _public_6d3a876
#define public_6d3a88a _public_6d3a88a
#define public_6d3a88c _public_6d3a88c
#define public_6d3a895 _public_6d3a895

PROC_DECLARE(0x6d3a7a0, internal_6d3a7a0, public_6d3a7a0);
extern "C" NAKED register_t __cdecl internal_6d3a7a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, ebp
        xor ebx, ebx
        cmp edx, ecx
        je public_6d3a876
        mov dx, word ptr ds : [ecx]
        cmp dx, word ptr ds : [eax+8]
        je public_6d3a7d8
        cmp dx, word ptr ds : [eax+0xE]
        jne public_6d3a876
        public_6d3a7d8 : nop
        add ecx, 2
        mov edx, ecx
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ecx
        jne public_6d3a81d
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d3a7ed : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3a88a
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3a88c
        public_6d3a81d : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3a86e
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d3a7ed
        lea ecx, ds:[ecx]
        public_6d3a830 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp edx, eax
        je public_6d3a862
        mov dx, word ptr ds : [eax]
        cmp dx, word ptr ds : [ecx+8]
        je public_6d3a852
        cmp dx, word ptr ds : [ecx+0xE]
        jne public_6d3a862
        public_6d3a852 : nop
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d3a830
        jmp public_6d3a7ed
        public_6d3a862 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3a86e : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d3a7ed
        public_6d3a876 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3a7ed
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3a88a : nop
        mov eax, edx
        public_6d3a88c : nop
        test eax, eax
        je public_6d3a895
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d3a895 : nop
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3a7a0)
    }
}

#undef public_6d3a7d8
#undef public_6d3a7ed
#undef public_6d3a81d
#undef public_6d3a830
#undef public_6d3a852
#undef public_6d3a862
#undef public_6d3a86e
#undef public_6d3a876
#undef public_6d3a88a
#undef public_6d3a88c
#undef public_6d3a895
