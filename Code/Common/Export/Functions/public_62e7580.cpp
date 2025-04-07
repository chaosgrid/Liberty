#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62ed0d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed100);
CLANG_FORWARD_PROC_SYMBOL(public_62ed140);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62e75a6 _public_62e75a6
#define public_62e75c4 _public_62e75c4
#define public_62e75d3 _public_62e75d3
#define public_62e75e5 _public_62e75e5
#define public_62e762f _public_62e762f
#define public_62e7631 _public_62e7631
#define public_62e765e _public_62e765e
#define public_62e7660 _public_62e7660
#define public_62e76a1 _public_62e76a1
#define public_62e76b7 _public_62e76b7
#define public_62e76c3 _public_62e76c3
#define public_62e771f _public_62e771f
#define public_62e7733 _public_62e7733
#define public_62e7756 _public_62e7756
#define public_62e7758 _public_62e7758
#define public_62e77b3 _public_62e77b3
#define public_62e77c6 _public_62e77c6
#define public_62e77ca _public_62e77ca

PROC_DECLARE(0x62e7580, internal_62e7580, public_62e7580);
extern "C" NAKED register_t __cdecl internal_62e7580()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1D]
        test al, al
        push edi
        mov dword ptr ss : [esp+0x14], esi
        jne public_62e75d3
        mov edx, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi+0x10]
        lea ebx, ds:[esi+0xC]
        mov eax, edx
        cmp eax, edx
        je public_62e75c4
        public_62e75a6 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x88
        mov ecx, 0x22
        add ebp, 0x88
        cmp eax, edx
        rep movsd
        jne public_62e75a6
        mov esi, dword ptr ss : [esp+0x14]
        public_62e75c4 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push ebp
        mov ecx, ebx
        call public_628f050
        mov dword ptr ds : [ebx+8], ebp
        public_62e75d3 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_62e75e5
        mov al, byte ptr ds : [esi+0x1D]
        test al, al
        jne public_62e77ca
        public_62e75e5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x1C], 1
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62e77ca
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62e77ca
        mov bl, byte ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        and bl, 0xF8
        and edx, 0xE0000000
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62e762f
        lea ecx, ds:[eax-8]
        jmp public_62e7631
        public_62e762f : nop
        xor ecx, ecx
        public_62e7631 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x118]
        test byte ptr ss : [esp+0x1C], 2
        jne public_62e77ca
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e765e
        lea ecx, ds:[eax-8]
        jmp public_62e7660
        public_62e765e : nop
        xor ecx, ecx
        public_62e7660 : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x1D]
        mov ebx, 0x7FFDFF
        push eax
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x104]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x1B], al
        je public_62e77ca
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+0x800]
        add esi, 0xC
        test eax, eax
        jne public_62e76a1
        xor edx, edx
        jmp public_62e76b7
        public_62e76a1 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62e76b7 : nop
        cmp edx, edi
        jae public_62e771f
        test edi, edi
        mov eax, edi
        jge public_62e76c3
        xor eax, eax
        public_62e76c3 : nop
        imul eax, 0x88
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push ecx
        push edx
        mov ecx, esi
        call public_62ed100
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        imul edi, 0x88
        add edi, ebp
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edi
        call public_62ed0d0
        imul eax, 0x88
        add eax, ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], ebp
        public_62e771f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x800]
        xor edi, edi
        test ecx, ecx
        jle public_62e77c6
        public_62e7733 : nop
        mov eax, dword ptr ds : [eax+edi*8]
        test eax, eax
        je public_62e77b3
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62e77b3
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e7756
        add eax, 0xFFFFFFF8
        jmp public_62e7758
        public_62e7756 : nop
        xor eax, eax
        public_62e7758 : nop
        mov dword ptr ss : [esp+0xA4], eax
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xA8], ecx
        mov byte ptr ss : [esp+0xA1], 0
        mov byte ptr ss : [esp+0xA0], 0
        mov byte ptr ss : [esp+0xA2], 0
        mov byte ptr ss : [esp+0xA3], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0xA1], 1
        je public_62e77b3
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push 1
        push edx
        mov ecx, esi
        call public_62ed140
        public_62e77b3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x800]
        inc edi
        cmp edi, ecx
        jl public_62e7733
        public_62e77c6 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_62e77ca : nop
        pop edi
        lea eax, ds:[esi+0xC]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 
        UNREACHABLE_TRAP(0x62e7580)
    }
}

#undef public_62e75a6
#undef public_62e75c4
#undef public_62e75d3
#undef public_62e75e5
#undef public_62e762f
#undef public_62e7631
#undef public_62e765e
#undef public_62e7660
#undef public_62e76a1
#undef public_62e76b7
#undef public_62e76c3
#undef public_62e771f
#undef public_62e7733
#undef public_62e7756
#undef public_62e7758
#undef public_62e77b3
#undef public_62e77c6
#undef public_62e77ca
