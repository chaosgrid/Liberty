#include "Common-PCH.h"


#define public_630aba2 _public_630aba2

PROC_DECLARE(0x630ab90, internal_630ab90, public_630ab90);
extern "C" NAKED register_t __cdecl internal_630ab90()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov eax, 2
        jne public_630aba2
        mov eax, 0x12
        public_630aba2 : nop
        mov ecx, dword ptr ss : [esp+4]
        or eax, 2
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        ret 
        UNREACHABLE_TRAP(0x630ab90)
    }
}

#undef public_630aba2
