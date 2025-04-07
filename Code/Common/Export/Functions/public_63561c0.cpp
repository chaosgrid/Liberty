#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355db0);
CLANG_FORWARD_PROC_SYMBOL(public_6356000);
CLANG_FORWARD_PROC_SYMBOL(public_6356050);
CLANG_FORWARD_PROC_SYMBOL(public_63561c0);

#define public_63561fa _public_63561fa
#define public_63561fc _public_63561fc
#define public_6356219 _public_6356219

PROC_DECLARE(0x63561c0, internal_63561c0, public_63561c0);
extern "C" NAKED register_t __cdecl internal_63561c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ds : [ecx+0x28]
        sub esp, 0x6C
        push eax
        push ecx
        lea ecx, ss:[esp+8]
        call public_6355db0
        lea ecx, ss:[esp]
        call public_6356000
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_63a5464]
        fld dword ptr ss : [esp+0x70]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63561fa
        fstp dword ptr ss : [esp+0x70]
        jmp public_63561fc
        public_63561fa : nop
        fstp st(0)
        public_63561fc : nop
        fld dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_6356219
        fld dword ptr ds : [public_63a53d4]
        add esp, 0x6C
        ret 4
        public_6356219 : nop
        fld dword ptr ss : [esp+0x70]
        push ecx
        fdiv dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+4]
        fstp dword ptr ss : [esp]
        call public_6356050
        fld dword ptr ss : [esp+0x70]
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x63561c0)
    }
}

#undef public_63561fa
#undef public_63561fc
#undef public_6356219
