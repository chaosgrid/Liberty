#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d112 _public_6f7d112
#define public_6f7d130 _public_6f7d130
#define public_6f7d144 _public_6f7d144
#define public_6f7d162 _public_6f7d162
#define public_6f7d170 _public_6f7d170
#define public_6f7d17b _public_6f7d17b
#define public_6f7d183 _public_6f7d183
#define public_6f7d193 _public_6f7d193
#define public_6f7d1b7 _public_6f7d1b7
#define public_6f7d1cf _public_6f7d1cf
#define public_6f7d20c _public_6f7d20c
#define public_6f7d214 _public_6f7d214
#define public_6f7d23d _public_6f7d23d
#define public_6f7d269 _public_6f7d269

PROC_DECLARE(0x6f7d0f0, internal_6f7d0f0, public_6f7d0f0);
extern "C" NAKED register_t __cdecl internal_6f7d0f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        je public_6f7d269
        push ebp
        push esi
        lea ebp, ds:[eax+0xC]
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        public_6f7d112 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [ebp-4]
        mov eax, ecx
        cmp eax, ecx
        lea esi, ss:[ebp-8]
        je public_6f7d144
        lea esp, ss:[esp]
        public_6f7d130 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add eax, 8
        add edi, 8
        cmp eax, ecx
        jne public_6f7d130
        public_6f7d144 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        jne public_6f7d162
        xor edx, edx
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6f7d170
        public_6f7d162 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0x28], eax
        mov edx, eax
        public_6f7d170 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7d17b
        xor eax, eax
        jmp public_6f7d183
        public_6f7d17b : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f7d183 : nop
        cmp eax, edx
        jae public_6f7d20c
        test edx, edx
        mov eax, edx
        jge public_6f7d193
        xor eax, eax
        public_6f7d193 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f7d1cf
        public_6f7d1b7 : nop
        push edi
        push ebp
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 8
        add esp, 8
        add ebp, 8
        cmp edi, eax
        jne public_6f7d1b7
        public_6f7d1cf : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        public_6f7d20c : nop
        mov edi, dword ptr ds : [ebx+8]
        cmp edi, dword ptr ds : [ebx+0xC]
        je public_6f7d23d
        public_6f7d214 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [esi+8]
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f96770
        mov eax, dword ptr ds : [ebx+0xC]
        add edi, 8
        cmp edi, eax
        jne public_6f7d214
        public_6f7d23d : nop
        mov eax, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x2C]
        add esi, 0x18
        add ebp, 0x18
        add ebx, 0x18
        cmp ebx, eax
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6f7d112
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        public_6f7d269 : nop
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f7d0f0)
    }
}

#undef public_6f7d112
#undef public_6f7d130
#undef public_6f7d144
#undef public_6f7d162
#undef public_6f7d170
#undef public_6f7d17b
#undef public_6f7d183
#undef public_6f7d193
#undef public_6f7d1b7
#undef public_6f7d1cf
#undef public_6f7d20c
#undef public_6f7d214
#undef public_6f7d23d
#undef public_6f7d269
