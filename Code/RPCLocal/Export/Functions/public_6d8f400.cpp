#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d81170);
CLANG_FORWARD_PROC_SYMBOL(public_6d864a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8efc0);

#define public_6d8f426 _public_6d8f426
#define public_6d8f43d _public_6d8f43d

PROC_DECLARE(0x6d8f400, internal_6d8f400, public_6d8f400);
extern "C" NAKED register_t __cdecl internal_6d8f400()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6db30fc]
        mov ecx, dword ptr ds : [public_6dbbd58]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6d8f43d
        mov edx, dword ptr ds : [eax+0x2C]
        test edx, edx
        jbe public_6d8f43d
        call public_6d864a0
        test eax, eax
        je public_6d8f43d
        public_6d8f426 : nop
        push eax
        mov ecx, esi
        call public_6d81170
        mov ecx, dword ptr ds : [public_6dbbd58]
        call public_6d864a0
        test eax, eax
        jne public_6d8f426
        public_6d8f43d : nop
        call dword ptr ds : [public_6db30f8]
        mov ecx, offset public_6dbbcdc
        call public_6d8efc0
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d8f400)
    }
}

#undef public_6d8f426
#undef public_6d8f43d
