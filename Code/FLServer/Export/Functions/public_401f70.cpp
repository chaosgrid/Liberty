#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f70);

#define public_401f86 _public_401f86
#define public_401f9c _public_401f9c

PROC_DECLARE(0x401f70, internal_401f70, public_401f70);
extern "C" NAKED register_t __cdecl internal_401f70()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_41c080]
        fnstsw ax
        test ah, 0x41
        jne public_401f86
        xor al, al
        ret 4
        public_401f86 : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_41c078]
        fnstsw ax
        test ah, 5
        jp public_401f9c
        xor al, al
        ret 4
        public_401f9c : nop
        fld dword ptr ss : [esp+4]
        mov al, 1
        fdivr qword ptr ds : [public_41c078]
        fstp dword ptr ds : [ecx+0x634]
        ret 4
        UNREACHABLE_TRAP(0x401f70)
    }
}

#undef public_401f86
#undef public_401f9c
