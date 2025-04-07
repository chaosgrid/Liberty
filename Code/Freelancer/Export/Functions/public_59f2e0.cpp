#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f200);

#define public_59f348 _public_59f348
#define public_59f34a _public_59f34a
#define public_59f353 _public_59f353

PROC_DECLARE(0x59f2e0, internal_59f2e0, public_59f2e0);
extern "C" NAKED register_t __cdecl internal_59f2e0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        lea eax, ss:[esp+8]
        push eax
        add ecx, 0x7C
        push ecx
        xor bl, bl
        call public_59f200
        add esp, 8
        test al, al
        je public_59f353
        fild dword ptr ds : [public_616844]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 1
        jne public_59f348
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_59f34a
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_59f34a
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_59f34a
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
        public_59f348 : nop
        fstp st(0)
        public_59f34a : nop
        xor al, al
        pop ebx
        add esp, 0x14
        ret 4
        public_59f353 : nop
        mov al, bl
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x59f2e0)
    }
}

#undef public_59f348
#undef public_59f34a
#undef public_59f353
