#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de0b8);

#define public_65de0d3 _public_65de0d3
#define public_65de0d9 _public_65de0d9
#define public_65de0df _public_65de0df
#define public_65de0e5 _public_65de0e5

PROC_DECLARE(0x65de0b8, internal_65de0b8, public_65de0b8);
extern "C" NAKED register_t __cdecl internal_65de0b8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0x3A4
        je public_65de0e5
        sub eax, 4
        je public_65de0df
        sub eax, 0xD
        je public_65de0d9
        dec eax
        je public_65de0d3
        xor eax, eax
        ret 
        public_65de0d3 : nop
        mov eax, 0x404
        ret 
        public_65de0d9 : nop
        mov eax, 0x412
        ret 
        public_65de0df : nop
        mov eax, 0x804
        ret 
        public_65de0e5 : nop
        mov eax, 0x411
        ret 
        UNREACHABLE_TRAP(0x65de0b8)
    }
}

#undef public_65de0d3
#undef public_65de0d9
#undef public_65de0df
#undef public_65de0e5
