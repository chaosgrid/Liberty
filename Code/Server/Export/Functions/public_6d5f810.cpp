#include "Server-PCH.h"


#define public_6d5f835 _public_6d5f835

PROC_DECLARE(0x6d5f810, internal_6d5f810, public_6d5f810);
extern "C" NAKED register_t __cdecl internal_6d5f810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        xor esi, esi
        call dword ptr ds : [public_6d64a30]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [edx], eax
        cmp eax, 0xFFFFFFFF
        mov eax, 0xFFFFFFFE
        je public_6d5f835
        mov eax, esi
        public_6d5f835 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f810)
    }
}

#undef public_6d5f835
