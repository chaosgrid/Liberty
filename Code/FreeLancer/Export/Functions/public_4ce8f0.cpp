#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4cab70);
CLANG_FORWARD_PROC_SYMBOL(public_4cabd0);
CLANG_FORWARD_PROC_SYMBOL(public_4cbb40);
CLANG_FORWARD_PROC_SYMBOL(public_4ce8f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb30);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdbdb);

#define public_4ce940 _public_4ce940
#define public_4ce952 _public_4ce952
#define public_4ce963 _public_4ce963
#define public_4ce981 _public_4ce981
#define public_4ce991 _public_4ce991
#define public_4ce9a8 _public_4ce9a8
#define public_4ce9b6 _public_4ce9b6
#define public_4ce9d3 _public_4ce9d3
#define public_4cea2b _public_4cea2b
#define public_4cea76 _public_4cea76
#define public_4cead3 _public_4cead3
#define public_4ceaf7 _public_4ceaf7
#define public_4ceb05 _public_4ceb05

PROC_DECLARE(0x4ce8f0, internal_4ce8f0, public_4ce8f0);
extern "C" NAKED register_t __cdecl internal_4ce8f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdbdb @0x4ce8f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdbdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d764c
        mov dword ptr ds : [esi+0x7C], offset public_5d761c
        mov ebp, dword ptr ds : [esi+0x5B4]
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 5
        je public_4ce963
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_4ce952
        lea ebx, ds:[ebx]
        public_4ce940 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_4ce940
        public_4ce952 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_4ce963 : nop
        mov ecx, dword ptr ds : [esi+0x474]
        cmp ecx, ebx
        je public_4ce981
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0x474], ebx
        public_4ce981 : nop
        mov ecx, dword ptr ds : [esi+0x5B0]
        cmp ecx, ebx
        je public_4ce991
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_4ce991 : nop
        mov dword ptr ds : [esi+0x5B0], ebx
        mov dword ptr ds : [esi+0x5B0], ebx
        mov eax, dword ptr ds : [public_6735b8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4ce9d3
        public_4ce9a8 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        cmp ecx, ebx
        je public_4ce9b6
        push 1
        call public_4ceb30
        public_4ce9b6 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6735b4
        mov dword ptr ds : [edi+0x3C], ebx
        call public_516f70
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [public_6735b8]
        jne public_4ce9a8
        public_4ce9d3 : nop
        lea edi, ds:[esi+0x4B8]
        mov dword ptr ds : [public_6748f8], ebx
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0xC0]
        push ebx
        mov byte ptr ss : [esp+0x28], 6
        call dword ptr ds : [public_5c645c]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        mov eax, dword ptr ds : [esi+0x474]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_4cea2b
        mov edx, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0x474], ebx
        public_4cea2b : nop
        lea edi, ds:[esi+0x284]
        mov dword ptr ss : [esp+0x18], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        call public_4cabd0
        lea ecx, ds:[edi+0x38]
        mov byte ptr ss : [esp+0x24], 7
        call public_4cab70
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xA
        call public_4cbb40
        lea ecx, ds:[edi+0x24]
        call public_4de730
        cmp dword ptr ds : [edi], ebx
        mov ebp, dword ptr ds : [public_5c62a8]
        mov byte ptr ss : [esp+0x24], 2
        je public_4cea76
        push ebx
        mov ecx, edi
        call ebp
        public_4cea76 : nop
        lea edi, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x18], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xC
        call public_4cabd0
        lea ecx, ds:[edi+0x38]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_4cab70
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xE
        call public_4cbb40
        lea ecx, ds:[edi+0x24]
        call public_4de730
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_5c645c]
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ds : [esi+0x7C], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebx
        mov byte ptr ss : [esp+0x24], bl
        je public_4cead3
        push ebx
        call ebp
        public_4cead3 : nop
        mov dword ptr ds : [esi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_4ceb05
        public_4ceaf7 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edi, dword ptr ds : [edi+8]
        cmp edi, ebx
        jne public_4ceaf7
        public_4ceb05 : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4ce8f0)
    }
}

#undef public_4ce940
#undef public_4ce952
#undef public_4ce963
#undef public_4ce981
#undef public_4ce991
#undef public_4ce9a8
#undef public_4ce9b6
#undef public_4ce9d3
#undef public_4cea2b
#undef public_4cea76
#undef public_4cead3
#undef public_4ceaf7
#undef public_4ceb05
