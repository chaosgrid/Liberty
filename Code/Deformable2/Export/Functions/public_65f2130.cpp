#include "Deformable2-PCH.h"


#define public_65f2146 _public_65f2146

PROC_DECLARE(0x65f2130, internal_65f2130, public_65f2130);
extern "C" NAKED register_t __cdecl internal_65f2130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_65f2146
        mov eax, dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_65f2146 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f2130)
    }
}

#undef public_65f2146
