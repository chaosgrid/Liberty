#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ee93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ee9784 _public_6ee9784
#define public_6ee9789 _public_6ee9789
#define public_6ee9791 _public_6ee9791
#define public_6ee9796 _public_6ee9796
#define public_6ee97a2 _public_6ee97a2
#define public_6ee97c1 _public_6ee97c1
#define public_6ee97d5 _public_6ee97d5
#define public_6ee983a _public_6ee983a
#define public_6ee9854 _public_6ee9854
#define public_6ee9893 _public_6ee9893
#define public_6ee98b1 _public_6ee98b1
#define public_6ee98c6 _public_6ee98c6
#define public_6ee98d5 _public_6ee98d5
#define public_6ee98e0 _public_6ee98e0
#define public_6ee98ed _public_6ee98ed

PROC_DECLARE(0x6ee9740, internal_6ee9740, public_6ee9740);
extern "C" NAKED register_t __cdecl internal_6ee9740()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push eax
        mov esi, ecx
        call public_6ee93f0
        mov ecx, dword ptr ds : [esi+0x10]
        add esi, 4
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 4
        cmp ecx, 1
        mov edi, eax
        jae public_6ee9854
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ee9784
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6ee9789
        public_6ee9784 : nop
        mov ecx, 1
        public_6ee9789 : nop
        test edx, edx
        jne public_6ee9791
        xor eax, eax
        jmp public_6ee9796
        public_6ee9791 : nop
        sub eax, edx
        sar eax, 2
        public_6ee9796 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_6ee97a2
        xor eax, eax
        public_6ee97a2 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6ee97d5
        public_6ee97c1 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6ee97c1
        public_6ee97d5 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6ee983a
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6ee983a : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6ee9854 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6ee98b1
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6ee98ed
        public_6ee9893 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6ee9893
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6ee98b1 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6ee98d5
        public_6ee98c6 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6ee98c6
        public_6ee98d5 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6ee98ed
        mov edi, edi
        public_6ee98e0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ee98e0
        public_6ee98ed : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ee9740)
    }
}

#undef public_6ee9784
#undef public_6ee9789
#undef public_6ee9791
#undef public_6ee9796
#undef public_6ee97a2
#undef public_6ee97c1
#undef public_6ee97d5
#undef public_6ee983a
#undef public_6ee9854
#undef public_6ee9893
#undef public_6ee98b1
#undef public_6ee98c6
#undef public_6ee98d5
#undef public_6ee98e0
#undef public_6ee98ed
