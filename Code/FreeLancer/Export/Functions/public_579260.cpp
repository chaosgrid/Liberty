#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579260);

#define public_57927a _public_57927a

PROC_DECLARE(0x579260, internal_579260, public_579260);
extern "C" NAKED register_t __cdecl internal_579260()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c3bc]
        test ecx, ecx
        je public_57927a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [public_67c3bc], 0
        public_57927a : nop
        ret 
        UNREACHABLE_TRAP(0x579260)
    }
}

#undef public_57927a
