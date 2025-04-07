#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55310);

#define public_6f5532c _public_6f5532c

PROC_DECLARE(0x6f55310, internal_6f55310, public_6f55310);
extern "C" NAKED register_t __cdecl internal_6f55310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx]
        jne public_6f5532c
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f5532c
        mov eax, 1
        ret 
        public_6f5532c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f55310)
    }
}

#undef public_6f5532c
