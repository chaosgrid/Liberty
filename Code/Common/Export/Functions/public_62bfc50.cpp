#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63216a0);

#define public_62bfca2 _public_62bfca2
#define public_62bfca7 _public_62bfca7

PROC_DECLARE(0x62bfc50, internal_62bfc50, public_62bfc50);
extern "C" NAKED register_t __cdecl internal_62bfc50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        sub esp, 8
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfca7
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62bfca7
        mov eax, dword ptr ds : [ecx+0x104]
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], eax
        call public_63216a0
        add esp, 8
        test eax, eax
        jne public_62bfca2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        add esp, 8
        ret 4
        public_62bfca2 : nop
        mov eax, 0xFFFFFFFE
        public_62bfca7 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62bfc50)
    }
}

#undef public_62bfca2
#undef public_62bfca7
