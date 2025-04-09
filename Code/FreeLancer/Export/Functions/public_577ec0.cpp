#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577ec0);

#define public_577ed0 _public_577ed0
#define public_577edb _public_577edb
#define public_577ede _public_577ede

PROC_DECLARE(0x577ec0, internal_577ec0, public_577ec0);
extern "C" NAKED register_t __cdecl internal_577ec0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_577edb
        mov edx, dword ptr ss : [esp+4]
        public_577ed0 : nop
        cmp edx, dword ptr ds : [eax+8]
        je public_577ede
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_577ed0
        public_577edb : nop
        xor eax, eax
        ret 
        public_577ede : nop
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x577ec0)
    }
}

#undef public_577ed0
#undef public_577edb
#undef public_577ede
