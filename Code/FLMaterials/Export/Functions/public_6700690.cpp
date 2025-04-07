#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700680);
CLANG_FORWARD_PROC_SYMBOL(public_6700690);

#define public_670069d _public_670069d
#define public_67006aa _public_67006aa

PROC_DECLARE(0x6700690, internal_6700690, public_6700690);
extern "C" NAKED register_t __cdecl internal_6700690()
{
    __asm
    {
        call public_6700680
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_670069d : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_67006aa
        inc eax
        cmp eax, 0x16
        jl public_670069d
        xor eax, eax
        public_67006aa : nop
        ret 
        UNREACHABLE_TRAP(0x6700690)
    }
}

#undef public_670069d
#undef public_67006aa
