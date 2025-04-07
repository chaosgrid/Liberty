#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf15f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0be50);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d370);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b450);

#define public_6cf1777 _public_6cf1777

PROC_DECLARE(0x6cf15f0, internal_6cf15f0, public_6cf15f0);
extern "C" NAKED register_t __cdecl internal_6cf15f0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [edi]
        imul edx, 0x418
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_6d90260]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[edx+eax-0x34]
        push ecx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf1777
        mov ebx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ebx]
        push edx
        call dword ptr ds : [public_6d643dc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf1777
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x50]
        push eax
        push ebx
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x60], 1
        call public_6d0d370
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        lea ebx, ds:[edx+eax-0x418]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx+0x3E0]
        je public_6cf1777
        mov ecx, dword ptr ss : [esp+0xC]
        push 0x3E4CCCCD
        call public_6d0be50
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4b450
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6d06cd0
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x3A
        mov dword ptr ss : [esp+0x20], eax
        call public_6d43650
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x20]
        imul edx, 0x418
        mov ecx, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [edx+ecx-0x38], eax
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x34], eax
        call public_6d06cd0
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x30], eax
        push ecx
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ss : [esp+0x2C]
        push 0x3B
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], eax
        call public_6d43650
        add esp, 8
        public_6cf1777 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6cf15f0)
    }
}

#undef public_6cf1777
