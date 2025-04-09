#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7d80);

#define public_4f7d8d _public_4f7d8d
#define public_4f7d8f _public_4f7d8f
#define public_4f7da3 _public_4f7da3

PROC_DECLARE(0x4f7d80, internal_4f7d80, public_4f7d80);
extern "C" NAKED register_t __cdecl internal_4f7d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4f7d8d
        add eax, 8
        jmp public_4f7d8f
        public_4f7d8d : nop
        xor eax, eax
        public_4f7d8f : nop
        mov edx, dword ptr ds : [ecx+0x44]
        add ecx, 0x44
        cmp eax, edx
        je public_4f7da3
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c62a8]
        public_4f7da3 : nop
        ret 4
        UNREACHABLE_TRAP(0x4f7d80)
    }
}

#undef public_4f7d8d
#undef public_4f7d8f
#undef public_4f7da3
