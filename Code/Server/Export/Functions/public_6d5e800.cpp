#include "Server-PCH.h"


#define public_6d5e824 _public_6d5e824

PROC_DECLARE(0x6d5e800, internal_6d5e800, public_6d5e800);
extern "C" NAKED register_t __cdecl internal_6d5e800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d5e824
        cmp byte ptr ds : [eax], 0
        je public_6d5e824
        push esi
        push eax
        xor esi, esi
        call dword ptr ds : [public_6d643b4]
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        ret 
        public_6d5e824 : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e800)
    }
}

#undef public_6d5e824
