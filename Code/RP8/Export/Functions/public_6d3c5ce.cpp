#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3c5f6 _public_6d3c5f6
#define public_6d3c5f8 _public_6d3c5f8

PROC_DECLARE(0x6d3c5ce, internal_6d3c5ce, public_6d3c5ce);
extern "C" NAKED register_t __cdecl internal_6d3c5ce()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ds : [public_6d5f8e0]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_6d3c5f6
        fcomp dword ptr ds : [public_6d5f8dc]
        fnstsw ax
        test ah, 0x41
        jp public_6d3c5f8
        xor eax, eax
        inc eax
        ret 
        public_6d3c5f6 : nop
        fstp st(0)
        public_6d3c5f8 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d3c5ce)
    }
}

#undef public_6d3c5f6
#undef public_6d3c5f8
