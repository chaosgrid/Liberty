#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0950);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_55f61c _public_55f61c

PROC_DECLARE(0x55f5f0, internal_55f5f0, public_55f5f0);
extern "C" NAKED register_t __cdecl internal_55f5f0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_679b4c]
        test eax, eax
        jne public_55f61c
        call public_5b73e0
        mov dword ptr ds : [public_679b4c], eax
        public_55f61c : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        lea edi, ss:[esp+0x30]
        lea edx, ss:[esp+0x30]
        rep movsd
        push edx
        mov ecx, ebx
        call public_5a0950
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x55f5f0)
    }
}

#undef public_55f61c
