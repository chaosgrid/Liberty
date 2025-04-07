#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f637e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f63802 _public_6f63802
#define public_6f6381a _public_6f6381a
#define public_6f63825 _public_6f63825
#define public_6f6383b _public_6f6383b
#define public_6f63850 _public_6f63850
#define public_6f63869 _public_6f63869
#define public_6f63887 _public_6f63887
#define public_6f638b2 _public_6f638b2
#define public_6f638ba _public_6f638ba
#define public_6f638d2 _public_6f638d2
#define public_6f638da _public_6f638da
#define public_6f638f0 _public_6f638f0
#define public_6f63900 _public_6f63900
#define public_6f63916 _public_6f63916
#define public_6f63923 _public_6f63923
#define public_6f63938 _public_6f63938
#define public_6f63948 _public_6f63948
#define public_6f63960 _public_6f63960
#define public_6f6397e _public_6f6397e
#define public_6f639a9 _public_6f639a9
#define public_6f639bd _public_6f639bd
#define public_6f639d3 _public_6f639d3
#define public_6f639db _public_6f639db
#define public_6f63a00 _public_6f63a00

PROC_DECLARE(0x6f637e0, internal_6f637e0, public_6f637e0);
extern "C" NAKED register_t __cdecl internal_6f637e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, ecx
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f63a00
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_6f63802
        xor edi, edi
        jmp public_6f6381a
        public_6f63802 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f6381a : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f63825
        xor edx, edx
        jmp public_6f6383b
        public_6f63825 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6383b : nop
        cmp edi, edx
        ja public_6f638b2
        mov edi, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        mov edx, ecx
        je public_6f63869
        mov edi, edi
        public_6f63850 : nop
        mov esi, eax
        mov edi, edx
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x44
        add edx, 0x44
        cmp eax, ecx
        jne public_6f63850
        public_6f63869 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f63887
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        imul edx, 0x44
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f63887 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x78787879
        imul ebx
        mov eax, dword ptr ss : [ebp+4]
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x44
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f638b2 : nop
        test esi, esi
        jne public_6f638ba
        xor edi, edi
        jmp public_6f638d2
        public_6f638ba : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f638d2 : nop
        test ecx, ecx
        jne public_6f638da
        xor edx, edx
        jmp public_6f638f0
        public_6f638da : nop
        mov edx, dword ptr ss : [ebp+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f638f0 : nop
        cmp edi, edx
        ja public_6f639a9
        test ecx, ecx
        jne public_6f63900
        xor edx, edx
        jmp public_6f63916
        public_6f63900 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, ecx
        mov eax, 0x78787879
        imul ebp
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f63916 : nop
        imul edx, 0x44
        add edx, esi
        mov eax, esi
        cmp eax, edx
        mov ebp, ecx
        je public_6f63938
        public_6f63923 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x44
        mov ecx, 0x11
        add ebp, 0x44
        cmp eax, edx
        rep movsd
        jne public_6f63923
        public_6f63938 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6f63960
        public_6f63948 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f63948
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f63960 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f6397e
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        imul edx, 0x44
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6f6397e : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x78787879
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [ecx+4]
        imul edx, 0x44
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6f639a9 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6f639bd
        xor edx, edx
        jmp public_6f639d3
        public_6f639bd : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f639d3 : nop
        test edx, edx
        mov eax, edx
        jge public_6f639db
        xor eax, eax
        public_6f639db : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6f30960
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f63a00 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f637e0)
    }
}

#undef public_6f63802
#undef public_6f6381a
#undef public_6f63825
#undef public_6f6383b
#undef public_6f63850
#undef public_6f63869
#undef public_6f63887
#undef public_6f638b2
#undef public_6f638ba
#undef public_6f638d2
#undef public_6f638da
#undef public_6f638f0
#undef public_6f63900
#undef public_6f63916
#undef public_6f63923
#undef public_6f63938
#undef public_6f63948
#undef public_6f63960
#undef public_6f6397e
#undef public_6f639a9
#undef public_6f639bd
#undef public_6f639d3
#undef public_6f639db
#undef public_6f63a00
