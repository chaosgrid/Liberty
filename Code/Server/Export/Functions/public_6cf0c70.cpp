#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf0ce7 _public_6cf0ce7
#define public_6cf0d0a _public_6cf0d0a
#define public_6cf0d2c _public_6cf0d2c
#define public_6cf0d47 _public_6cf0d47

PROC_DECLARE(0x6cf0c70, internal_6cf0c70, public_6cf0c70);
extern "C" NAKED register_t __cdecl internal_6cf0c70()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0d47
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_6cf0d47
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf0d47
        mov ax, word ptr ds : [esi+4]
        mov ecx, dword ptr ds : [public_6d6402c]
        cmp ax, word ptr ds : [ecx]
        lea ebx, ds:[esi+4]
        jne public_6cf0d0a
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf0ce7
        mov dword ptr ss : [esp+0x20], 0
        public_6cf0ce7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+4]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        lea ecx, ds:[edi+4]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx+0x48]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        public_6cf0d0a : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ds:[esi+8]
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf0d2c
        mov dword ptr ss : [esp+0x20], 0
        public_6cf0d2c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+4]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        lea ecx, ds:[edi+4]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ebx
        call dword ptr ds : [edx+0x44]
        public_6cf0d47 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6cf0c70)
    }
}

#undef public_6cf0ce7
#undef public_6cf0d0a
#undef public_6cf0d2c
#undef public_6cf0d47
