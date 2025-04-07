#include "EngBase-PCH.h"


#define public_66219c8 _public_66219c8

PROC_DECLARE(0x66219b0, internal_66219b0, public_66219b0);
extern "C" NAKED register_t __cdecl internal_66219b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax], 0
        je public_66219c8
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], ecx
        public_66219c8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x66219b0)
    }
}

#undef public_66219c8
