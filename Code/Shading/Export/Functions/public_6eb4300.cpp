#include "Shading-PCH.h"


#define public_6eb4311 _public_6eb4311

PROC_DECLARE(0x6eb4300, internal_6eb4300, public_6eb4300);
extern "C" NAKED register_t __cdecl internal_6eb4300()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb4311
        or eax, 0xFFFFFFFF
        ret 8
        public_6eb4311 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x40]
        UNREACHABLE_TRAP(0x6eb4300)
    }
}

#undef public_6eb4311
