#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_434eb0);

#define public_434ef9 _public_434ef9
#define public_434f16 _public_434f16

PROC_DECLARE(0x434eb0, internal_434eb0, public_434eb0);
extern "C" NAKED register_t __cdecl internal_434eb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c6020]
        add esp, 4
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_432240
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_434f16
        add eax, 0x10
        test eax, eax
        je public_434f16
        dec dword ptr ds : [eax+0x14]
        jne public_434f16
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_434ef9
        mov eax, dword ptr ds : [public_5c7078]
        public_434ef9 : nop
        mov ecx, dword ptr ds : [public_5c6d40]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        public_434f16 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x434eb0)
    }
}

#undef public_434ef9
#undef public_434f16
