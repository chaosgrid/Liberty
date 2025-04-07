#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6f87);

#define public_6ef6f9f _public_6ef6f9f

PROC_DECLARE(0x6ef6f87, internal_6ef6f87, public_6ef6f87);
extern "C" NAKED register_t __cdecl internal_6ef6f87()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f010dc]
        test eax, eax
        je public_6ef6f9f
        push dword ptr ss : [esp+4]
        call eax
        test eax, eax
        pop ecx
        je public_6ef6f9f
        push 1
        pop eax
        ret 
        public_6ef6f9f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ef6f87)
    }
}

#undef public_6ef6f9f
