#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4ee0);

#define public_62b4eee _public_62b4eee

PROC_DECLARE(0x62b4ee0, internal_62b4ee0, public_62b4ee0);
extern "C" NAKED register_t __cdecl internal_62b4ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1E0]
        test eax, eax
        je public_62b4eee
        add eax, 0xFFFFFFF8
        ret 
        public_62b4eee : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62b4ee0)
    }
}

#undef public_62b4eee
