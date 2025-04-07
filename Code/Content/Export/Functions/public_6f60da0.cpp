#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60da0);

#define public_6f60db0 _public_6f60db0
#define public_6f60dbc _public_6f60dbc
#define public_6f60dc3 _public_6f60dc3

PROC_DECLARE(0x6f60da0, internal_6f60da0, public_6f60da0);
extern "C" NAKED register_t __cdecl internal_6f60da0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd1ba0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f60dc3
        mov edx, dword ptr ss : [esp+4]
        public_6f60db0 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f60dbc
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f60db0
        ret 
        public_6f60dbc : nop
        mov dword ptr ds : [eax+8], 0
        public_6f60dc3 : nop
        ret 
        UNREACHABLE_TRAP(0x6f60da0)
    }
}

#undef public_6f60db0
#undef public_6f60dbc
#undef public_6f60dc3
