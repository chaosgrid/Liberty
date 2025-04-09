#include "Freelancer-PCH.h"


#define public_457c70 _public_457c70

PROC_DECLARE(0x457c50, internal_457c50, public_457c50);
extern "C" NAKED register_t __cdecl internal_457c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457c70
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x14]
        public_457c70 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457c50)
    }
}

#undef public_457c70
