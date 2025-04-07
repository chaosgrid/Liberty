#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63735c0);

#define public_63735d8 _public_63735d8
#define public_63735e6 _public_63735e6
#define public_63735e8 _public_63735e8

PROC_DECLARE(0x63735c0, internal_63735c0, public_63735c0);
extern "C" NAKED register_t __cdecl internal_63735c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_63735e6
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_63735e6
        mov edx, dword ptr ss : [esp+4]
        public_63735d8 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_63735e8
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63735d8
        public_63735e6 : nop
        xor eax, eax
        public_63735e8 : nop
        ret 
        UNREACHABLE_TRAP(0x63735c0)
    }
}

#undef public_63735d8
#undef public_63735e6
#undef public_63735e8
