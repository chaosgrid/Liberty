#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b490);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f39680 _public_6f39680
#define public_6f3968e _public_6f3968e
#define public_6f396ae _public_6f396ae
#define public_6f396b9 _public_6f396b9
#define public_6f396c1 _public_6f396c1
#define public_6f396d0 _public_6f396d0
#define public_6f396de _public_6f396de
#define public_6f396f5 _public_6f396f5
#define public_6f3970b _public_6f3970b
#define public_6f39713 _public_6f39713
#define public_6f3971b _public_6f3971b
#define public_6f39723 _public_6f39723
#define public_6f3972b _public_6f3972b
#define public_6f39737 _public_6f39737
#define public_6f3973f _public_6f3973f
#define public_6f39746 _public_6f39746
#define public_6f39754 _public_6f39754
#define public_6f39773 _public_6f39773
#define public_6f39798 _public_6f39798
#define public_6f397be _public_6f397be
#define public_6f397c1 _public_6f397c1
#define public_6f397d1 _public_6f397d1

PROC_DECLARE(0x6f39660, internal_6f39660, public_6f39660);
extern "C" NAKED register_t __cdecl internal_6f39660()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor ebx, ebx
        lea esi, ss:[ebp+0xC8]
        mov dword ptr ss : [ebp+0x24], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov eax, ecx
        cmp eax, ecx
        push edi
        je public_6f3968e
        nop 
        public_6f39680 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f39680
        public_6f3968e : nop
        lea edi, ss:[ebp+0xB8]
        cmp esi, edi
        mov dword ptr ds : [esi+8], edx
        je public_6f397c1
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_6f396ae
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f396ae : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f396b9
        xor edx, edx
        jmp public_6f396c1
        public_6f396b9 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f396c1 : nop
        cmp ebx, edx
        ja public_6f3970b
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6f396de
        lea esp, ss:[esp]
        public_6f396d0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f396d0
        public_6f396de : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f396f5
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f397c1
        public_6f396f5 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f397c1
        public_6f3970b : nop
        test eax, eax
        jne public_6f39713
        xor ebx, ebx
        jmp public_6f3971b
        public_6f39713 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f3971b : nop
        test ecx, ecx
        jne public_6f39723
        xor edx, edx
        jmp public_6f3972b
        public_6f39723 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_6f3972b : nop
        cmp ebx, edx
        ja public_6f39773
        test ecx, ecx
        jne public_6f39737
        xor edx, edx
        jmp public_6f3973f
        public_6f39737 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f3973f : nop
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        je public_6f39754
        public_6f39746 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f39746
        public_6f39754 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f3cec0
        mov ecx, edi
        call public_6f3bbf0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f397be
        public_6f39773 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        push ecx
        mov ecx, esi
        call public_6f3ceb0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        add esp, 4
        mov ecx, edi
        call public_6f3bbf0
        test eax, eax
        jge public_6f39798
        xor eax, eax
        public_6f39798 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f3cec0
        mov dword ptr ds : [esi+0xC], eax
        public_6f397be : nop
        mov dword ptr ds : [esi+8], eax
        public_6f397c1 : nop
        cmp dword ptr ss : [ebp+0x2C], 7
        jne public_6f397d1
        mov dword ptr ss : [ebp+0x9C], 0
        public_6f397d1 : nop
        mov ecx, ebp
        call public_6f3b490
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x2C], 3
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f39660)
    }
}

#undef public_6f39680
#undef public_6f3968e
#undef public_6f396ae
#undef public_6f396b9
#undef public_6f396c1
#undef public_6f396d0
#undef public_6f396de
#undef public_6f396f5
#undef public_6f3970b
#undef public_6f39713
#undef public_6f3971b
#undef public_6f39723
#undef public_6f3972b
#undef public_6f39737
#undef public_6f3973f
#undef public_6f39746
#undef public_6f39754
#undef public_6f39773
#undef public_6f39798
#undef public_6f397be
#undef public_6f397c1
#undef public_6f397d1
