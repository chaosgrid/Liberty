#include "FLMaterials-PCH.h"


#define public_66fdd24 _public_66fdd24

PROC_DECLARE(0x66fdd10, internal_66fdd10, public_66fdd10);
extern "C" NAKED register_t __cdecl internal_66fdd10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_66fdd24
        fld dword ptr ds : [public_6702a8c]
        ret 4
        public_66fdd24 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x24]
        UNREACHABLE_TRAP(0x66fdd10)
    }
}

#undef public_66fdd24
