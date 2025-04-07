#include "Common-PCH.h"


#define public_62a464b _public_62a464b
#define public_62a465c _public_62a465c

PROC_DECLARE(0x62a4640, internal_62a4640, public_62a4640);
extern "C" NAKED register_t __cdecl internal_62a4640()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        cmp dword ptr ds : [ecx+0x14], eax
        jne public_62a464b
        xor eax, eax
        ret 
        public_62a464b : nop
        mov edx, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x14], edx
        mov ecx, edx
        cmp ecx, eax
        jne public_62a465c
        xor eax, eax
        ret 
        public_62a465c : nop
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x62a4640)
    }
}

#undef public_62a464b
#undef public_62a465c
