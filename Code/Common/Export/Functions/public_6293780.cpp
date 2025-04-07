#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293780);

#define public_6293791 _public_6293791
#define public_6293793 _public_6293793

PROC_DECLARE(0x6293780, internal_6293780, public_6293780);
extern "C" NAKED register_t __cdecl internal_6293780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6293791
        test dword ptr ds : [eax+0x14], 0x1FE0
        jne public_6293793
        public_6293791 : nop
        xor eax, eax
        public_6293793 : nop
        ret 
        UNREACHABLE_TRAP(0x6293780)
    }
}

#undef public_6293791
#undef public_6293793
