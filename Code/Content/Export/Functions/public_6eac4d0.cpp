#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6eac52e _public_6eac52e
#define public_6eac530 _public_6eac530

PROC_DECLARE(0x6eac4d0, internal_6eac4d0, public_6eac4d0);
extern "C" NAKED register_t __cdecl internal_6eac4d0()
{
    __asm
    {
        sub esp, 0x1C
        lea eax, ss:[esp]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ds:[ecx+0x48]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x10], offset public_6fb4534
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_6fb35d8]
        add esp, 8
        test eax, eax
        jne public_6eac52e
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f75f30
        add esp, 4
        jmp public_6eac530
        public_6eac52e : nop
        xor eax, eax
        public_6eac530 : nop
        mov ecx, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_6fb3680]
        mov eax, dword ptr ss : [esp+8]
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6eac4d0)
    }
}

#undef public_6eac52e
#undef public_6eac530
