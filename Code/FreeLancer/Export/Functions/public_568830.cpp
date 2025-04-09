#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_568830);

#define public_568875 _public_568875

PROC_DECLARE(0x568830, internal_568830, public_568830);
extern "C" NAKED register_t __cdecl internal_568830()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jle public_568875
        mov ecx, dword ptr ds : [esi+eax*4]
        test ecx, ecx
        je public_568875
        cmp eax, 0x20
        jae public_568875
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push 0
        push eax
        push ecx
        call dword ptr ds : [public_5c6008]
        test eax, eax
        jne public_568875
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+ecx*4+4], edx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        ret 8
        public_568875 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x568830)
    }
}

#undef public_568875
