#include "RendComp-PCH.h"


#define public_6c30a63 _public_6c30a63

PROC_DECLARE(0x6c30a50, internal_6c30a50, public_6c30a50);
extern "C" NAKED register_t __cdecl internal_6c30a50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jge public_6c30a63
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c30a63 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x54]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c30a50)
    }
}

#undef public_6c30a63
