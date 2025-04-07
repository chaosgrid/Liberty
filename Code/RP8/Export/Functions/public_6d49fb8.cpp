#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d49f69);
CLANG_FORWARD_PROC_SYMBOL(public_6d49fb8);

#define public_6d49fe9 _public_6d49fe9
#define public_6d49ff7 _public_6d49ff7
#define public_6d4a03f _public_6d4a03f
#define public_6d4a055 _public_6d4a055
#define public_6d4a072 _public_6d4a072
#define public_6d4a075 _public_6d4a075
#define public_6d4a09f _public_6d4a09f
#define public_6d4a0b7 _public_6d4a0b7
#define public_6d4a0ce _public_6d4a0ce
#define public_6d4a0f3 _public_6d4a0f3
#define public_6d4a110 _public_6d4a110
#define public_6d4a113 _public_6d4a113
#define public_6d4a12c _public_6d4a12c
#define public_6d4a13b _public_6d4a13b
#define public_6d4a140 _public_6d4a140
#define public_6d4a16f _public_6d4a16f
#define public_6d4a17f _public_6d4a17f
#define public_6d4a18c _public_6d4a18c
#define public_6d4a18d _public_6d4a18d

PROC_DECLARE(0x6d49fb8, internal_6d49fb8, public_6d49fb8);
extern "C" NAKED register_t __cdecl internal_6d49fb8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0x134]
        mov eax, dword ptr ds : [edi+0x118]
        mov ebx, dword ptr ds : [edi+0x184]
        dec esi
        dec eax
        mov dword ptr ss : [ebp-0x34], eax
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp-0x20], ebx
        mov dword ptr ss : [ebp-0x30], esi
        jmp public_6d4a140
        public_6d49fe9 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        cmp ecx, esi
        mov dword ptr ss : [ebp+8], ecx
        ja public_6d4a13b
        public_6d49ff7 : nop
        mov eax, dword ptr ds : [edi+0x13C]
        shl eax, 7
        push eax
        push dword ptr ds : [ebx+0x20]
        call public_6d45f86
        mov ecx, dword ptr ds : [edi+0x194]
        lea eax, ds:[ebx+0x20]
        push eax
        push edi
        call dword ptr ds : [ecx+4]
        add esp, 0x10
        test al, al
        je public_6d4a16f
        xor eax, eax
        cmp dword ptr ds : [edi+0x120], eax
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0xC], eax
        jle public_6d4a12c
        lea ecx, ds:[edi+0x124]
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d4a03f : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov esi, dword ptr ds : [ecx]
        cmp byte ptr ds : [esi+0x30], 0
        jne public_6d4a055
        add eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d4a113
        public_6d4a055 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+0x198]
        mov ecx, dword ptr ds : [edx+ecx*4+4]
        mov dword ptr ss : [ebp-0x38], ecx
        mov ecx, dword ptr ss : [ebp-0x30]
        cmp dword ptr ss : [ebp+8], ecx
        jae public_6d4a072
        mov ecx, dword ptr ds : [esi+0x34]
        jmp public_6d4a075
        public_6d4a072 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        public_6d4a075 : nop
        mov ebx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [edx+ebx*4]
        mov ebx, dword ptr ds : [esi+0x40]
        imul ebx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        imul ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [esi+0x38], 0
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp-0x1C], ecx
        jle public_6d4a110
        public_6d4a09f : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        cmp dword ptr ds : [edi+0x80], ecx
        jb public_6d4a0b7
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-8]
        add edx, ecx
        cmp edx, dword ptr ds : [esi+0x48]
        jge public_6d4a0f3
        public_6d4a0b7 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x10], ebx
        jle public_6d4a0f3
        mov edx, dword ptr ss : [ebp-0x20]
        lea eax, ds:[edx+eax*4+0x20]
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ss : [ebp-0x2C], ecx
        public_6d4a0ce : nop
        push dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ds : [eax]
        push esi
        push edi
        call dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [esi+0x24]
        add dword ptr ss : [ebp-0x10], eax
        add dword ptr ss : [ebp-0x14], 4
        add esp, 0x14
        dec dword ptr ss : [ebp-0x2C]
        jne public_6d4a0ce
        mov eax, dword ptr ss : [ebp-0x18]
        public_6d4a0f3 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        add eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x24]
        inc dword ptr ss : [ebp-8]
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [ebp-0x18], eax
        jl public_6d4a09f
        public_6d4a110 : nop
        mov ebx, dword ptr ss : [ebp-0x20]
        public_6d4a113 : nop
        inc dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-0x24], 4
        cmp ecx, dword ptr ds : [edi+0x120]
        jl public_6d4a03f
        mov esi, dword ptr ss : [ebp-0x30]
        public_6d4a12c : nop
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], esi
        jbe public_6d49ff7
        mov eax, dword ptr ss : [ebp-4]
        public_6d4a13b : nop
        and dword ptr ds : [ebx+0x14], 0
        inc eax
        public_6d4a140 : nop
        cmp eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp-4], eax
        jl public_6d49fe9
        inc dword ptr ds : [edi+0x88]
        lea eax, ds:[edi+0x80]
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x118]
        jae public_6d4a17f
        mov ecx, edi
        call public_6d49f69
        push 3
        jmp public_6d4a18c
        public_6d4a16f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x14], eax
        xor eax, eax
        jmp public_6d4a18d
        public_6d4a17f : nop
        mov eax, dword ptr ds : [edi+0x18C]
        push edi
        call dword ptr ds : [eax+0xC]
        pop ecx
        push 4
        public_6d4a18c : nop
        pop eax
        public_6d4a18d : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d49fb8)
    }
}

#undef public_6d49fe9
#undef public_6d49ff7
#undef public_6d4a03f
#undef public_6d4a055
#undef public_6d4a072
#undef public_6d4a075
#undef public_6d4a09f
#undef public_6d4a0b7
#undef public_6d4a0ce
#undef public_6d4a0f3
#undef public_6d4a110
#undef public_6d4a113
#undef public_6d4a12c
#undef public_6d4a13b
#undef public_6d4a140
#undef public_6d4a16f
#undef public_6d4a17f
#undef public_6d4a18c
#undef public_6d4a18d
