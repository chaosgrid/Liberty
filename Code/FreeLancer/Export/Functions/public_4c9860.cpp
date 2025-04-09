#include "FreeLancer-PCH.h"


#define public_4c9870 _public_4c9870

PROC_DECLARE(0x4c9860, internal_4c9860, public_4c9860);
extern "C" NAKED register_t __cdecl internal_4c9860()
{
    __asm
    {
        mov eax, offset public_6735d4
        mov edx, 0x10
        xor ecx, ecx
        lea esp, ss:[esp]
        public_4c9870 : nop
        mov dword ptr ds : [eax-8], ecx
        mov dword ptr ds : [eax-4], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x74], 1
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x80], ecx
        add eax, 0x98
        dec edx
        jne public_4c9870
        mov dword ptr ds : [public_6735c0], ecx
        ret 
        UNREACHABLE_TRAP(0x4c9860)
    }
}

#undef public_4c9870
