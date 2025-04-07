#include "Common-PCH.h"


#define public_62c11d9 _public_62c11d9

PROC_DECLARE(0x62c11b0, internal_62c11b0, public_62c11b0);
extern "C" NAKED register_t __cdecl internal_62c11b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62c11d9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_62c11d9
        fld dword ptr ds : [eax+0x1AC]
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [edx]
        xor eax, eax
        ret 4
        public_62c11d9 : nop
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x62c11b0)
    }
}

#undef public_62c11d9
