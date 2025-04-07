#include "Freelancer-PCH.h"


#define public_457c14 _public_457c14

PROC_DECLARE(0x457c00, internal_457c00, public_457c00);
extern "C" NAKED register_t __cdecl internal_457c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        test eax, eax
        je public_457c14
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x2C]
        public_457c14 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457c00)
    }
}

#undef public_457c14
