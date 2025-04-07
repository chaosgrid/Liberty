#include "Alchemy-PCH.h"


#define public_624301d _public_624301d

PROC_DECLARE(0x6243000, internal_6243000, public_6243000);
extern "C" NAKED register_t __cdecl internal_6243000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_624301d
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_624301d
        mov eax, dword ptr ds : [eax+0xC]
        sub eax, ecx
        sar eax, 4
        ret 4
        public_624301d : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6243000)
    }
}

#undef public_624301d
