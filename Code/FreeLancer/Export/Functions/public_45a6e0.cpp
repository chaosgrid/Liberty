#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a6e0);

#define public_45a6f4 _public_45a6f4
#define public_45a70b _public_45a70b
#define public_45a722 _public_45a722
#define public_45a73d _public_45a73d

PROC_DECLARE(0x45a6e0, internal_45a6e0, public_45a6e0);
extern "C" NAKED register_t __cdecl internal_45a6e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7ec]
        fnstsw ax
        test ah, 0x41
        jp public_45a6f4
        xor eax, eax
        ret 
        public_45a6f4 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7f0]
        fnstsw ax
        test ah, 0x41
        jp public_45a70b
        mov eax, 1
        ret 
        public_45a70b : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7f8]
        fnstsw ax
        test ah, 1
        jne public_45a722
        mov eax, 4
        ret 
        public_45a722 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7f4]
        fnstsw ax
        test ah, 0x41
        mov eax, 3
        je public_45a73d
        mov eax, 2
        public_45a73d : nop
        ret 
        UNREACHABLE_TRAP(0x45a6e0)
    }
}

#undef public_45a6f4
#undef public_45a70b
#undef public_45a722
#undef public_45a73d
