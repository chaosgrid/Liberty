#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f682c0);

#define public_6f68337 _public_6f68337
#define public_6f6834f _public_6f6834f

PROC_DECLARE(0x6f682c0, internal_6f682c0, public_6f682c0);
extern "C" NAKED register_t __cdecl internal_6f682c0()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [public_6fb364c]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x10], 0xC0000000
        call esi
        lea edx, ss:[esp+0x14]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        call esi
        add esp, 0x10
        test edi, edi
        pop edi
        pop esi
        jne public_6f6834f
        test eax, eax
        jne public_6f6834f
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp], ecx
        fnstsw ax
        test ah, 0x44
        jnp public_6f68337
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        public_6f68337 : nop
        mov edx, dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_6fb33f4]
        add esp, 0xC
        public_6f6834f : nop
        fld dword ptr ss : [esp]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f682c0)
    }
}

#undef public_6f68337
#undef public_6f6834f
