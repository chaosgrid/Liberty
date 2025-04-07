#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1440);

#define public_62a144b _public_62a144b

PROC_DECLARE(0x62a1440, internal_62a1440, public_62a1440);
extern "C" NAKED register_t __cdecl internal_62a1440()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0
        jne public_62a144b
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        public_62a144b : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x62a1440)
    }
}

#undef public_62a144b
