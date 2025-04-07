#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f460);

#define public_6d4f46d _public_6d4f46d
#define public_6d4f479 _public_6d4f479

PROC_DECLARE(0x6d4f460, internal_6d4f460, public_6d4f460);
extern "C" NAKED register_t __cdecl internal_6d4f460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x31C]
        test eax, eax
        jge public_6d4f46d
        xor eax, eax
        ret 
        public_6d4f46d : nop
        cmp eax, 0x3B9AC9FF
        jle public_6d4f479
        mov eax, 0x3B9AC9FF
        public_6d4f479 : nop
        ret 
        UNREACHABLE_TRAP(0x6d4f460)
    }
}

#undef public_6d4f46d
#undef public_6d4f479
