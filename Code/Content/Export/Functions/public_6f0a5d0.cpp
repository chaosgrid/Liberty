#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f0a5fd _public_6f0a5fd

PROC_DECLARE(0x6f0a5d0, internal_6f0a5d0, public_6f0a5d0);
extern "C" NAKED register_t __cdecl internal_6f0a5d0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f0a5fd
        mov eax, dword ptr ds : [ecx+0x170]
        push eax
        lea eax, ds:[esi+0x134]
        push eax
        call public_6eea860
        mov ecx, eax
        call public_6f73ac0
        mov dword ptr ds : [esi+0x168], eax
        public_6f0a5fd : nop
        mov eax, dword ptr ds : [esi+0x1B0]
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ds:[esi+0x124]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f0a5d0)
    }
}

#undef public_6f0a5fd
