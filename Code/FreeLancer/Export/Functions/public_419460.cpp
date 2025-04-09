#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419460);

#define public_41947e _public_41947e
#define public_4194a0 _public_4194a0
#define public_4194d6 _public_4194d6

PROC_DECLARE(0x419460, internal_419460, public_419460);
extern "C" NAKED register_t __cdecl internal_419460()
{
    __asm
    {
        mov al, byte ptr ds : [ecx]
        sub esp, 0xC
        test al, al
        je public_4194a0
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_41947e
        fld dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        public_41947e : nop
        fld dword ptr ds : [ecx+8]
        fsub qword ptr ds : [public_5c75f8]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4194d6
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        add esp, 0xC
        ret 4
        public_4194a0 : nop
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ecx+4]
        fdiv dword ptr ss : [esp]
        fstp qword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_5c71c4]
        fsubr qword ptr ss : [esp+0xC]
        add esp, 8
        fabs 
        fmul dword ptr ss : [esp]
        public_4194d6 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x419460)
    }
}

#undef public_41947e
#undef public_4194a0
#undef public_4194d6
