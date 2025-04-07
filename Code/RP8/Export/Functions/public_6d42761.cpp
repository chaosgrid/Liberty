#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42761);

#define public_6d42789 _public_6d42789

PROC_DECLARE(0x6d42761, internal_6d42761, public_6d42761);
extern "C" NAKED register_t __cdecl internal_6d42761()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d42789
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d42789
        mov eax, 0x800
        test dword ptr ds : [ecx+8], eax
        je public_6d42789
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_6d42789
        movzx ecx, byte ptr ds : [ecx+0x2C]
        mov dword ptr ds : [edx], ecx
        ret 
        public_6d42789 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d42761)
    }
}

#undef public_6d42789
