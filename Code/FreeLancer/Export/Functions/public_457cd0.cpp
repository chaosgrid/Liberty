#include "Freelancer-PCH.h"


#define public_457ce8 _public_457ce8

PROC_DECLARE(0x457cd0, internal_457cd0, public_457cd0);
extern "C" NAKED register_t __cdecl internal_457cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457ce8
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x20]
        public_457ce8 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457cd0)
    }
}

#undef public_457ce8
