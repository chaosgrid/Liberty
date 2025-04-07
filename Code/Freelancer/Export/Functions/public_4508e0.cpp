#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cc0);

#define public_45092e _public_45092e

PROC_DECLARE(0x4508e0, internal_4508e0, public_4508e0);
extern "C" NAKED register_t __cdecl internal_4508e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[edi+0x20]
        call dword ptr ds : [public_5c6274]
        mov ebx, dword ptr ds : [edi+0x60]
        mov edx, ebx
        shl edx, 6
        add edx, offset public_668b00
        lea ebp, ds:[edx+0x10]
        mov esi, eax
        mov ecx, 9
        mov edi, ebp
        rep movsd
        cmp ebx, dword ptr ds : [public_66d100]
        jne public_45092e
        mov edx, dword ptr ds : [edx]
        push ebp
        push edx
        call public_556cc0
        add esp, 8
        public_45092e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x4508e0)
    }
}

#undef public_45092e
