#include "Common-PCH.h"


#define public_62a92ce _public_62a92ce

PROC_DECLARE(0x62a92c0, internal_62a92c0, public_62a92c0);
extern "C" NAKED register_t __cdecl internal_62a92c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x168]
        test ecx, ecx
        je public_62a92ce
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        public_62a92ce : nop
        ret 8
        UNREACHABLE_TRAP(0x62a92c0)
    }
}

#undef public_62a92ce
