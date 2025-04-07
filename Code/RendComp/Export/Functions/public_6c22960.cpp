#include "RendComp-PCH.h"


#define public_6c22975 _public_6c22975

PROC_DECLARE(0x6c22960, internal_6c22960, public_6c22960);
extern "C" NAKED register_t __cdecl internal_6c22960()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        jne public_6c22975
        or eax, 0xFFFFFFFF
        ret 8
        public_6c22975 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c22960)
    }
}

#undef public_6c22975
