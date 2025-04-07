#include "DALib-PCH.h"


#define public_65c2bda _public_65c2bda
#define public_65c2bf3 _public_65c2bf3
#define public_65c2c0b _public_65c2c0b

PROC_DECLARE(0x65c2bd0, internal_65c2bd0, public_65c2bd0);
extern "C" NAKED register_t __cdecl internal_65c2bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca1b4]
        test eax, eax
        jne public_65c2bda
        ret 
        public_65c2bda : nop
        cmp eax, dword ptr ds : [public_65ca1b8]
        jne public_65c2bf3
        mov eax, dword ptr ds : [public_65ca1b0]
        sub eax, dword ptr ds : [public_65ca1ac]
        mov dword ptr ds : [public_65ca1bc], eax
        ret 
        public_65c2bf3 : nop
        call dword ptr ds : [public_65c70d8]
        sub eax, dword ptr ds : [public_65ca1ac]
        mov ecx, dword ptr ds : [public_65ca1bc]
        cmp eax, ecx
        ja public_65c2c0b
        mov eax, ecx
        public_65c2c0b : nop
        ret 
        UNREACHABLE_TRAP(0x65c2bd0)
    }
}

#undef public_65c2bda
#undef public_65c2bf3
#undef public_65c2c0b
