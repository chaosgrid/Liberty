#include "Server-PCH.h"


#define public_6d5f759 _public_6d5f759

PROC_DECLARE(0x6d5f730, internal_6d5f730, public_6d5f730);
extern "C" NAKED register_t __cdecl internal_6d5f730()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64904]
        add esp, 0x10
        test eax, eax
        jne public_6d5f759
        pop esi
        ret 
        public_6d5f759 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f730)
    }
}

#undef public_6d5f759
