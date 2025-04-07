#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67780);

#define public_6ed69e4 _public_6ed69e4
#define public_6ed69f4 _public_6ed69f4
#define public_6ed6a21 _public_6ed6a21
#define public_6ed6a2b _public_6ed6a2b

PROC_DECLARE(0x6ed69c0, internal_6ed69c0, public_6ed69c0);
extern "C" NAKED register_t __cdecl internal_6ed69c0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_6ed69e4
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edi+4]
        push ecx
        call dword ptr ds : [public_6fb3444]
        add esp, 8
        public_6ed69e4 : nop
        mov esi, dword ptr ds : [edi+0x18]
        cmp esi, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+8], 0
        je public_6ed6a21
        public_6ed69f4 : nop
        lea edx, ss:[esp+0xC]
        push esi
        push edx
        call public_6f67780
        fcom dword ptr ds : [public_6fb5e84]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_6ed6a2b
        fadd dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi+0x1C]
        add esi, 4
        cmp esi, eax
        fstp dword ptr ss : [esp+8]
        jne public_6ed69f4
        public_6ed6a21 : nop
        fld dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 8
        ret 
        public_6ed6a2b : nop
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_6fb6280]
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ed69c0)
    }
}

#undef public_6ed69e4
#undef public_6ed69f4
#undef public_6ed6a21
#undef public_6ed6a2b
