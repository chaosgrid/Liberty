#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_6239771 _public_6239771
#define public_62397ac _public_62397ac

PROC_DECLARE(0x62396e0, internal_62396e0, public_62396e0);
extern "C" NAKED register_t __cdecl internal_62396e0()
{
    __asm
    {
        sub esp, 0x60
        mov ecx, offset public_6257b40
        call public_6241070
        test eax, eax
        je public_62397ac
        mov eax, dword ptr ds : [public_62578e8]
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xF0]
        push edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+0x68]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xBC]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_6257b8c]
        test eax, eax
        jne public_6239771
        call public_623e830
        mov dword ptr ds : [public_6257b8c], eax
        public_6239771 : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x4C
        push esi
        lea ecx, ss:[esp+0xC]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        lea edi, ss:[esp+0x38]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        mov ecx, offset public_6257b40
        call public_6241180
        pop edi
        pop esi
        public_62397ac : nop
        xor eax, eax
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x62396e0)
    }
}

#undef public_6239771
#undef public_62397ac
