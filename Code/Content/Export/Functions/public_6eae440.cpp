#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eae47f _public_6eae47f
#define public_6eae484 _public_6eae484
#define public_6eae48c _public_6eae48c
#define public_6eae491 _public_6eae491
#define public_6eae49d _public_6eae49d
#define public_6eae4c0 _public_6eae4c0
#define public_6eae4d4 _public_6eae4d4
#define public_6eae530 _public_6eae530
#define public_6eae571 _public_6eae571
#define public_6eae57e _public_6eae57e
#define public_6eae593 _public_6eae593
#define public_6eae5a2 _public_6eae5a2
#define public_6eae5b0 _public_6eae5b0
#define public_6eae5bb _public_6eae5bb

PROC_DECLARE(0x6eae440, internal_6eae440, public_6eae440);
extern "C" NAKED register_t __cdecl internal_6eae440()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6eae530
        test edx, edx
        je public_6eae47f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6eae484
        public_6eae47f : nop
        mov ecx, 1
        public_6eae484 : nop
        test edx, edx
        jne public_6eae48c
        xor eax, eax
        jmp public_6eae491
        public_6eae48c : nop
        sub eax, edx
        sar eax, 2
        public_6eae491 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6eae49d
        xor eax, eax
        public_6eae49d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6eae4d4
        lea ebx, ds:[ebx]
        public_6eae4c0 : nop
        push ebx
        push ebp
        call public_6eb6740
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6eae4c0
        public_6eae4d4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6eb6740
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6fa3db0
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6eae530 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6eae57e
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6eae5bb
        public_6eae571 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6eae571
        jmp public_6eae5bb
        public_6eae57e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6eae5a2
        public_6eae593 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6eae593
        public_6eae5a2 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6eae5bb
        mov ecx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_6eae5b0 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6eae5b0
        public_6eae5bb : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6eae440)
    }
}

#undef public_6eae47f
#undef public_6eae484
#undef public_6eae48c
#undef public_6eae491
#undef public_6eae49d
#undef public_6eae4c0
#undef public_6eae4d4
#undef public_6eae530
#undef public_6eae571
#undef public_6eae57e
#undef public_6eae593
#undef public_6eae5a2
#undef public_6eae5b0
#undef public_6eae5bb
