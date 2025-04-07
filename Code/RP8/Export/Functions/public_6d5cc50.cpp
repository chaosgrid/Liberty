#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc50);

#define public_6d5cc5c _public_6d5cc5c
#define public_6d5cc6a _public_6d5cc6a

PROC_DECLARE(0x6d5cc50, internal_6d5cc50, public_6d5cc50);
extern "C" NAKED register_t __cdecl internal_6d5cc50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, 9
        jg public_6d5cc5c
        xor eax, eax
        ret 
        public_6d5cc5c : nop
        cmp ecx, 0x16
        jge public_6d5cc6a
        call public_6d5cc20
        mov eax, dword ptr ds : [eax+ecx*4]
        ret 
        public_6d5cc6a : nop
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6d5cc50)
    }
}

#undef public_6d5cc5c
#undef public_6d5cc6a
