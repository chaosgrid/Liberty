#include "Freelancer-PCH.h"


#define public_42dad0 _public_42dad0

PROC_DECLARE(0x42dac0, internal_42dac0, public_42dac0);
extern "C" NAKED register_t __cdecl internal_42dac0()
{
    __asm
    {
        mov eax, offset public_667d98
        mov ecx, 8
        mov edx, 0xBF800000
        nop 
        public_42dad0 : nop
        mov dword ptr ds : [eax-8], edx
        mov dword ptr ds : [eax-4], edx
        mov dword ptr ds : [eax], edx
        add eax, 0xC
        dec ecx
        jne public_42dad0
        ret 
        UNREACHABLE_TRAP(0x42dac0)
    }
}

#undef public_42dad0
