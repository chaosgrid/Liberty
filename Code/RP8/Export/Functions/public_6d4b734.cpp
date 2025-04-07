#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ae5e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4dc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b734);

#define public_6d4b773 _public_6d4b773
#define public_6d4b784 _public_6d4b784
#define public_6d4b7c9 _public_6d4b7c9
#define public_6d4b7f9 _public_6d4b7f9
#define public_6d4b826 _public_6d4b826
#define public_6d4b829 _public_6d4b829
#define public_6d4b84f _public_6d4b84f
#define public_6d4b884 _public_6d4b884
#define public_6d4b8ad _public_6d4b8ad
#define public_6d4b8af _public_6d4b8af
#define public_6d4b8ca _public_6d4b8ca
#define public_6d4b8d2 _public_6d4b8d2
#define public_6d4b8d8 _public_6d4b8d8
#define public_6d4b8e3 _public_6d4b8e3
#define public_6d4b8e7 _public_6d4b8e7
#define public_6d4b918 _public_6d4b918
#define public_6d4b92a _public_6d4b92a
#define public_6d4b92d _public_6d4b92d
#define public_6d4b950 _public_6d4b950
#define public_6d4b958 _public_6d4b958
#define public_6d4b959 _public_6d4b959

PROC_DECLARE(0x6d4b734, internal_6d4b734, public_6d4b734);
extern "C" NAKED register_t __cdecl internal_6d4b734()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edi+0xFC], 0
        mov eax, dword ptr ds : [edi+0x16C]
        mov esi, dword ptr ds : [edi+0x194]
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ds : [edi+0x174]
        mov dword ptr ss : [ebp-0x1C], eax
        je public_6d4b773
        cmp dword ptr ds : [esi+0x34], 0
        jne public_6d4b773
        call public_6d4b4dc
        test al, al
        je public_6d4b959
        public_6d4b773 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        push ebx
        mov dword ptr ss : [ebp-8], eax
        jbe public_6d4b784
        dec eax
        jmp public_6d4b950
        public_6d4b784 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp-0x2C], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x48], ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov eax, dword ptr ds : [edi+0x178]
        mov dword ptr ss : [ebp-0x40], eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x20], ecx
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [ebp-0x14], ecx
        mov ecx, dword ptr ds : [edi+0x168]
        mov dword ptr ss : [ebp-0xC], ebx
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d4b8d8
        public_6d4b7c9 : nop
        cmp eax, 8
        jge public_6d4b7f9
        push 0
        push eax
        lea eax, ss:[ebp-0x48]
        push ebx
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b8e3
        mov eax, dword ptr ss : [ebp-0x30]
        cmp eax, 8
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0xC], ebx
        jge public_6d4b7f9
        xor ecx, ecx
        inc ecx
        jmp public_6d4b829
        public_6d4b7f9 : nop
        lea ecx, ds:[eax-8]
        mov edx, ebx
        sar edx, cl
        mov ecx, dword ptr ss : [ebp-0x14]
        and edx, 0xFF
        mov ecx, dword ptr ds : [ecx+edx*4+0xD4]
        test ecx, ecx
        je public_6d4b826
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        movzx ecx, byte ptr ds : [edx+ecx+0x4D4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d4b84f
        public_6d4b826 : nop
        push 9
        pop ecx
        public_6d4b829 : nop
        push ecx
        push dword ptr ss : [ebp-0x14]
        push eax
        lea eax, ss:[ebp-0x48]
        push ebx
        push eax
        call public_6d4ae5e
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [ebp+8], eax
        jl public_6d4b8e3
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0xC], ebx
        public_6d4b84f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sar ecx, 4
        and dword ptr ss : [ebp+8], 0xF
        mov dword ptr ss : [ebp-0x10], ecx
        je public_6d4b8ca
        add dword ptr ss : [ebp-4], ecx
        cmp eax, dword ptr ss : [ebp+8]
        jge public_6d4b884
        push dword ptr ss : [ebp+8]
        push eax
        lea eax, ss:[ebp-0x48]
        push ebx
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b8e3
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0xC], ebx
        public_6d4b884 : nop
        mov ecx, dword ptr ss : [ebp+8]
        xor edx, edx
        sub eax, ecx
        inc edx
        shl edx, cl
        mov ecx, eax
        sar ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        dec edx
        shl ecx, 2
        and edx, ebx
        cmp edx, dword ptr ds : [ecx+public_6d61f68]
        jge public_6d4b8ad
        mov ebx, dword ptr ds : [ecx+public_6d61fa8]
        add ebx, edx
        jmp public_6d4b8af
        public_6d4b8ad : nop
        mov ebx, edx
        public_6d4b8af : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-0x20]
        shl ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx*4+public_6d61270]
        mov word ptr ds : [edx+ecx*2], bx
        mov ebx, dword ptr ss : [ebp-0xC]
        jmp public_6d4b8d2
        public_6d4b8ca : nop
        cmp ecx, 0xF
        jne public_6d4b8e7
        add dword ptr ss : [ebp-4], ecx
        public_6d4b8d2 : nop
        inc dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        public_6d4b8d8 : nop
        cmp ecx, dword ptr ss : [ebp-0x18]
        jle public_6d4b7c9
        jmp public_6d4b92d
        public_6d4b8e3 : nop
        xor al, al
        jmp public_6d4b958
        public_6d4b8e7 : nop
        xor edx, edx
        inc edx
        shl edx, cl
        cmp dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp-8], edx
        je public_6d4b92a
        cmp eax, dword ptr ss : [ebp-0x10]
        jge public_6d4b918
        push dword ptr ss : [ebp-0x10]
        push eax
        lea eax, ss:[ebp-0x48]
        push ebx
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b8e3
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x30]
        public_6d4b918 : nop
        sub eax, dword ptr ss : [ebp-0x10]
        mov edx, ebx
        mov ecx, eax
        sar edx, cl
        mov ecx, dword ptr ss : [ebp+8]
        dec ecx
        and edx, ecx
        add dword ptr ss : [ebp-8], edx
        public_6d4b92a : nop
        dec dword ptr ss : [ebp-8]
        public_6d4b92d : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [edi+0x178], ecx
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6d4b950 : nop
        dec dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x20], eax
        mov al, 1
        public_6d4b958 : nop
        pop ebx
        public_6d4b959 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4b734)
    }
}

#undef public_6d4b773
#undef public_6d4b784
#undef public_6d4b7c9
#undef public_6d4b7f9
#undef public_6d4b826
#undef public_6d4b829
#undef public_6d4b84f
#undef public_6d4b884
#undef public_6d4b8ad
#undef public_6d4b8af
#undef public_6d4b8ca
#undef public_6d4b8d2
#undef public_6d4b8d8
#undef public_6d4b8e3
#undef public_6d4b8e7
#undef public_6d4b918
#undef public_6d4b92a
#undef public_6d4b92d
#undef public_6d4b950
#undef public_6d4b958
#undef public_6d4b959
