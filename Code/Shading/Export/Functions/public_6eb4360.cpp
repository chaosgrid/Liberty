#include "Shading-PCH.h"


#define public_6eb4371 _public_6eb4371

PROC_DECLARE(0x6eb4360, internal_6eb4360, public_6eb4360);
extern "C" NAKED register_t __cdecl internal_6eb4360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb4371
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6eb4371 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x4C]
        UNREACHABLE_TRAP(0x6eb4360)
    }
}

#undef public_6eb4371
