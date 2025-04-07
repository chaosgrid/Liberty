#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d191a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b610);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b920);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bc90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd00);

#define public_6d1a370 _public_6d1a370
#define public_6d1a3aa _public_6d1a3aa
#define public_6d1a3d8 _public_6d1a3d8
#define public_6d1a430 _public_6d1a430
#define public_6d1a46b _public_6d1a46b
#define public_6d1a496 _public_6d1a496
#define public_6d1a4aa _public_6d1a4aa
#define public_6d1a516 _public_6d1a516
#define public_6d1a51a _public_6d1a51a
#define public_6d1a53f _public_6d1a53f
#define public_6d1a55b _public_6d1a55b

PROC_DECLARE(0x6d1a2e0, internal_6d1a2e0, public_6d1a2e0);
extern "C" NAKED register_t __cdecl internal_6d1a2e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d90260]
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        imul eax, 0x418
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        test edi, edi
        lea esi, ds:[eax+ecx-0x418]
        jbe public_6d1a55b
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, edx
        jae public_6d1a55b
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d1a55b
        imul edi, 0x418
        lea edi, ds:[edi+ecx-0x418]
        mov ecx, edi
        call public_6d4a1e0
        test al, al
        je public_6d1a55b
        mov ebx, dword ptr ss : [esp+0x24]
        test ebx, ebx
        je public_6d1a370
        mov ecx, edi
        call public_6d4eda0
        push eax
        push ebx
        call dword ptr ds : [public_6d64c9c]
        add esp, 8
        test eax, eax
        jne public_6d1a55b
        public_6d1a370 : nop
        mov ecx, dword ptr ds : [esi+0x404]
        mov eax, dword ptr ds : [esi+0x348]
        mov ebx, dword ptr ds : [edi+0x404]
        mov dword ptr ss : [esp+0x20], ecx
        cmp eax, dword ptr ds : [edi+0x348]
        jne public_6d1a3d8
        mov ecx, esi
        call public_6d191a0
        push ebp
        lea ecx, ss:[esp+0x20]
        mov si, ax
        call public_6d19180
        mov dword ptr ss : [esp+0x10], 0xC
        public_6d1a3aa : nop
        mov ecx, dword ptr ds : [public_6d8fb18]
        xor edx, edx
        mov dx, si
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [public_6d8f5dc]
        push 8
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6d1a3d8 : nop
        test ebx, ebx
        je public_6d1a51a
        push eax
        mov ecx, ebx
        call public_6d5bd00
        test al, al
        je public_6d1a516
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        mov ecx, ebx
        call public_6d5bb90
        test al, al
        je public_6d1a430
        mov ecx, edi
        call public_6d191a0
        mov si, ax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d19180
        xor ecx, ecx
        mov cx, si
        mov dword ptr ss : [esp+0x10], 0xE
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6d1a53f
        public_6d1a430 : nop
        mov eax, dword ptr ds : [esi+0x408]
        test eax, eax
        je public_6d1a46b
        mov ecx, esi
        call public_6d191a0
        mov ecx, esi
        mov di, ax
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d19180
        xor ecx, ecx
        mov cx, di
        mov dword ptr ss : [esp+0x10], 0xF
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6d1a53f
        public_6d1a46b : nop
        cmp dword ptr ds : [ebx+0x18], 8
        jb public_6d1a496
        mov ecx, edi
        call public_6d191a0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov si, ax
        call public_6d19180
        mov dword ptr ss : [esp+0x10], 0x10
        jmp public_6d1a3aa
        public_6d1a496 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_6d1a4aa
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        call public_6d5b920
        public_6d1a4aa : nop
        mov ecx, edi
        call public_6d191a0
        mov ecx, esi
        mov di, ax
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d19180
        xor ecx, ecx
        mov cx, di
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov dword ptr ss : [esp+0x1C], 5
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x348]
        push ecx
        mov ecx, ebx
        call public_6d5b610
        mov edx, dword ptr ds : [esi+0x348]
        push edx
        mov ecx, ebx
        call public_6d5bc90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6d1a516 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d1a51a : nop
        mov ecx, esi
        call public_6d191a0
        push ebp
        lea ecx, ss:[esp+0x20]
        mov si, ax
        call public_6d19180
        xor eax, eax
        mov ax, si
        mov dword ptr ss : [esp+0x10], 0xD
        mov dword ptr ss : [esp+0x14], eax
        public_6d1a53f : nop
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx]
        public_6d1a55b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d1a2e0)
    }
}

#undef public_6d1a370
#undef public_6d1a3aa
#undef public_6d1a3d8
#undef public_6d1a430
#undef public_6d1a46b
#undef public_6d1a496
#undef public_6d1a4aa
#undef public_6d1a516
#undef public_6d1a51a
#undef public_6d1a53f
#undef public_6d1a55b
