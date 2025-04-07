#include "Deformable2-PCH.h"


#define public_65f20cd _public_65f20cd
#define public_65f20e0 _public_65f20e0

PROC_DECLARE(0x65f20b0, internal_65f20b0, public_65f20b0);
extern "C" NAKED register_t __cdecl internal_65f20b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_65f20e0
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_65f20cd
        mov edx, dword ptr ss : [esp+0xC]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 0xC
        public_65f20cd : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 0xC
        public_65f20e0 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0xFFFFFFFF
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f20b0)
    }
}

#undef public_65f20cd
#undef public_65f20e0
