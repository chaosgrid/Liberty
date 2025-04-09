#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6b90);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a6be6 _public_5a6be6
#define public_5a6be8 _public_5a6be8
#define public_5a6bf0 _public_5a6bf0
#define public_5a6c05 _public_5a6c05
#define public_5a6c12 _public_5a6c12
#define public_5a6c33 _public_5a6c33
#define public_5a6c4b _public_5a6c4b
#define public_5a6c55 _public_5a6c55
#define public_5a6c75 _public_5a6c75
#define public_5a6c8e _public_5a6c8e
#define public_5a6c92 _public_5a6c92
#define public_5a6ca5 _public_5a6ca5
#define public_5a6cb0 _public_5a6cb0
#define public_5a6cbe _public_5a6cbe
#define public_5a6cfa _public_5a6cfa
#define public_5a6d29 _public_5a6d29
#define public_5a6d65 _public_5a6d65
#define public_5a6d70 _public_5a6d70
#define public_5a6d87 _public_5a6d87
#define public_5a6db0 _public_5a6db0
#define public_5a6dc0 _public_5a6dc0
#define public_5a6dd3 _public_5a6dd3
#define public_5a6de9 _public_5a6de9
#define public_5a6dff _public_5a6dff
#define public_5a6e16 _public_5a6e16
#define public_5a6e3a _public_5a6e3a
#define public_5a6e45 _public_5a6e45
#define public_5a6e62 _public_5a6e62
#define public_5a6e70 _public_5a6e70
#define public_5a6e8a _public_5a6e8a
#define public_5a6e8d _public_5a6e8d

PROC_DECLARE(0x5a6b90, internal_5a6b90, public_5a6b90);
extern "C" NAKED register_t __cdecl internal_5a6b90()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_5a6d29
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_5a6be6
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_5a6be8
        public_5a6be6 : nop
        mov ecx, ebp
        public_5a6be8 : nop
        test edi, edi
        jne public_5a6bf0
        xor edx, edx
        jmp public_5a6c05
        public_5a6bf0 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_5a6c05 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5a6c12
        xor eax, eax
        public_5a6c12 : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_5a6c4b
        public_5a6c33 : nop
        push esi
        push ebx
        call public_5a7c80
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x1C
        add esp, 8
        add ebx, 0x1C
        cmp esi, eax
        jne public_5a6c33
        public_5a6c4b : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_5a6c75
        mov dword ptr ss : [esp+0x24], ebp
        public_5a6c55 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_5a7c80
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_5a6c55
        mov eax, dword ptr ss : [esp+0x20]
        public_5a6c75 : nop
        mov edx, ebp
        imul edx, 0x1C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_5a6ca5
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_5a6c92
        public_5a6c8e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_5a6c92 : nop
        add ecx, esi
        push esi
        push ecx
        call public_5a7c80
        add esi, 0x1C
        add esp, 8
        cmp esi, ebx
        jne public_5a6c8e
        public_5a6ca5 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_5a6cbe
        nop 
        public_5a6cb0 : nop
        mov ecx, esi
        call public_4c60e0
        add esi, 0x1C
        cmp esi, ebx
        jne public_5a6cb0
        public_5a6cbe : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x1C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_5a6cfa
        xor edx, edx
        mov edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5a6cfa : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5a6d29 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, esi
        sub ebx, edi
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_5a6dff
        mov eax, ebp
        imul eax, 0x1C
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_5a6d87
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_5a6d70
        public_5a6d65 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_5a6d70 : nop
        add eax, ebx
        push ebx
        push eax
        call public_5a7c80
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        jne public_5a6d65
        mov ecx, dword ptr ss : [esp+0x10]
        public_5a6d87 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_5a6dc0
        lea esp, ss:[esp]
        public_5a6db0 : nop
        push ebx
        push esi
        call public_5a7c80
        add esp, 8
        add esi, 0x1C
        dec ebp
        jne public_5a6db0
        public_5a6dc0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+8]
        cmp edi, ebp
        mov esi, edi
        je public_5a6de9
        mov edi, dword ptr ds : [public_5c628c]
        public_5a6dd3 : nop
        push ebx
        mov ecx, esi
        call edi
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x18], edx
        add esi, 0x1C
        cmp esi, ebp
        jne public_5a6dd3
        mov eax, dword ptr ss : [esp+0x10]
        public_5a6de9 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5a6dff : nop
        test ebp, ebp
        jbe public_5a6e8d
        imul ebp, 0x1C
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_5a6e3a
        public_5a6e16 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        call public_5a7c80
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x1C
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_5a6e16
        mov ecx, dword ptr ss : [esp+0x10]
        public_5a6e3a : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_5a6e62
        public_5a6e45 : nop
        sub esi, 0x1C
        sub ebx, 0x1C
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c628c]
        cmp esi, edi
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ebx+0x18], eax
        jne public_5a6e45
        mov ecx, dword ptr ss : [esp+0x10]
        public_5a6e62 : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_5a6e8a
        mov edi, dword ptr ss : [esp+0x28]
        nop 
        public_5a6e70 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c628c]
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        add esi, 0x1C
        cmp esi, ebx
        jne public_5a6e70
        mov ecx, dword ptr ss : [esp+0x10]
        public_5a6e8a : nop
        add dword ptr ds : [ecx+8], ebp
        public_5a6e8d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5a6b90)
    }
}

#undef public_5a6be6
#undef public_5a6be8
#undef public_5a6bf0
#undef public_5a6c05
#undef public_5a6c12
#undef public_5a6c33
#undef public_5a6c4b
#undef public_5a6c55
#undef public_5a6c75
#undef public_5a6c8e
#undef public_5a6c92
#undef public_5a6ca5
#undef public_5a6cb0
#undef public_5a6cbe
#undef public_5a6cfa
#undef public_5a6d29
#undef public_5a6d65
#undef public_5a6d70
#undef public_5a6d87
#undef public_5a6db0
#undef public_5a6dc0
#undef public_5a6dd3
#undef public_5a6de9
#undef public_5a6dff
#undef public_5a6e16
#undef public_5a6e3a
#undef public_5a6e45
#undef public_5a6e62
#undef public_5a6e70
#undef public_5a6e8a
#undef public_5a6e8d
