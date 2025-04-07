#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49370);

#define public_6f4937d _public_6f4937d

PROC_DECLARE(0x6f49370, internal_6f49370, public_6f49370);
extern "C" NAKED register_t __cdecl internal_6f49370()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA4]
        test edx, edx
        jne public_6f4937d
        xor eax, eax
        ret 
        public_6f4937d : nop
        mov eax, dword ptr ds : [ecx+0xA8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f49370)
    }
}

#undef public_6f4937d
