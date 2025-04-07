#include "Server-PCH.h"


#define public_6d5f4da _public_6d5f4da

PROC_DECLARE(0x6d5f4b0, internal_6d5f4b0, public_6d5f4b0);
extern "C" NAKED register_t __cdecl internal_6d5f4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64a1c]
        add esp, 0xC
        test eax, eax
        jne public_6d5f4da
        pop esi
        ret 
        public_6d5f4da : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f4b0)
    }
}

#undef public_6d5f4da
