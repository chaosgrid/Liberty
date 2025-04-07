#include "EngBase-PCH.h"


#define public_6621b8e _public_6621b8e

PROC_DECLARE(0x6621b70, internal_6621b70, public_6621b70);
extern "C" NAKED register_t __cdecl internal_6621b70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621b8e
        test ecx, ecx
        je public_6621b8e
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        pop esi
        public_6621b8e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6621b70)
    }
}

#undef public_6621b8e
