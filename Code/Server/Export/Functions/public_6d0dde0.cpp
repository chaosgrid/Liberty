#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0dd50);

#define public_6d0de1b _public_6d0de1b
#define public_6d0de4c _public_6d0de4c
#define public_6d0de73 _public_6d0de73
#define public_6d0de9a _public_6d0de9a
#define public_6d0dec0 _public_6d0dec0
#define public_6d0dee6 _public_6d0dee6
#define public_6d0df0c _public_6d0df0c
#define public_6d0df2e _public_6d0df2e

PROC_DECLARE(0x6d0dde0, internal_6d0dde0, public_6d0dde0);
extern "C" NAKED register_t __cdecl internal_6d0dde0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, ecx
        xor eax, eax
        and edx, 0x7F0000
        je public_6d0de1b
        cmp edx, 0x7F0000
        setne al
        lea edx, ds:[esi+4]
        push eax
        push edx
        push esi
        lea eax, ds:[edi+0x34]
        push eax
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0de1b : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, ecx
        and edx, 0xFDFF
        je public_6d0de4c
        cmp edx, 0xFDFF
        setne dl
        lea eax, ds:[esi+4]
        push edx
        push eax
        push esi
        lea edx, ds:[edi+0x5C]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0de4c : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x10000000
        je public_6d0de73
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        lea edx, ds:[edi+0x48]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0de73 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x1000000
        je public_6d0de9a
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        lea edx, ds:[edi+0x70]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0de9a : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x2000000
        je public_6d0dec0
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        lea edx, ds:[edi+0x84]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0dec0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x4000000
        je public_6d0dee6
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        lea edx, ds:[edi+0x98]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0dee6 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x8000000
        je public_6d0df0c
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        lea edx, ds:[edi+0xAC]
        push edx
        push ecx
        call public_6d0dd50
        add esp, 0x14
        test eax, eax
        jne public_6d0df2e
        public_6d0df0c : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x20000000
        je public_6d0df2e
        push 0
        lea eax, ds:[esi+4]
        push eax
        push esi
        add edi, 0xC0
        push edi
        push ecx
        call public_6d0dd50
        add esp, 0x14
        public_6d0df2e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0dde0)
    }
}

#undef public_6d0de1b
#undef public_6d0de4c
#undef public_6d0de73
#undef public_6d0de9a
#undef public_6d0dec0
#undef public_6d0dee6
#undef public_6d0df0c
#undef public_6d0df2e
