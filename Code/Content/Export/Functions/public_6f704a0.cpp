#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f704a0);

#define public_6f70521 _public_6f70521

PROC_DECLARE(0x6f704a0, internal_6f704a0, public_6f704a0);
extern "C" NAKED register_t __cdecl internal_6f704a0()
{
    __asm
    {
        push ecx
        cmp byte ptr ds : [public_6fd1c78], 1
        push esi
        je public_6f70521
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6f49bc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f70521
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+4]
        push ecx
        push eax
        call dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [public_6fb366c]
        mov eax, dword ptr ss : [esp+0x20]
        push 0
        push eax
        call public_6f50f90
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_6fbbd90]
        add esp, 0x18
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jnp public_6f70521
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push 1
        push ecx
        push edx
        mov ecx, esi
        call public_6f33f80
        push eax
        call public_6f50c50
        add esp, 0x10
        public_6f70521 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f704a0)
    }
}

#undef public_6f70521
