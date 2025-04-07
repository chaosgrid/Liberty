#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad5b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad910);
CLANG_FORWARD_PROC_SYMBOL(public_5ae610);
CLANG_FORWARD_PROC_SYMBOL(public_5ae650);
CLANG_FORWARD_PROC_SYMBOL(public_5aecc0);
CLANG_FORWARD_PROC_SYMBOL(public_5aef00);
CLANG_FORWARD_PROC_SYMBOL(public_5af3b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5ad711 _public_5ad711
#define public_5ad716 _public_5ad716
#define public_5ad71e _public_5ad71e
#define public_5ad733 _public_5ad733
#define public_5ad740 _public_5ad740
#define public_5ad760 _public_5ad760
#define public_5ad77a _public_5ad77a
#define public_5ad7e1 _public_5ad7e1
#define public_5ad84c _public_5ad84c
#define public_5ad881 _public_5ad881
#define public_5ad889 _public_5ad889

PROC_DECLARE(0x5ad6a0, internal_5ad6a0, public_5ad6a0);
extern "C" NAKED register_t __cdecl internal_5ad6a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebp
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        sub ebx, ecx
        mov eax, 0xD20D20D3
        imul ebx
        add edx, ebx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_5ad7e1
        test ebp, ebp
        je public_5ad711
        mov ebx, ecx
        sub ebx, ebp
        mov eax, 0xD20D20D3
        imul ebx
        add edx, ebx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, edx
        ja public_5ad716
        public_5ad711 : nop
        mov ebx, 1
        public_5ad716 : nop
        test ebp, ebp
        jne public_5ad71e
        xor edx, edx
        jmp public_5ad733
        public_5ad71e : nop
        sub ecx, ebp
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_5ad733 : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_5ad740
        xor eax, eax
        public_5ad740 : nop
        imul eax, 0x9C
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_5ad77a
        lea esp, ss:[esp]
        public_5ad760 : nop
        push ebx
        push ebp
        call public_5af3b0
        add ebx, 0x9C
        add esp, 8
        add ebp, 0x9C
        cmp ebx, edi
        jne public_5ad760
        public_5ad77a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_5af3b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x9C
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_5ae610
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_5ad910
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x9C
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5ad5b0
        inc eax
        imul eax, 0x9C
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_5ad889
        public_5ad7e1 : nop
        mov ebx, ecx
        sub ebx, edi
        mov eax, 0xD20D20D3
        imul ebx
        add edx, ebx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_5ad84c
        lea edx, ds:[edi+0x9C]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_5ae610
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_5ae650
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_5aecc0
        add esp, 0xC
        jmp public_5ad881
        public_5ad84c : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF64
        push ecx
        mov ecx, esi
        call public_5ae610
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF64
        push eax
        push edi
        call public_5aef00
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x9C]
        push ecx
        push edi
        call public_5aecc0
        add esp, 0x18
        public_5ad881 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x9C
        public_5ad889 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x9C
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x5ad6a0)
    }
}

#undef public_5ad711
#undef public_5ad716
#undef public_5ad71e
#undef public_5ad733
#undef public_5ad740
#undef public_5ad760
#undef public_5ad77a
#undef public_5ad7e1
#undef public_5ad84c
#undef public_5ad881
#undef public_5ad889
