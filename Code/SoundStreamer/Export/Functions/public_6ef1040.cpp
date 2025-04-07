#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1040);

#define public_6ef1056 _public_6ef1056
#define public_6ef1077 _public_6ef1077

PROC_DECLARE(0x6ef1040, internal_6ef1040, public_6ef1040);
extern "C" NAKED register_t __cdecl internal_6ef1040()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x80]
        cmp eax, 3
        je public_6ef1056
        cmp eax, 6
        je public_6ef1056
        cmp eax, 2
        jne public_6ef1077
        public_6ef1056 : nop
        mov eax, dword ptr ds : [ecx+0xB8]
        test eax, eax
        je public_6ef1077
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        jl public_6ef1077
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        public_6ef1077 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef1040)
    }
}

#undef public_6ef1056
#undef public_6ef1077
