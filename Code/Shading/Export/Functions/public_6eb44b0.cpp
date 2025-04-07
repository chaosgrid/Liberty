#include "Shading-PCH.h"


#define public_6eb44c1 _public_6eb44c1

PROC_DECLARE(0x6eb44b0, internal_6eb44b0, public_6eb44b0);
extern "C" NAKED register_t __cdecl internal_6eb44b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6eb44c1
        or eax, 0xFFFFFFFF
        ret 8
        public_6eb44c1 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x20]
        UNREACHABLE_TRAP(0x6eb44b0)
    }
}

#undef public_6eb44c1
