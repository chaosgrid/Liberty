#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa6f36 _public_6fa6f36
#define public_6fa6f38 _public_6fa6f38
#define public_6fa6f40 _public_6fa6f40
#define public_6fa6f55 _public_6fa6f55
#define public_6fa6f62 _public_6fa6f62
#define public_6fa6f83 _public_6fa6f83
#define public_6fa6f9b _public_6fa6f9b
#define public_6fa6fa5 _public_6fa6fa5
#define public_6fa6fc5 _public_6fa6fc5
#define public_6fa6fde _public_6fa6fde
#define public_6fa6fe2 _public_6fa6fe2
#define public_6fa6ff5 _public_6fa6ff5
#define public_6fa7000 _public_6fa7000
#define public_6fa700e _public_6fa700e
#define public_6fa704a _public_6fa704a
#define public_6fa7079 _public_6fa7079
#define public_6fa70b5 _public_6fa70b5
#define public_6fa70c0 _public_6fa70c0
#define public_6fa70d7 _public_6fa70d7
#define public_6fa7100 _public_6fa7100
#define public_6fa7110 _public_6fa7110
#define public_6fa7120 _public_6fa7120
#define public_6fa713e _public_6fa713e
#define public_6fa7154 _public_6fa7154
#define public_6fa7170 _public_6fa7170
#define public_6fa7194 _public_6fa7194
#define public_6fa71a0 _public_6fa71a0
#define public_6fa71c5 _public_6fa71c5
#define public_6fa71d2 _public_6fa71d2
#define public_6fa71f3 _public_6fa71f3
#define public_6fa71f6 _public_6fa71f6

PROC_DECLARE(0x6fa6ee0, internal_6fa6ee0, public_6fa6ee0);
extern "C" NAKED register_t __cdecl internal_6fa6ee0()
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
        jae public_6fa7079
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6fa6f36
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
        jb public_6fa6f38
        public_6fa6f36 : nop
        mov ecx, ebp
        public_6fa6f38 : nop
        test edi, edi
        jne public_6fa6f40
        xor edx, edx
        jmp public_6fa6f55
        public_6fa6f40 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa6f55 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa6f62
        xor eax, eax
        public_6fa6f62 : nop
        imul eax, 0x1C
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa6f9b
        public_6fa6f83 : nop
        push esi
        push ebx
        call public_6fa7230
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x1C
        add esp, 8
        add ebx, 0x1C
        cmp esi, eax
        jne public_6fa6f83
        public_6fa6f9b : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6fa6fc5
        mov dword ptr ss : [esp+0x24], ebp
        public_6fa6fa5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6fa7230
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa6fa5
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa6fc5 : nop
        mov edx, ebp
        imul edx, 0x1C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6fa6ff5
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa6fe2
        public_6fa6fde : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6fa6fe2 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa7230
        add esi, 0x1C
        add esp, 8
        cmp esi, ebx
        jne public_6fa6fde
        public_6fa6ff5 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6fa700e
        nop 
        public_6fa7000 : nop
        mov ecx, esi
        call public_6fa6d20
        add esi, 0x1C
        cmp esi, ebx
        jne public_6fa7000
        public_6fa700e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x1C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6fa704a
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
        public_6fa704a : nop
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
        public_6fa7079 : nop
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
        jae public_6fa7154
        mov eax, ebp
        imul eax, 0x1C
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_6fa70d7
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa70c0
        public_6fa70b5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6fa70c0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6fa7230
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        jne public_6fa70b5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa70d7 : nop
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
        je public_6fa7110
        lea esp, ss:[esp]
        public_6fa7100 : nop
        push ebx
        push esi
        call public_6fa7230
        add esp, 8
        add esi, 0x1C
        dec ebp
        jne public_6fa7100
        public_6fa7110 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+8]
        cmp edi, ebp
        mov esi, edi
        je public_6fa713e
        lea edi, ds:[ebx+8]
        public_6fa7120 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ds:[esi+8]
        push edi
        mov dword ptr ds : [ecx-4], eax
        call public_6fa73c0
        add esi, 0x1C
        cmp esi, ebp
        jne public_6fa7120
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa713e : nop
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
        public_6fa7154 : nop
        test ebp, ebp
        jbe public_6fa71f6
        imul ebp, 0x1C
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6fa7194
        nop 
        lea esp, ss:[esp]
        public_6fa7170 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        call public_6fa7230
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x1C
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6fa7170
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa7194 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6fa71c5
        nop 
        public_6fa71a0 : nop
        mov eax, dword ptr ds : [esi-0x1C]
        sub esi, 0x1C
        sub ebx, 0x1C
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        mov dword ptr ds : [ebx+4], ecx
        push edx
        lea ecx, ds:[ebx+8]
        call public_6fa73c0
        cmp esi, edi
        jne public_6fa71a0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa71c5 : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_6fa71f3
        mov edi, dword ptr ss : [esp+0x28]
        public_6fa71d2 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+8]
        lea ecx, ds:[esi+8]
        push eax
        mov dword ptr ds : [ecx-4], edx
        call public_6fa73c0
        add esi, 0x1C
        cmp esi, ebx
        jne public_6fa71d2
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa71f3 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6fa71f6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa6ee0)
    }
}

#undef public_6fa6f36
#undef public_6fa6f38
#undef public_6fa6f40
#undef public_6fa6f55
#undef public_6fa6f62
#undef public_6fa6f83
#undef public_6fa6f9b
#undef public_6fa6fa5
#undef public_6fa6fc5
#undef public_6fa6fde
#undef public_6fa6fe2
#undef public_6fa6ff5
#undef public_6fa7000
#undef public_6fa700e
#undef public_6fa704a
#undef public_6fa7079
#undef public_6fa70b5
#undef public_6fa70c0
#undef public_6fa70d7
#undef public_6fa7100
#undef public_6fa7110
#undef public_6fa7120
#undef public_6fa713e
#undef public_6fa7154
#undef public_6fa7170
#undef public_6fa7194
#undef public_6fa71a0
#undef public_6fa71c5
#undef public_6fa71d2
#undef public_6fa71f3
#undef public_6fa71f6
