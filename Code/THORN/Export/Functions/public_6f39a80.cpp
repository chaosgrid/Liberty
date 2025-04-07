#include "THORN-PCH.h"


#define public_6f39a93 _public_6f39a93

PROC_DECLARE(0x6f39a80, internal_6f39a80, public_6f39a80);
extern "C" NAKED register_t __cdecl internal_6f39a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        test ecx, ecx
        jne public_6f39a93
        xor eax, eax
        ret 4
        public_6f39a93 : nop
        mov eax, dword ptr ds : [eax+0xC0]
        sub eax, ecx
        sar eax, 2
        ret 4
        UNREACHABLE_TRAP(0x6f39a80)
    }
}

#undef public_6f39a93
