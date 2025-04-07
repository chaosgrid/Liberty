#include "Shading-PCH.h"


#define public_6eb4351 _public_6eb4351

PROC_DECLARE(0x6eb4340, internal_6eb4340, public_6eb4340);
extern "C" NAKED register_t __cdecl internal_6eb4340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb4351
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6eb4351 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x48]
        UNREACHABLE_TRAP(0x6eb4340)
    }
}

#undef public_6eb4351
