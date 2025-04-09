#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c83e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4cb0);

#define public_4c83f3 _public_4c83f3

PROC_DECLARE(0x4c83e0, internal_4c83e0, public_4c83e0);
extern "C" NAKED register_t __cdecl internal_4c83e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_4c83f3
        mov ecx, dword ptr ds : [public_674bc8]
        jmp public_4f4cb0
        public_4c83f3 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4c83e0)
    }
}

#undef public_4c83f3
