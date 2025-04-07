#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eef550);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b460);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabed5);

#define public_6eef5b0 _public_6eef5b0
#define public_6eef5c4 _public_6eef5c4
#define public_6eef660 _public_6eef660
#define public_6eef684 _public_6eef684
#define public_6eef6b3 _public_6eef6b3

PROC_DECLARE(0x6eef550, internal_6eef550, public_6eef550);
extern "C" NAKED register_t __cdecl internal_6eef550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabed5 @0x6eef552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabed5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x1B0]
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fb7658
        mov dword ptr ds : [ebx], offset public_6fb7638
        mov dword ptr ds : [esi+0x1C0], offset public_6fb7624
        mov edi, dword ptr ds : [esi+0x290]
        cmp edi, dword ptr ds : [esi+0x294]
        mov dword ptr ss : [esp+0x28], 5
        je public_6eef5c4
        mov ebp, dword ptr ds : [public_6fb30e8]
        lea ebx, ds:[ebx]
        public_6eef5b0 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x294]
        add edi, 4
        cmp edi, eax
        jne public_6eef5b0
        public_6eef5c4 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb310c]
        mov eax, dword ptr ds : [esi+0x290]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ds : [esi+0x290], ebx
        mov dword ptr ds : [esi+0x294], ebx
        mov dword ptr ds : [esi+0x298], ebx
        mov eax, dword ptr ds : [esi+0x280]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x280], ebx
        mov dword ptr ds : [esi+0x284], ebx
        mov dword ptr ds : [esi+0x288], ebx
        mov eax, dword ptr ds : [esi+0x270]
        push eax
        call public_6fa8fe0
        lea edi, ds:[esi+0x248]
        mov dword ptr ds : [esi+0x270], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_6fb479c
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 6
        call public_6f1cb40
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [ebp]
        add edi, 4
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6eef684
        lea ecx, ds:[ecx]
        public_6eef660 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6eef660
        public_6eef684 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x240]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_6eef6b3
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x240], ebx
        public_6eef6b3 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6f4b460
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eef550)
    }
}

#undef public_6eef5b0
#undef public_6eef5c4
#undef public_6eef660
#undef public_6eef684
#undef public_6eef6b3
