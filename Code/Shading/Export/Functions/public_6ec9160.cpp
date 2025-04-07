#include "Shading-PCH.h"


#define public_6ec916f _public_6ec916f

PROC_DECLARE(0x6ec9160, internal_6ec9160, public_6ec9160);
extern "C" NAKED register_t __cdecl internal_6ec9160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 2
        jb public_6ec916f
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6ec916f : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+eax*4+0x68]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ec9160)
    }
}

#undef public_6ec916f
