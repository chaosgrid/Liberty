#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299f60);

#define public_6299f70 _public_6299f70
#define public_6299f7c _public_6299f7c

PROC_DECLARE(0x6299f60, internal_6299f60, public_6299f60);
extern "C" NAKED register_t __cdecl internal_6299f60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x54]
        add ecx, 0x54
        xor eax, eax
        cmp edx, 0xFFFFFFFF
        je public_6299f7c
        lea ecx, ds:[ecx]
        public_6299f70 : nop
        mov edx, dword ptr ds : [ecx+0x34]
        add ecx, 0x34
        inc eax
        cmp edx, 0xFFFFFFFF
        jne public_6299f70
        public_6299f7c : nop
        ret 
        UNREACHABLE_TRAP(0x6299f60)
    }
}

#undef public_6299f70
#undef public_6299f7c
