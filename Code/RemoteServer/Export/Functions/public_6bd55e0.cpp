#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd55e0);

#define public_6bd55ea _public_6bd55ea

PROC_DECLARE(0x6bd55e0, internal_6bd55e0, public_6bd55e0);
extern "C" NAKED register_t __cdecl internal_6bd55e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6bd55ea
        xor eax, eax
        ret 
        public_6bd55ea : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6bd55e0)
    }
}

#undef public_6bd55ea
