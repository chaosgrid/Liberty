#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4a0);

#define public_6d8f4b8 _public_6d8f4b8

PROC_DECLARE(0x6d8f4a0, internal_6d8f4a0, public_6d8f4a0);
extern "C" NAKED register_t __cdecl internal_6d8f4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6d8f4b8
        dec eax
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_6d8f4b8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        xor eax, eax
        ret 
        public_6d8f4b8 : nop
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6d8f4a0)
    }
}

#undef public_6d8f4b8
