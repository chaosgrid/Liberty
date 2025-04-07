#include "FLMaterials-PCH.h"


#define public_66f335d _public_66f335d

PROC_DECLARE(0x66f3330, internal_66f3330, public_66f3330);
extern "C" NAKED register_t __cdecl internal_66f3330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_66f335d
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_66f335d
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66f335d
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_66f335d : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f3330)
    }
}

#undef public_66f335d
