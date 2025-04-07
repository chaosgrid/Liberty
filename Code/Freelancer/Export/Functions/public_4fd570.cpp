#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f70b0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd570);

#define public_4fd598 _public_4fd598

PROC_DECLARE(0x4fd570, internal_4fd570, public_4fd570);
extern "C" NAKED register_t __cdecl internal_4fd570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*4]
        fld dword ptr ds : [eax*8+public_612a6c]
        fstp dword ptr ss : [esp+4]
        call public_4f70b0
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_4fd598
        mov eax, 1
        ret 
        public_4fd598 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4fd570)
    }
}

#undef public_4fd598
