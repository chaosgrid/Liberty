#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628db21 _public_628db21
#define public_628db26 _public_628db26
#define public_628db2e _public_628db2e
#define public_628db33 _public_628db33
#define public_628db3f _public_628db3f
#define public_628db60 _public_628db60
#define public_628db74 _public_628db74
#define public_628dbd9 _public_628dbd9
#define public_628dbf4 _public_628dbf4
#define public_628dc33 _public_628dc33
#define public_628dc50 _public_628dc50
#define public_628dc65 _public_628dc65
#define public_628dc74 _public_628dc74
#define public_628dc81 _public_628dc81
#define public_628dc8c _public_628dc8c

PROC_DECLARE(0x628daf0, internal_628daf0, public_628daf0);
extern "C" NAKED register_t __cdecl internal_628daf0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_628dbf4
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_628db21
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_628db26
        public_628db21 : nop
        mov ecx, 1
        public_628db26 : nop
        test edx, edx
        jne public_628db2e
        xor eax, eax
        jmp public_628db33
        public_628db2e : nop
        sub eax, edx
        sar eax, 2
        public_628db33 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_628db3f
        xor eax, eax
        public_628db3f : nop
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_628db74
        lea ecx, ds:[ecx]
        public_628db60 : nop
        push ebp
        push ebx
        call public_630cd00
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_628db60
        public_628db74 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop ebp
        jne public_628dbd9
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_628dbd9 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_628dbf4 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_628dc50
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_628dc8c
        public_628dc33 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_628dc33
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_628dc50 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_628dc74
        public_628dc65 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_628dc65
        public_628dc74 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_628dc8c
        mov edx, dword ptr ss : [esp+0x18]
        public_628dc81 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_628dc81
        public_628dc8c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x628daf0)
    }
}

#undef public_628db21
#undef public_628db26
#undef public_628db2e
#undef public_628db33
#undef public_628db3f
#undef public_628db60
#undef public_628db74
#undef public_628dbd9
#undef public_628dbf4
#undef public_628dc33
#undef public_628dc50
#undef public_628dc65
#undef public_628dc74
#undef public_628dc81
#undef public_628dc8c
