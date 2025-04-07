#include "Common-PCH.h"


#define public_634ad53 _public_634ad53
#define public_634ad5a _public_634ad5a

PROC_DECLARE(0x634ad40, internal_634ad40, public_634ad40);
extern "C" NAKED register_t __cdecl internal_634ad40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax+0x20]
        add ecx, eax
        cmp dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [ecx+4]
        jne public_634ad53
        add eax, ecx
        ret 
        public_634ad53 : nop
        test eax, eax
        je public_634ad5a
        add eax, ecx
        ret 
        public_634ad5a : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x634ad40)
    }
}

#undef public_634ad53
#undef public_634ad5a
