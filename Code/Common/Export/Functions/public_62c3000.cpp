#include "Common-PCH.h"


#define public_62c301d _public_62c301d

PROC_DECLARE(0x62c3000, internal_62c3000, public_62c3000);
extern "C" NAKED register_t __cdecl internal_62c3000()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x320]
        cmp eax, 6
        je public_62c301d
        cmp eax, 7
        je public_62c301d
        cmp eax, 8
        je public_62c301d
        cmp eax, 0xA
        je public_62c301d
        mov al, 1
        ret 
        public_62c301d : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62c3000)
    }
}

#undef public_62c301d
