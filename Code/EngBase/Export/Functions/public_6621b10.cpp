#include "EngBase-PCH.h"


#define public_6621b2e _public_6621b2e

PROC_DECLARE(0x6621b10, internal_6621b10, public_6621b10);
extern "C" NAKED register_t __cdecl internal_6621b10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621b2e
        test ecx, ecx
        je public_6621b2e
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        pop esi
        public_6621b2e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6621b10)
    }
}

#undef public_6621b2e
