#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b3afb _public_62b3afb
#define public_62b3b07 _public_62b3b07
#define public_62b3b56 _public_62b3b56
#define public_62b3b5c _public_62b3b5c

PROC_DECLARE(0x62b3aa0, internal_62b3aa0, public_62b3aa0);
extern "C" NAKED register_t __cdecl internal_62b3aa0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 0x41
        jnp public_62b3b56
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x6C]
        fst dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3b56
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+4], 0
        je public_62b3afb
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push 1
        jmp public_62b3b07
        public_62b3afb : nop
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0
        public_62b3b07 : nop
        mov ecx, esi
        push 0
        call public_62b4540
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_62b3b5c
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jnp public_62b3b5c
        fld dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b3b5c
        fstp st(0)
        pop esi
        fld dword ptr ss : [esp]
        fdiv dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x10]
        add esp, 0xC
        ret 8
        public_62b3b56 : nop
        fld dword ptr ds : [public_6399408]
        public_62b3b5c : nop
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62b3aa0)
    }
}

#undef public_62b3afb
#undef public_62b3b07
#undef public_62b3b56
#undef public_62b3b5c
