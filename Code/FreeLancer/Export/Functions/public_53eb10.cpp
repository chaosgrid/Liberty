#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53eb10);

#define public_53eb53 _public_53eb53
#define public_53eb89 _public_53eb89
#define public_53eb93 _public_53eb93
#define public_53ebc9 _public_53ebc9
#define public_53ebcf _public_53ebcf

PROC_DECLARE(0x53eb10, internal_53eb10, public_53eb10);
extern "C" NAKED register_t __cdecl internal_53eb10()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ss : [esp+0xC]
        fabs 
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fabs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_53eb53
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_53eb53
        fld dword ptr ds : [public_5c7474]
        add esp, 8
        ret 
        public_53eb53 : nop
        fld dword ptr ss : [esp]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_53eb93
        fld dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp]
        fld1 
        fpatan 
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53eb89
        fsub dword ptr ds : [public_5dc88c]
        add esp, 8
        ret 
        public_53eb89 : nop
        fsubr dword ptr ds : [public_5dc88c]
        add esp, 8
        ret 
        public_53eb93 : nop
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+4]
        fchs 
        fld1 
        fpatan 
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_53ebcf
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53ebc9
        fsubr dword ptr ds : [public_5c8a5c]
        add esp, 8
        ret 
        public_53ebc9 : nop
        fsubr dword ptr ds : [public_5df814]
        public_53ebcf : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x53eb10)
    }
}

#undef public_53eb53
#undef public_53eb89
#undef public_53eb93
#undef public_53ebc9
#undef public_53ebcf
