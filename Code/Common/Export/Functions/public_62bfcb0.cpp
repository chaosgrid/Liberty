#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6321720);

#define public_62bfd04 _public_62bfd04
#define public_62bfd09 _public_62bfd09

PROC_DECLARE(0x62bfcb0, internal_62bfcb0, public_62bfcb0);
extern "C" NAKED register_t __cdecl internal_62bfcb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        sub esp, 8
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfd09
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62bfd09
        mov eax, dword ptr ds : [ecx+0x104]
        push 0
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], eax
        call public_6321720
        add esp, 0xC
        test eax, eax
        jne public_62bfd04
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        add esp, 8
        ret 4
        public_62bfd04 : nop
        mov eax, 0xFFFFFFFE
        public_62bfd09 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62bfcb0)
    }
}

#undef public_62bfd04
#undef public_62bfd09
