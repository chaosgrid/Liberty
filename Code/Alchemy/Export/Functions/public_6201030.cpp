#include "Alchemy-PCH.h"


#define public_620103c _public_620103c

PROC_DECLARE(0x6201030, internal_6201030, public_6201030);
extern "C" NAKED register_t __cdecl internal_6201030()
{
    __asm
    {
        mov eax, offset public_62578bc
        mov ecx, 4
        xor edx, edx
        public_620103c : nop
        mov dword ptr ds : [eax-8], edx
        mov dword ptr ds : [eax-4], edx
        mov dword ptr ds : [eax], edx
        add eax, 0xC
        dec ecx
        jne public_620103c
        ret 
        UNREACHABLE_TRAP(0x6201030)
    }
}

#undef public_620103c
