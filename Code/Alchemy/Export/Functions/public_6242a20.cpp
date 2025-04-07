#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242a20);

#define public_6242a46 _public_6242a46

PROC_DECLARE(0x6242a20, internal_6242a20, public_6242a20);
extern "C" NAKED register_t __cdecl internal_6242a20()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_6242a46
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        public_6242a46 : nop
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
        UNREACHABLE_TRAP(0x6242a20)
    }
}

#undef public_6242a46
