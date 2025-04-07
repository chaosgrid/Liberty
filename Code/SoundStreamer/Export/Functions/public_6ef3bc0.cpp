#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);

#define public_6ef3bcf _public_6ef3bcf
#define public_6ef3be8 _public_6ef3be8

PROC_DECLARE(0x6ef3bc0, internal_6ef3bc0, public_6ef3bc0);
extern "C" NAKED register_t __cdecl internal_6ef3bc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ef3bcf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ef3bcf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ef3be8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6ef4507
        add esp, 4
        xor eax, eax
        public_6ef3be8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ef3bc0)
    }
}

#undef public_6ef3bcf
#undef public_6ef3be8
