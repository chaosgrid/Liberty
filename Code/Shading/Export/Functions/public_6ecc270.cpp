#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc270);
CLANG_FORWARD_PROC_SYMBOL(public_6ece1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece620);
CLANG_FORWARD_PROC_SYMBOL(public_6ececb0);

#define public_6ecc298 _public_6ecc298
#define public_6ecc2a7 _public_6ecc2a7

PROC_DECLARE(0x6ecc270, internal_6ecc270, public_6ecc270);
extern "C" NAKED register_t __cdecl internal_6ecc270()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ds:[esi+8]
        push eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6ece1c0
        mov edi, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+8], eax
        je public_6ecc2a7
        public_6ecc298 : nop
        lea ecx, ss:[esp+8]
        call public_6ececb0
        cmp dword ptr ss : [esp+8], edi
        jne public_6ecc298
        public_6ecc2a7 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x28]
        push eax
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6ece620
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ecc270)
    }
}

#undef public_6ecc298
#undef public_6ecc2a7
