#include "EngBase-PCH.h"


#define public_6621bee _public_6621bee

PROC_DECLARE(0x6621bd0, internal_6621bd0, public_6621bd0);
extern "C" NAKED register_t __cdecl internal_6621bd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621bee
        test ecx, ecx
        je public_6621bee
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        pop esi
        public_6621bee : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6621bd0)
    }
}

#undef public_6621bee
