#include "Shading-PCH.h"


#define public_6eb4251 _public_6eb4251

PROC_DECLARE(0x6eb4240, internal_6eb4240, public_6eb4240);
extern "C" NAKED register_t __cdecl internal_6eb4240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb4251
        or eax, 0xFFFFFFFF
        ret 8
        public_6eb4251 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x2C]
        UNREACHABLE_TRAP(0x6eb4240)
    }
}

#undef public_6eb4251
