#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281680);
CLANG_FORWARD_PROC_SYMBOL(public_62af420);

#define public_62af43b _public_62af43b

PROC_DECLARE(0x62af420, internal_62af420, public_62af420);
extern "C" NAKED register_t __cdecl internal_62af420()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_62af43b
        mov ecx, dword ptr ds : [ecx+0x84]
        test ecx, ecx
        je public_62af43b
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6281680
        public_62af43b : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62af420)
    }
}

#undef public_62af43b
