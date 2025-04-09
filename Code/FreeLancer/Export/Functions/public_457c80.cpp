#include "Freelancer-PCH.h"


#define public_457c98 _public_457c98

PROC_DECLARE(0x457c80, internal_457c80, public_457c80);
extern "C" NAKED register_t __cdecl internal_457c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457c98
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x1C]
        public_457c98 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457c80)
    }
}

#undef public_457c98
