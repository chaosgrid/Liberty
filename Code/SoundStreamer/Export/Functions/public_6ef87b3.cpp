#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b3);

#define public_6ef87b9 _public_6ef87b9
#define public_6ef87c9 _public_6ef87c9

PROC_DECLARE(0x6ef87b3, internal_6ef87b3, public_6ef87b3);
extern "C" NAKED register_t __cdecl internal_6ef87b3()
{
    __asm
    {
        push esi
        mov esi, offset public_6f02540
        public_6ef87b9 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ef87c9
        push eax
        call public_6ef4512
        and dword ptr ds : [esi], 0
        pop ecx
        public_6ef87c9 : nop
        add esi, 4
        cmp esi, offset public_6f02640
        jl public_6ef87b9
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef87b3)
    }
}

#undef public_6ef87b9
#undef public_6ef87c9
