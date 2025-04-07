#include "zlib-PCH.h"


#define public_100086f0 _public_100086f0

PROC_DECLARE(0x100086e0, internal_100086e0, public_100086e0);
extern "C" NAKED register_t __cdecl internal_100086e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_100086f0
        mov eax, 0xFFFFFF9A
        ret 8
        public_100086f0 : nop
        mov edx, dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x100086e0)
    }
}

#undef public_100086f0
