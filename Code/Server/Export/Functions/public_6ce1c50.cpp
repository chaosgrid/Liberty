#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b90);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5030);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5070);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6ce1ca6 _public_6ce1ca6
#define public_6ce1cc2 _public_6ce1cc2
#define public_6ce1cd7 _public_6ce1cd7
#define public_6ce1cf3 _public_6ce1cf3
#define public_6ce1d07 _public_6ce1d07
#define public_6ce1d22 _public_6ce1d22
#define public_6ce1d3d _public_6ce1d3d
#define public_6ce1dad _public_6ce1dad
#define public_6ce1db6 _public_6ce1db6
#define public_6ce1e23 _public_6ce1e23
#define public_6ce1e27 _public_6ce1e27
#define public_6ce1e4c _public_6ce1e4c
#define public_6ce1e5a _public_6ce1e5a

PROC_DECLARE(0x6ce1c50, internal_6ce1c50, public_6ce1c50);
extern "C" NAKED register_t __cdecl internal_6ce1c50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edx
        mov al, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [ebx+0xC], al
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [ebx+0x1C], eax
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x20]
        mov eax, edx
        cmp ecx, eax
        lea esi, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x20], eax
        jae public_6ce1ca6
        mov eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        public_6ce1ca6 : nop
        cmp esi, ebp
        jne public_6ce1cc2
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b50]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64b50]
        jmp public_6ce1d3d
        public_6ce1cc2 : nop
        test eax, eax
        jbe public_6ce1d07
        cmp eax, edx
        jne public_6ce1d07
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6ce1cd7
        mov ecx, dword ptr ds : [public_6d64b54]
        public_6ce1cd7 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_6ce1d07
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6ce1cf3
        mov eax, dword ptr ds : [public_6d64b54]
        public_6ce1cf3 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6ce1d3d
        public_6ce1d07 : nop
        push 1
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6ce1d3d
        mov eax, dword ptr ds : [edi+0x24]
        test eax, eax
        jne public_6ce1d22
        mov eax, dword ptr ds : [public_6d64b54]
        public_6ce1d22 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi+4]
        push ebp
        push eax
        push edx
        call public_6ce1960
        add esp, 0xC
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6ce1d3d : nop
        lea ebp, ds:[edi+0x30]
        lea esi, ds:[ebx+0x30]
        cmp esi, ebp
        je public_6ce1db6
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6ce3be0
        mov cl, byte ptr ss : [ebp+1]
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+1], cl
        mov edx, dword ptr ss : [ebp+4]
        push eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, esi
        call public_6ce4ab0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        je public_6ce1dad
        push eax
        call public_6ce4b90
        mov dword ptr ss : [ebp], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6ce4b70
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        jmp public_6ce1db6
        public_6ce1dad : nop
        mov dword ptr ss : [ebp], ebp
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6ce1db6 : nop
        lea ebp, ds:[edi+0x44]
        lea esi, ds:[ebx+0x44]
        cmp esi, ebp
        je public_6ce1e5a
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6ce1e23
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ce1e23
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ce1e23
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, esi
        call public_6ce5030
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6ce1e4c
        public_6ce1e23 : nop
        cmp ecx, edi
        je public_6ce1e4c
        public_6ce1e27 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6ce5070
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ce4bd0
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6ce1e27
        public_6ce1e4c : nop
        mov al, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_6ce3da0
        public_6ce1e5a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ce1c50)
    }
}

#undef public_6ce1ca6
#undef public_6ce1cc2
#undef public_6ce1cd7
#undef public_6ce1cf3
#undef public_6ce1d07
#undef public_6ce1d22
#undef public_6ce1d3d
#undef public_6ce1dad
#undef public_6ce1db6
#undef public_6ce1e23
#undef public_6ce1e27
#undef public_6ce1e4c
#undef public_6ce1e5a
