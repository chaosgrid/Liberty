#include "DALib-PCH.h"


#define public_65c2c3b _public_65c2c3b

PROC_DECLARE(0x65c2c10, internal_65c2c10, public_65c2c10);
extern "C" NAKED register_t __cdecl internal_65c2c10()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [public_65ca1c8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp], eax
        je public_65c2c3b
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_65c2c3b
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0
        lea edx, ss:[esp+8]
        push edx
        push ecx
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp]
        public_65c2c3b : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c2c10)
    }
}

#undef public_65c2c3b
