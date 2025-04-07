#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57820);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);

#define public_6f57832 _public_6f57832

PROC_DECLARE(0x6f57820, internal_6f57820, public_6f57820);
extern "C" NAKED register_t __cdecl internal_6f57820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x48]
        test eax, eax
        je public_6f57832
        add ecx, 0xFFFFFEE8
        call public_6f57b00
        public_6f57832 : nop
        ret 8
        UNREACHABLE_TRAP(0x6f57820)
    }
}

#undef public_6f57832
