#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6e70);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);

#define public_4c6e81 _public_4c6e81

PROC_DECLARE(0x4c6e70, internal_4c6e70, public_4c6e70);
extern "C" NAKED register_t __cdecl internal_4c6e70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_4c6e81
        add eax, 0x1C
        push eax
        call public_5850f0
        public_4c6e81 : nop
        ret 
        UNREACHABLE_TRAP(0x4c6e70)
    }
}

#undef public_4c6e81
