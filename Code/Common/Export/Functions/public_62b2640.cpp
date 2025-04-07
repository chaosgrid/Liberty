#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631f500);
CLANG_FORWARD_PROC_SYMBOL(public_6321720);

#define public_62b2681 _public_62b2681

PROC_DECLARE(0x62b2640, internal_62b2640, public_62b2640);
extern "C" NAKED register_t __cdecl internal_62b2640()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [ecx+0x21C]
        test esi, esi
        jne public_62b2681
        mov eax, dword ptr ds : [ecx+0x104]
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        call public_6321720
        add esp, 0xC
        test eax, eax
        jne public_62b2681
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_631f500
        add esp, 4
        pop esi
        add esp, 8
        ret 
        public_62b2681 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62b2640)
    }
}

#undef public_62b2681
