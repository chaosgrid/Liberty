#include "Server-PCH.h"


#define public_6d5f897 _public_6d5f897

PROC_DECLARE(0x6d5f870, internal_6d5f870, public_6d5f870);
extern "C" NAKED register_t __cdecl internal_6d5f870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        push eax
        push ecx
        push edx
        xor esi, esi
        call dword ptr ds : [public_6d64a1c]
        add esp, 0xC
        cmp eax, 0xFFFFFFFF
        mov eax, 0xFFFFFFFE
        je public_6d5f897
        mov eax, esi
        public_6d5f897 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f870)
    }
}

#undef public_6d5f897
