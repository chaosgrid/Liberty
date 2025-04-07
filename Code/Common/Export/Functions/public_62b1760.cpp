#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296620);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_62b1760);

#define public_62b1781 _public_62b1781

PROC_DECLARE(0x62b1760, internal_62b1760, public_62b1760);
extern "C" NAKED register_t __cdecl internal_62b1760()
{
    __asm
    {
        push 0x20000
        add ecx, 0xE4
        call public_629b720
        push eax
        call public_6296620
        add esp, 4
        test eax, eax
        je public_62b1781
        mov al, byte ptr ds : [eax+0x54]
        ret 
        public_62b1781 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62b1760)
    }
}

#undef public_62b1781
