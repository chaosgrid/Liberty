#include "FLMaterials-PCH.h"


#define public_66fdc71 _public_66fdc71

PROC_DECLARE(0x66fdc60, internal_66fdc60, public_66fdc60);
extern "C" NAKED register_t __cdecl internal_66fdc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+9]
        test cl, cl
        je public_66fdc71
        add eax, 0x30
        ret 4
        public_66fdc71 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x66fdc60)
    }
}

#undef public_66fdc71
