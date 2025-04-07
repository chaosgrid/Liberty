#include "Freelancer-PCH.h"


#define public_457cc0 _public_457cc0

PROC_DECLARE(0x457ca0, internal_457ca0, public_457ca0);
extern "C" NAKED register_t __cdecl internal_457ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457cc0
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x18]
        public_457cc0 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457ca0)
    }
}

#undef public_457cc0
