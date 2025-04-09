#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564540);

#define public_564546 _public_564546
#define public_564557 _public_564557

PROC_DECLARE(0x564540, internal_564540, public_564540);
extern "C" NAKED register_t __cdecl internal_564540()
{
    __asm
    {
        push esi
        mov esi, offset public_67a4a8
        public_564546 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_564557
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi], 0
        public_564557 : nop
        add esi, 4
        cmp esi, offset public_67a55c
        jl public_564546
        pop esi
        ret 
        UNREACHABLE_TRAP(0x564540)
    }
}

#undef public_564546
#undef public_564557
