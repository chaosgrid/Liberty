#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd55c0);

#define public_6bd55ca _public_6bd55ca

PROC_DECLARE(0x6bd55c0, internal_6bd55c0, public_6bd55c0);
extern "C" NAKED register_t __cdecl internal_6bd55c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6bd55ca
        xor eax, eax
        ret 
        public_6bd55ca : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6bd55c0)
    }
}

#undef public_6bd55ca
