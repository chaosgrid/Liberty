#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);

#define public_636e7e8 _public_636e7e8
#define public_636e7f5 _public_636e7f5
#define public_636e7f8 _public_636e7f8

PROC_DECLARE(0x636e7d0, internal_636e7d0, public_636e7d0);
extern "C" NAKED register_t __cdecl internal_636e7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_636e7f5
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_636e7f5
        mov edx, dword ptr ss : [esp+8]
        public_636e7e8 : nop
        cmp eax, edx
        je public_636e7f8
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_636e7e8
        public_636e7f5 : nop
        xor eax, eax
        ret 
        public_636e7f8 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x636e7d0)
    }
}

#undef public_636e7e8
#undef public_636e7f5
#undef public_636e7f8
