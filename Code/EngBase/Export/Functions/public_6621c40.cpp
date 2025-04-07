#include "EngBase-PCH.h"


#define public_6621c5e _public_6621c5e

PROC_DECLARE(0x6621c40, internal_6621c40, public_6621c40);
extern "C" NAKED register_t __cdecl internal_6621c40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621c5e
        test ecx, ecx
        je public_6621c5e
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        pop esi
        public_6621c5e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6621c40)
    }
}

#undef public_6621c5e
