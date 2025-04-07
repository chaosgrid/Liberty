#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

#define public_624003d _public_624003d
#define public_6240070 _public_6240070

PROC_DECLARE(0x623ffb0, internal_623ffb0, public_623ffb0);
extern "C" NAKED register_t __cdecl internal_623ffb0()
{
    __asm
    {
        sub esp, 0x64
        mov eax, dword ptr ss : [esp+0x6C]
        push esi
        lea edx, ss:[esp+0x70]
        push edi
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0
        push eax
        call dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_6257bd0]
        mov esi, dword ptr ss : [esp+0x74]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        jne public_624003d
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_624003d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push esi
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [public_6257bd0]
        mov ecx, 0xC
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0xC]
        test eax, eax
        rep movsd
        jne public_6240070
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_6240070 : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x4C
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x3C]
        mov edi, dword ptr ss : [esp+0x78]
        xor eax, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x64
        ret 0xC
        UNREACHABLE_TRAP(0x623ffb0)
    }
}

#undef public_624003d
#undef public_6240070
