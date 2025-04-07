#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3c30);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b3c51 _public_62b3c51
#define public_62b3c6a _public_62b3c6a
#define public_62b3cc9 _public_62b3cc9

PROC_DECLARE(0x62b3c30, internal_62b3c30, public_62b3c30);
extern "C" NAKED register_t __cdecl internal_62b3c30()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 8
        fcomp dword ptr ds : [public_639a1d0]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 0x41
        jne public_62b3c51
        mov dword ptr ss : [esp+0x10], 0x3F800000
        jmp public_62b3c6a
        public_62b3c51 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62b3c6a
        mov dword ptr ss : [esp+0x10], 0xBF800000
        public_62b3c6a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3cc9
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_62b4540
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_639e6c8]
        fnstsw ax
        test ah, 0x41
        jne public_62b3cc9
        fld dword ptr ss : [esp+8]
        pop esi
        fdiv dword ptr ss : [esp]
        add esp, 8
        ret 8
        public_62b3cc9 : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62b3c30)
    }
}

#undef public_62b3c51
#undef public_62b3c6a
#undef public_62b3cc9
