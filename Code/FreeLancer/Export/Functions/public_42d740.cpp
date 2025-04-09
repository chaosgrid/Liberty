#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);

#define public_42d758 _public_42d758

PROC_DECLARE(0x42d740, internal_42d740, public_42d740);
extern "C" NAKED register_t __cdecl internal_42d740()
{
    __asm
    {
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_42d758
        mov ecx, dword ptr ds : [public_667d54]
        xor eax, eax
        test ecx, ecx
        setg al
        ret 
        public_42d758 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x42d740)
    }
}

#undef public_42d758
