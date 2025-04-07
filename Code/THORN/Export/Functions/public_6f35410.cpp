#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f229b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f35477 _public_6f35477
#define public_6f35492 _public_6f35492

PROC_DECLARE(0x6f35410, internal_6f35410, public_6f35410);
extern "C" NAKED register_t __cdecl internal_6f35410()
{
    __asm
    {
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_6f35492
        call public_6f224f0
        mov esi, dword ptr ss : [esp+0x50]
        cmp eax, esi
        jb public_6f35492
        mov ecx, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call public_6f22b70
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ds : [edi+0xC]
        push esi
        call public_6f229b0
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_6f61e18]
        test eax, eax
        jne public_6f35477
        call public_6f57de0
        mov dword ptr ds : [public_6f61e18], eax
        public_6f35477 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        public_6f35492 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6f35410)
    }
}

#undef public_6f35477
#undef public_6f35492
