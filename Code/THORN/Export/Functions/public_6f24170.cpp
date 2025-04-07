#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24170);

#define public_6f2417a _public_6f2417a

PROC_DECLARE(0x6f24170, internal_6f24170, public_6f24170);
extern "C" NAKED register_t __cdecl internal_6f24170()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f2417a
        xor eax, eax
        ret 
        public_6f2417a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6f24170)
    }
}

#undef public_6f2417a
