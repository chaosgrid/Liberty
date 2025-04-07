#include "Common-PCH.h"


#define public_62a462f _public_62a462f

PROC_DECLARE(0x62a4620, internal_62a4620, public_62a4620);
extern "C" NAKED register_t __cdecl internal_62a4620()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ds : [ecx+0x14], eax
        jne public_62a462f
        xor eax, eax
        ret 
        public_62a462f : nop
        mov eax, dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x62a4620)
    }
}

#undef public_62a462f
