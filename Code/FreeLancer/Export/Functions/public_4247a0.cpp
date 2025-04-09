#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4247a0);

#define public_4247bb _public_4247bb

PROC_DECLARE(0x4247a0, internal_4247a0, public_4247a0);
extern "C" NAKED register_t __cdecl internal_4247a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [ecx]
        xor al, al
        test ecx, ecx
        je public_4247bb
        mov edx, dword ptr ds : [ecx]
        push 0
        push ecx
        call dword ptr ds : [edx+0xC]
        test eax, eax
        setge al
        public_4247bb : nop
        ret 
        UNREACHABLE_TRAP(0x4247a0)
    }
}

#undef public_4247bb
