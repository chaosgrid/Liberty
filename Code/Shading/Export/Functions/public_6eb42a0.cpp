#include "Shading-PCH.h"


#define public_6eb42b1 _public_6eb42b1

PROC_DECLARE(0x6eb42a0, internal_6eb42a0, public_6eb42a0);
extern "C" NAKED register_t __cdecl internal_6eb42a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb42b1
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6eb42b1 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x34]
        UNREACHABLE_TRAP(0x6eb42a0)
    }
}

#undef public_6eb42b1
