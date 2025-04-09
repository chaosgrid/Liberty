#include "FreeLancer-PCH.h"


#define public_45355c _public_45355c

PROC_DECLARE(0x453550, internal_453550, public_453550);
extern "C" NAKED register_t __cdecl internal_453550()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x6C]
        test ecx, ecx
        je public_45355c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x44]
        public_45355c : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x453550)
    }
}

#undef public_45355c
