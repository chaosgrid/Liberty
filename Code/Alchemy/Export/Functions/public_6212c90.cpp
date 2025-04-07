#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212c90);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_6212ca6 _public_6212ca6
#define public_6212d02 _public_6212d02
#define public_6212d70 _public_6212d70
#define public_6212d9b _public_6212d9b

PROC_DECLARE(0x6212c90, internal_6212c90, public_6212c90);
extern "C" NAKED register_t __cdecl internal_6212c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_62579d0]
        sub esp, 0xC
        test eax, eax
        jne public_6212ca6
        call public_623e830
        mov dword ptr ds : [public_62579d0], eax
        public_6212ca6 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ds:[esi+0x4C]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [esi+0xA4]
        fnstsw ax
        and eax, 0x4100
        jne public_6212d02
        mov eax, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr ds : [eax], 0x7F7FFFFF
        or eax, 0xFFFFFFFF
        add esp, 0xC
        ret 0xC
        public_6212d02 : nop
        fld dword ptr ds : [esi+0xA0]
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xA0]
        fadd st(0), st
        fdivp 
        fsubr qword ptr ds : [public_624c370]
        fld dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jp public_6212d70
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [public_624c6fc]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        and eax, 0x4100
        jne public_6212d70
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xA4]
        fsub dword ptr ss : [esp+0x14]
        fdivp 
        fsubr dword ptr ds : [public_624bac4]
        public_6212d70 : nop
        fmulp 
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_624c6f8]
        fld st(0)
        fstp dword ptr ds : [eax]
        mov cl, byte ptr ds : [public_62579d4]
        test cl, cl
        je public_6212d9b
        fsub dword ptr ds : [esi+0xD8]
        pop esi
        fstp dword ptr ds : [eax]
        xor eax, eax
        add esp, 0xC
        ret 0xC
        public_6212d9b : nop
        fstp st(0)
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6212c90)
    }
}

#undef public_6212ca6
#undef public_6212d02
#undef public_6212d70
#undef public_6212d9b
