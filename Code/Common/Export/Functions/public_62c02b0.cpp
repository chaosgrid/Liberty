#include "Common-PCH.h"


#define public_62c02e9 _public_62c02e9

PROC_DECLARE(0x62c02b0, internal_62c02b0, public_62c02b0);
extern "C" NAKED register_t __cdecl internal_62c02b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62c02e9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62c02e9
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x1C0
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        public_62c02e9 : nop
        ret 4
        UNREACHABLE_TRAP(0x62c02b0)
    }
}

#undef public_62c02e9
