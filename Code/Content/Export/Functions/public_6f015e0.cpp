#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f015e0);

#define public_6f015fb _public_6f015fb

PROC_DECLARE(0x6f015e0, internal_6f015e0, public_6f015e0);
extern "C" NAKED register_t __cdecl internal_6f015e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+0x218]
        or eax, 0xFFFFFFFF
        test edx, edx
        je public_6f015fb
        push ecx
        call dword ptr ds : [public_6fb35d0]
        add esp, 4
        public_6f015fb : nop
        ret 
        UNREACHABLE_TRAP(0x6f015e0)
    }
}

#undef public_6f015fb
