#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_514050);

#define public_514064 _public_514064

PROC_DECLARE(0x514050, internal_514050, public_514050);
extern "C" NAKED register_t __cdecl internal_514050()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_514064
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0xC]
        public_514064 : nop
        ret 4
        UNREACHABLE_TRAP(0x514050)
    }
}

#undef public_514064
