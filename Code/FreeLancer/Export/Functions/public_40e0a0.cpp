#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40e0ce _public_40e0ce
#define public_40e0d6 _public_40e0d6
#define public_40e0e1 _public_40e0e1
#define public_40e0e9 _public_40e0e9
#define public_40e0f8 _public_40e0f8
#define public_40e106 _public_40e106
#define public_40e11d _public_40e11d
#define public_40e133 _public_40e133
#define public_40e13b _public_40e13b
#define public_40e143 _public_40e143
#define public_40e14b _public_40e14b
#define public_40e153 _public_40e153
#define public_40e197 _public_40e197
#define public_40e1ad _public_40e1ad
#define public_40e1d2 _public_40e1d2
#define public_40e1d6 _public_40e1d6

PROC_DECLARE(0x40e0a0, internal_40e0a0, public_40e0a0);
extern "C" NAKED register_t __cdecl internal_40e0a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        add edi, 4
        lea esi, ds:[ebx+4]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], eax
        je public_40e1d6
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_40e0ce
        xor ecx, ecx
        jmp public_40e0d6
        public_40e0ce : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebp
        sar ecx, 2
        public_40e0d6 : nop
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        jne public_40e0e1
        xor eax, eax
        jmp public_40e0e9
        public_40e0e1 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebx
        sar eax, 2
        public_40e0e9 : nop
        cmp ecx, eax
        ja public_40e133
        mov edx, dword ptr ds : [edi+8]
        mov eax, ebp
        cmp eax, edx
        mov ecx, ebx
        je public_40e106
        public_40e0f8 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_40e0f8
        public_40e106 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_40e11d
        mov ecx, dword ptr ds : [esi+4]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_40e1d2
        public_40e11d : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_40e1d2
        public_40e133 : nop
        test ebp, ebp
        jne public_40e13b
        xor ecx, ecx
        jmp public_40e143
        public_40e13b : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebp
        sar ecx, 2
        public_40e143 : nop
        test ebx, ebx
        jne public_40e14b
        xor eax, eax
        jmp public_40e153
        public_40e14b : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ebx
        sar eax, 2
        public_40e153 : nop
        cmp ecx, eax
        ja public_40e197
        mov ecx, esi
        call public_5ad970
        lea eax, ss:[ebp+eax*4]
        push ebx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_527820
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_597c70
        mov ecx, edi
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_40e1d2
        public_40e197 : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jge public_40e1ad
        xor eax, eax
        public_40e1ad : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_40e1d2 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_40e1d6 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, 0x14
        push ecx
        lea ecx, ds:[ebx+0x14]
        call public_5595c0
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x40e0a0)
    }
}

#undef public_40e0ce
#undef public_40e0d6
#undef public_40e0e1
#undef public_40e0e9
#undef public_40e0f8
#undef public_40e106
#undef public_40e11d
#undef public_40e133
#undef public_40e13b
#undef public_40e143
#undef public_40e14b
#undef public_40e153
#undef public_40e197
#undef public_40e1ad
#undef public_40e1d2
#undef public_40e1d6
