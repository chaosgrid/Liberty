#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5abdb0);

#define public_5abdc4 _public_5abdc4
#define public_5abdd5 _public_5abdd5
#define public_5abdd7 _public_5abdd7

PROC_DECLARE(0x5abdb0, internal_5abdb0, public_5abdb0);
extern "C" NAKED register_t __cdecl internal_5abdb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x144]
        mov ecx, dword ptr ds : [ecx+0x148]
        cmp eax, ecx
        je public_5abdd5
        mov edx, dword ptr ss : [esp+4]
        public_5abdc4 : nop
        cmp dword ptr ds : [eax+0x90], edx
        je public_5abdd7
        add eax, 0x9C
        cmp eax, ecx
        jne public_5abdc4
        public_5abdd5 : nop
        xor eax, eax
        public_5abdd7 : nop
        ret 4
        UNREACHABLE_TRAP(0x5abdb0)
    }
}

#undef public_5abdc4
#undef public_5abdd5
#undef public_5abdd7
