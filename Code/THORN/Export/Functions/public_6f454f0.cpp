#include "THORN-PCH.h"


#define public_6f4554c _public_6f4554c
#define public_6f45556 _public_6f45556
#define public_6f45565 _public_6f45565

PROC_DECLARE(0x6f454f0, internal_6f454f0, public_6f454f0);
extern "C" NAKED register_t __cdecl internal_6f454f0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fcomp dword ptr ds : [public_6f5a1d4]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 0x44
        jnp public_6f45565
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        sub eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        fidiv dword ptr ds : [esi+0x40]
        fst dword ptr ss : [esp+0x14]
        je public_6f45556
        mov edx, dword ptr ds : [esi+0x50]
        fstp st(0)
        test edx, edx
        jle public_6f4554c
        mov edi, dword ptr ds : [ecx]
        push edx
        push eax
        call dword ptr ds : [edi+0x30]
        fmul dword ptr ss : [esp+0x18]
        pop edi
        fadd dword ptr ds : [esi+0x54]
        pop esi
        add esp, 8
        ret 8
        public_6f4554c : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        public_6f45556 : nop
        fmul dword ptr ss : [esp+0x18]
        pop edi
        fadd dword ptr ds : [esi+0x54]
        pop esi
        add esp, 8
        ret 8
        public_6f45565 : nop
        fld dword ptr ds : [public_6f5a1b8]
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f454f0)
    }
}

#undef public_6f4554c
#undef public_6f45556
#undef public_6f45565
