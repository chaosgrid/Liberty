#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3b70);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b3b9c _public_62b3b9c
#define public_62b3c12 _public_62b3c12
#define public_62b3c1e _public_62b3c1e
#define public_62b3c22 _public_62b3c22

PROC_DECLARE(0x62b3b70, internal_62b3b70, public_62b3b70);
extern "C" NAKED register_t __cdecl internal_62b3b70()
{
    __asm
    {
        sub esp, 0x10
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], 0
        fcomp dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+8], 0x3F800000
        fnstsw ax
        test ah, 0x41
        je public_62b3b9c
        mov dword ptr ss : [esp+8], 0xBF800000
        public_62b3b9c : nop
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+8]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62b4540
        fld dword ptr ss : [esp]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62b3c1e
        fld dword ptr ss : [esp+4]
        fabs 
        fcomp qword ptr ds : [public_639e6c0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3c12
        fld dword ptr ss : [esp+0x14]
        fabs 
        fmul dword ptr ss : [esp]
        fdiv dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3c22
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        add esp, 0x10
        ret 8
        public_62b3c12 : nop
        fld dword ptr ds : [public_6399408]
        add esp, 0x10
        ret 8
        public_62b3c1e : nop
        fld dword ptr ss : [esp+0xC]
        public_62b3c22 : nop
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62b3b70)
    }
}

#undef public_62b3b9c
#undef public_62b3c12
#undef public_62b3c1e
#undef public_62b3c22
