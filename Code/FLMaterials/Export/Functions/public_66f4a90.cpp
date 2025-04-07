#include "FLMaterials-PCH.h"


#define public_66f4abf _public_66f4abf

PROC_DECLARE(0x66f4a90, internal_66f4a90, public_66f4a90);
extern "C" NAKED register_t __cdecl internal_66f4a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x64]
        fld dword ptr ds : [eax+0x68]
        fcomp qword ptr ds : [public_67016d8]
        neg cl
        fnstsw ax
        sbb ecx, ecx
        and ecx, 2
        or ecx, 8
        test ah, 5
        jp public_66f4abf
        mov eax, dword ptr ss : [esp+8]
        or ecx, 2
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 8
        public_66f4abf : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f4a90)
    }
}

#undef public_66f4abf
