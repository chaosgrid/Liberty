#include "FreeLancer-PCH.h"


#define public_4f6f70 _public_4f6f70

PROC_DECLARE(0x4f6f60, internal_4f6f60, public_4f6f60);
extern "C" NAKED register_t __cdecl internal_4f6f60()
{
    __asm
    {
        mov eax, offset public_674ce4
        mov ecx, 0x2F
        xor edx, edx
        lea esp, ss:[esp]
        public_4f6f70 : nop
        mov dword ptr ds : [eax-4], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edx
        add eax, 0xC
        dec ecx
        jne public_4f6f70
        ret 
        UNREACHABLE_TRAP(0x4f6f60)
    }
}

#undef public_4f6f70
