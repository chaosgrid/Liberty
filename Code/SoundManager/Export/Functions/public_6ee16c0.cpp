#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ee16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8dd0);

#define public_6ee172c _public_6ee172c
#define public_6ee172e _public_6ee172e

PROC_DECLARE(0x6ee16c0, internal_6ee16c0, public_6ee16c0);
extern "C" NAKED register_t __cdecl internal_6ee16c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        xor eax, eax
        test ecx, ecx
        push esi
        je public_6ee172e
        mov eax, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [ecx+0x1C]
        shr eax, 1
        test al, 1
        je public_6ee172c
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6ee172c
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6ee9230]
        fnstsw ax
        test ah, 0x44
        jnp public_6ee172c
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        push eax
        fstp dword ptr ss : [esp+0x18]
        call public_6ee1670
        add esp, 4
        pop esi
        fdivr dword ptr ss : [esp+0x10]
        add esp, 8
        jmp public_6ee8dd0
        public_6ee172c : nop
        mov eax, esi
        public_6ee172e : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ee16c0)
    }
}

#undef public_6ee172c
#undef public_6ee172e
