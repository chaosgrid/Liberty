#include "Common-PCH.h"


#define public_62bf8cb _public_62bf8cb

PROC_DECLARE(0x62bf8a0, internal_62bf8a0, public_62bf8a0);
extern "C" NAKED register_t __cdecl internal_62bf8a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bf8cb
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bf8cb
        fld dword ptr ds : [ecx+0x29C]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        public_62bf8cb : nop
        ret 4
        UNREACHABLE_TRAP(0x62bf8a0)
    }
}

#undef public_62bf8cb
