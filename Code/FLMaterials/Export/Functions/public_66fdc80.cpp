#include "FLMaterials-PCH.h"


#define public_66fdc91 _public_66fdc91

PROC_DECLARE(0x66fdc80, internal_66fdc80, public_66fdc80);
extern "C" NAKED register_t __cdecl internal_66fdc80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+9]
        test cl, cl
        je public_66fdc91
        add eax, 0xC
        ret 4
        public_66fdc91 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x10]
        UNREACHABLE_TRAP(0x66fdc80)
    }
}

#undef public_66fdc91
