#include "FLMaterials-PCH.h"


#define public_66fdd04 _public_66fdd04

PROC_DECLARE(0x66fdcf0, internal_66fdcf0, public_66fdcf0);
extern "C" NAKED register_t __cdecl internal_66fdcf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_66fdd04
        fld dword ptr ds : [public_6701394]
        ret 4
        public_66fdd04 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x20]
        UNREACHABLE_TRAP(0x66fdcf0)
    }
}

#undef public_66fdd04
