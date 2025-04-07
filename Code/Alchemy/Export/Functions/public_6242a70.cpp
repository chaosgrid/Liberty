#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242a70);

#define public_6242a96 _public_6242a96

PROC_DECLARE(0x6242a70, internal_6242a70, public_6242a70);
extern "C" NAKED register_t __cdecl internal_6242a70()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_6242a96
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        public_6242a96 : nop
        fld dword ptr ds : [public_624bac4]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6242a70)
    }
}

#undef public_6242a96
